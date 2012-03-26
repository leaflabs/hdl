module system (
	       clk,
	       rst,
	       led,

	       //fsmc
	       fsmc_a,
	       fsmc_d,
	       fsmc_ne1,
	       fsmc_nwe,
	       fsmc_noe,
	       fsmc_nbl1,
	       fsmc_nbl0
	       );

   input clk, rst;
   output led;
   input [15:0] fsmc_a;
   inout [15:0] fsmc_d;
   input 	fsmc_ne1, fsmc_nwe, fsmc_noe, fsmc_nbl0, fsmc_nbl1;

   //   reg 		fsmc_data_out_en;
   //   reg [15:0] 	fsmc_dat_o;
   wire 	fsmc_data_out_en;
   wire [15:0] 	fsmc_a;
   wire [15:0] 	fsmc_d;
   wire [15:0] 	fsmc_dat_i;
   wire [15:0] 	fsmc_dat_o;
   wire 	fsmc_ne1, fsmc_nwe, fsmc_noe, fsmc_nbl1, fsmc_nbl0;
   wire [23:0] 	wb_adr_o;
   wire [31:0] 	wb_dat_o;
   wire [31:0] 	wb_dat_i;
   wire [3:0] 	wb_sel_o;
   wire 	wb_cyc_o, wb_we_o, wb_stb_o, wb_ack_i;
   
   
   fsmc_module fsmc0 (
		      .clk(clk),
		      .rst(rst),

		      .fsmc_data_out_en(fsmc_data_out_en),
		      .fsmc_adr(fsmc_a),
		      .fsmc_dat_i(fsmc_dat_i),
		      .fsmc_dat_o(fsmc_dat_o),
		      .fsmc_ce_n(fsmc_ne1),
		      .fsmc_we_n(fsmc_nwe),
		      .fsmc_oe_n(fsmc_noe),
		      .fsmc_ub_n(fsmc_nbl1),
		      .fsmc_lb_n(fsmc_nbl0),

		      .wb_adr_o(wb_adr_o),
		      .wb_dat_i(wb_dat_i),
		      .wb_dat_o(wb_dat_o),
		      .wb_sel_o(wb_sel_o),
		      .wb_cyc_o(wb_cyc_o),
		      .wb_we_o(wb_we_o),
		      .wb_stb_o(wb_stb_o),
		      .wb_ack_i(wb_ack_i)

		      );
   
   wb_bram wb_bram0 (
		     .clk(clk),
		     .rst(rst),

		     //Add signals to control your device here

		     .wbs_we_i(wb_we_o),
		     .wbs_cyc_i(wb_cyc_o),
		     .wbs_sel_i(wb_sel_o),
		     .wbs_dat_i(wb_dat_o),
		     .wbs_stb_i(wb_stb_o),
		     .wbs_ack_o(wb_ack_i),
		     .wbs_dat_o(wb_dat_i),
		     .wbs_adr_i({8'h00, wb_adr_o}),
		     .wbs_int_o(wb_int_i)

		     );

//   assign fsmc_d = fsmc_data_out_en ? 16'h1111 : 16'bz;

   assign fsmc_d = fsmc_data_out_en ? fsmc_dat_o : 16'bz;
   assign fsmc_dat_i = fsmc_data_out_en ? 16'bz : fsmc_d;
   assign led = rst;
   
endmodule
