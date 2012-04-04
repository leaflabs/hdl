module fsmc_module (
		    clk,
		    rst,

		    //fsmc
		    fsmc_data_out_en,
		    fsmc_adr,
		    fsmc_dat_i,
		    fsmc_dat_o,
		    fsmc_ce_n,
		    fsmc_we_n,
		    fsmc_oe_n,
		    fsmc_ub_n,
		    fsmc_lb_n,

		    //wishbone
		    wb_adr_o,
		    wb_dat_i,
		    wb_dat_o,
		    wb_sel_o,
		    wb_cyc_o,
		    wb_we_o,
		    wb_stb_o,
		    wb_ack_i);

   //ports
   input               clk;
   input               rst;

   input [15:0]        fsmc_adr;
   output  reg [15:0]  fsmc_dat_o;
   input [15:0]        fsmc_dat_i;
   input               fsmc_ce_n;
   input               fsmc_we_n;
   input               fsmc_oe_n;
   input               fsmc_ub_n;
   input               fsmc_lb_n;

   output  reg [23:0]  wb_adr_o;
   output  reg [31:0]  wb_dat_o;
   input [31:0]        wb_dat_i;
   output  reg [3:0]   wb_sel_o;
   output  reg         wb_cyc_o;
   output  reg         wb_we_o;
   output  reg         wb_stb_o;
   input               wb_ack_i;


   //states
   parameter       FSMC_IDLE       =   0;
   parameter       FSMC_GETADDR    =   1;
   parameter       FSMC_READ       =   2;
   parameter       FSMC_WRITE      =   3;
   parameter       FSMC_FINISH     =   4;


   //registers

   reg [7:0] 	       fsmc_state;
   reg [15:0] 	       tmp_fsmc_data;
   
   output reg 	       fsmc_data_out_en;



   //localize FSMC data

   reg [15:0] 	       lfsmc_adr;
   reg [15:0] 	       lfsmc_dat_i;
   reg 		       lfsmc_ce_n;
   reg 		       lfsmc_we_n;
   reg 		       lfsmc_oe_n;
   reg 		       lfsmc_ub_n;
   reg 		       lfsmc_lb_n;

   always @ (posedge clk) begin
      if (rst) begin
         lfsmc_adr   <= 16'h0;
         lfsmc_dat_i <= 16'h0;
         lfsmc_ce_n  <= 1;
         lfsmc_we_n  <= 1;
         lfsmc_oe_n  <= 1;
         lfsmc_ub_n  <= 1;
         lfsmc_lb_n  <= 1;
      end
      else begin
         lfsmc_adr   <= fsmc_adr;
         lfsmc_dat_i <= fsmc_dat_i;
         lfsmc_ce_n  <= fsmc_ce_n;
         lfsmc_we_n  <= fsmc_we_n;
         lfsmc_oe_n  <= fsmc_oe_n;
         lfsmc_ub_n  <= fsmc_ub_n;
         lfsmc_lb_n  <= fsmc_lb_n;
      end
   end

   //Syncronous logic
   always @ (posedge clk) begin
      if (rst) begin
         fsmc_state          <= FSMC_IDLE;
         fsmc_data_out_en    <= 0;
         fsmc_dat_o          <= 16'h0;
         wb_adr_o            <= 24'h0;
         wb_dat_o            <= 32'h0;
         wb_sel_o            <= 4'h0;
         wb_stb_o            <= 0;
         wb_cyc_o            <= 0;
         wb_we_o             <= 0;
         
         //reset wishone
      end
      else begin
         case (fsmc_state)

           FSMC_IDLE: begin

              fsmc_data_out_en    <= 0;
              fsmc_dat_o          <= 16'h0;
              wb_adr_o            <= 24'h0;
              wb_dat_o            <= 32'h0;
              wb_sel_o            <= 4'b0011;
              wb_stb_o            <= 0;
              wb_cyc_o            <= 0;
              wb_we_o             <= 0;

              if (lfsmc_ce_n == 0) begin
                 fsmc_state  <= FSMC_GETADDR;
              end

           end

           FSMC_GETADDR: begin

              if (lfsmc_ce_n == 0) begin

                 //load wishbone address
                 wb_adr_o    <= {8'h00, lfsmc_adr};

		 //watch for oe/we toggles
                 if (lfsmc_ce_n) begin
		    fsmc_state <= FSMC_IDLE;
		 end
		 else if (~lfsmc_oe_n) begin
                    //fsmc read
                    wb_cyc_o    <= 1;
                    wb_stb_o    <= 1;
		    wb_we_o     <= 0;
                    fsmc_state  <= FSMC_READ;
                 end
                 else if (~lfsmc_we_n) begin
                    //fsmc write
                    wb_cyc_o    <= 1;
                    wb_stb_o    <= 1;
                    wb_we_o     <= 1;
                    fsmc_state  <= FSMC_WRITE;
                    wb_dat_o    <= {16'h0000, lfsmc_dat_i};
                 end // if (~lfsmc_we_n)
		 else begin
		    fsmc_state <= FSMC_GETADDR;
		 end // else: !if(~lfsmc_we_n)

	      end 

	   end

           FSMC_READ: begin
	      
	      if (lfsmc_ce_n) begin
		 fsmc_data_out_en <= 0;
		 fsmc_state <= FSMC_IDLE;
	      end	      
              else if (~lfsmc_oe_n) begin
		 if (wb_ack_i) begin
                    //got an ack back from the wishbone bus
                    //disable the wishbone device
                    wb_stb_o    <= 0;
                    wb_cyc_o    <= 0;
                    fsmc_data_out_en    <= 1;
		    fsmc_dat_o <= wb_dat_i[15:0];
       		    fsmc_state  <= FSMC_FINISH;        
		 end // if (wb_ack_i)
		 else begin
		    fsmc_state <= FSMC_READ;
		 end
	      end
	      else begin
		 fsmc_data_out_en <= 0;
		 fsmc_state <= FSMC_GETADDR;
	      end // else: !if(~lfsmc_oe_en)
	      
           end
           FSMC_WRITE: begin

              if (wb_ack_i) begin
                 //got an ack back from the wishbone bus
                 //disable the wishbone
                 wb_stb_o    <= 0;
                 wb_cyc_o    <= 0;
                 fsmc_state  <= FSMC_FINISH;
              end

              if (lfsmc_ce_n) begin
                 fsmc_state  <= FSMC_IDLE;
              end

           end

           FSMC_FINISH: begin

              if (lfsmc_ce_n) begin
                 fsmc_state  <= FSMC_IDLE;
              end

           end

           default: begin

              fsmc_state  <= FSMC_IDLE;

           end

         endcase 

      end

   end

endmodule
