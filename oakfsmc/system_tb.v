`timescale 1ns/10ps

module system_tb;

   reg clk, rst;
   wire led;
   reg [15:0] fsmc_a;
   wire [15:0] fsmc_d;
   reg 	      fsmc_ne1, fsmc_nwe, fsmc_noe, fsmc_nbl1, fsmc_nbl0;
   reg [15:0] tmp_fsmc_d;
   
   initial
     begin
	
	clk = 1'b0;
	rst = 1'b0;
	fsmc_ne1 = 1'b1;
	fsmc_noe = 1'b1;
	fsmc_nwe = 1'b1;
	fsmc_nbl0 = 1'b1;
	fsmc_nbl1 = 1'b1;
	#20;
	rst = 1'b1;
	#20;
	rst = 1'b0;
	fsmc_ne1 = 1'b0;
	fsmc_nwe = 1'b0;
	fsmc_a = 16'h0000;
	tmp_fsmc_d = 16'hAAAA;
	#300;
      	fsmc_ne1 = 1'b1;
	fsmc_nwe = 1'b1;
	tmp_fsmc_d = 16'bz;
	#300;
	fsmc_ne1 = 1'b0;
	fsmc_nwe = 1'b0;
       	fsmc_a = 16'h0001;
	tmp_fsmc_d = 16'h5555;
	#300;
	fsmc_ne1 = 1'b1;
	fsmc_nwe = 1'b1;
	tmp_fsmc_d = 16'bz;
	#300;
	fsmc_ne1 = 1'b0;
	fsmc_noe = 1'b0;
	fsmc_a = 16'h0000;
       	tmp_fsmc_d = 16'bz;
	#300;
	fsmc_ne1 = 1'b1;
	fsmc_noe = 1'b1;
	
	  

      end // initial begin

   always #10 clk = ~clk;
   assign fsmc_d = tmp_fsmc_d;
      
   system uut(
	      .clk(clk),
	      .rst(rst),
	      .led(led),
	      .fsmc_a(fsmc_a),
	      .fsmc_d(fsmc_d),
	      .fsmc_ne1(fsmc_ne1),
	      .fsmc_nwe(fsmc_nwe),
	      .fsmc_noe(fsmc_noe),
	      .fsmc_nbl1(fsmc_nbl1),
	      .fsmc_nbl0(fsmc_nbl0)
	      );
   
   endmodule
   
	
	
	  
	