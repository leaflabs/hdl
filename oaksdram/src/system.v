// Top level module for oaksdram project

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
	       fsmc_nbl0,

	       sdr_we_n,
	       sdr_clk,
	       sdr_dm,
	       sdr_cs_n,
	       sdr_a,
	       sdr_ras_n,
	       sdr_dq,
	       sdr_cas_n,
	       sdr_ba,
	       sdr_cke
	       );

   // Generic inouts
   input clk, rst;
   output led;
   
   // FSMC inouts
   input [15:0] fsmc_a;
   inout [15:0] fsmc_d;
   input 	fsmc_ne1, fsmc_nwe, fsmc_noe, fsmc_nbl0, fsmc_nbl1;

   // SDRAM inouts
   output 	sdr_we_n;
   output 	sdr_clk;
   output [1:0] sdr_dm;
   output 	sdr_cs_n;
   output [11:0] sdr_a;
   output 	 sdr_ras_n;
   inout [15:0]  sdr_dq;
   output 	 sdr_cas_n;
   output [1:0]  sdr_ba;
   output 	 sdr_cke;

   // FSMC signals
   wire 	 fsmc_data_out_en;
   wire [15:0] 	 fsmc_a;
   wire [15:0] 	 fsmc_d;
   wire [15:0] 	 fsmc_dat_i;
   wire [15:0] 	 fsmc_dat_o;
   wire 	 fsmc_ne1, fsmc_nwe, fsmc_noe, fsmc_nbl1, fsmc_nbl0;

   wire [23:0] 	 wb_adr_o;
   wire [31:0] 	 wb_dat_o;
   wire [31:0] 	 wb_dat_i;
   wire [3:0] 	 wb_sel_o;
   wire 	 wb_cyc_o, wb_we_o, wb_stb_o, wb_ack_i;
   
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
   
   //mem1( wb_sdram )

   //wires
   wire 	 mem1_sdram_cas_n;
   wire 	 mem1_sdram_ras_n;
   wire 	 mem1_sdram_we_n;
   wire [1:0] 	 mem1_sdram_data_mask;
   wire [1:0] 	 mem1_sdram_bank;
   wire 	 mem1_sdram_clk;
   wire 	 mem1_sdram_ready;
   wire [11:0] 	 mem1_sdram_addr;
   wire 	 mem1_sdram_cke;
   wire 	 mem1_sdram_cs_n;


   wire [15:0] 	 mem1_sdram_data;


   wb_sdram 	mem1(
		     .wbs_we_i(wb_we_o),
		     .wbs_cyc_i(wb_cyc_o),
		     .clk(clk),
		     .wbs_adr_i({8'b0,wb_adr_o}),
		     .wbs_dat_i(wb_dat_o),
		     .wbs_stb_i(wb_stb_o),
		     .rst(rst),
		     .wbs_sel_i(wb_sel_o),
		     .sdram_cas_n(mem1_sdram_cas_n),
		     .wbs_ack_o(wb_ack_i),
		     .sdram_ras_n(mem1_sdram_ras_n),
		     .wbs_int_o(wb_int_i),
		     .sdram_we_n(mem1_sdram_we_n),
		     .sdram_data_mask(mem1_sdram_data_mask),
		     .sdram_bank(mem1_sdram_bank),
		     .sdram_clk(mem1_sdram_clk),
		     .sdram_ready(mem1_sdram_ready),
		     .sdram_addr(mem1_sdram_addr),
		     .wbs_dat_o(wb_dat_i),
		     .sdram_cke(mem1_sdram_cke),
		     .sdram_cs_n(mem1_sdram_cs_n),
		     .sdram_data(sdr_dq[15:0])
		     );

   //assigns
   assign	sdr_we_n	=	mem1_sdram_we_n;
   assign	sdr_clk	=	mem1_sdram_clk;
   assign	sdr_dm[1:0]	=	mem1_sdram_data_mask[1:0];
   assign	sdr_cs_n	=	mem1_sdram_cs_n;
   assign	sdr_a[11:0]	=	mem1_sdram_addr[11:0];
   assign	sdr_ras_n	=	mem1_sdram_ras_n;
   assign	sdr_cas_n	=	mem1_sdram_cas_n;
   assign	sdr_ba[1:0]	=	mem1_sdram_bank[1:0];
   assign	sdr_cke	=	mem1_sdram_cke;

   assign fsmc_d = fsmc_data_out_en ? fsmc_dat_o : 16'bz;
   assign fsmc_dat_i = fsmc_data_out_en ? 16'bz : fsmc_d;
   assign led = rst;

endmodule