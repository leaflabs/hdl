`timescale 1ns/10ps

module system_tb;

   reg clk, rst;
   wire led;

   //------------------------------------------------------------------------
   // FSMC connection
   //------------------------------------------------------------------------
   reg [15:0] fsmc_a;
   wire [15:0] fsmc_d;
   reg 	       fsmc_ne1, fsmc_nwe, fsmc_noe, fsmc_nbl1, fsmc_nbl0;
   reg [15:0]  tmp_fsmc_d;

   //------------------------------------------------------------------------
   // SDRAM connection
   //------------------------------------------------------------------------
   wire        sdr_we_n, sdr_clk, sdr_cs_n, sdr_ras_n, sdr_cas_n, sdr_cke;
   wire [1:0]  sdr_dm;
   wire [11:0] sdr_a;
   wire [15:0] sdr_dq;
   wire [1:0]  sdr_ba;
   
   initial
     begin

	$dumpfile("system_sim.vcd");
	$dumpvars;
	
	clk = 1'b0;
	rst = 1'b0;
	fsmc_ne1 = 1'b1;
	fsmc_noe = 1'b1;
	fsmc_nwe = 1'b1;
	fsmc_nbl0 = 1'b1;
	fsmc_nbl1 = 1'b1;
	#20;
	rst = 1'b1;
	#100;
	rst = 1'b0;
	#400000;
	fsmc_ne1 = 1'b0;
	fsmc_nwe = 1'b0;
	fsmc_a = 16'hAAAA;
	tmp_fsmc_d = 16'hBBBB;
	#50000;
      	fsmc_ne1 = 1'b1;
	fsmc_nwe = 1'b1;
	tmp_fsmc_d = 16'bz;
	#50000;
	fsmc_ne1 = 1'b0;
	fsmc_nwe = 1'b0;
       	fsmc_a = 16'hCCCC;
	tmp_fsmc_d = 16'hDDDD;
 	#50000;
	fsmc_ne1 = 1'b1;
	fsmc_nwe = 1'b1;
	tmp_fsmc_d = 16'bz;
	#50000;
	fsmc_ne1 = 1'b0;
	fsmc_noe = 1'b0;
	fsmc_a = 16'h1000;
       	tmp_fsmc_d = 16'bz;
	#50000;
	fsmc_ne1 = 1'b1;
	fsmc_noe = 1'b1;
	fsmc_nwe = 1'b1;
	#100000;
	
	$finish;
		

     end // initial begin

   always #10 clk = ~clk;
   assign fsmc_d = tmp_fsmc_d;


   //-------------------------------------------------------------------------
   // Memory-Tester System
   //-------------------------------------------------------------------------
   system dut (
	       .clk(          clk   ),
	       .rst(        rst ),
	       // Status output
	       .led(          led   ),
	       // FSMC ports
	       .fsmc_a(fsmc_a),
	       .fsmc_d(fsmc_d),
	       .fsmc_ne1(fsmc_ne1),
	       .fsmc_nwe(fsmc_nwe),
	       .fsmc_noe(fsmc_noe),
	       .fsmc_nbl1(fsmc_nbl1),
	       .fsmc_nbl0(fsmc_nbl0),
	       // SDRAM Ports
	       .sdr_we_n(sdr_we_n),
	       .sdr_clk(sdr_clk),
	       .sdr_dm(sdr_dm),
	       .sdr_cs_n(sdr_cs_n),
	       .sdr_a(sdr_a),
	       .sdr_ras_n(sdr_ras_n),
	       .sdr_dq(sdr_dq),
	       .sdr_cas_n(sdr_cas_n),
	       .sdr_ba(sdr_ba),
	       .sdr_cke(sdr_cke)
	       );

   //-------------------------------------------------------------------------
   // Micron DDR Memory
   //-------------------------------------------------------------------------
   mt48lc16m16a2 sdr0 (
		       .Dq(     sdr_dq        ),
		       .Addr(   {1'b0, sdr_a} ),
		       .Ba(     sdr_ba    ),
		       .Clk(    sdr_clk   ),
		       .Cke(    sdr_cke   ),
		       .Cs_n(   sdr_cs_n  ),
		       .Ras_n(  sdr_ras_n ),
		       .Cas_n(  sdr_cas_n ),
		       .We_n(   sdr_we_n  ),
		       .Dqm(    sdr_dm    )
		       );
   
endmodule




