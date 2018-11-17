`timescale 1ns / 1ps
//****************************************************************// 
//  File name: TopModule_tf.v                                     // 
//                                                                // 
//  Created by       Raman Kooner on February 1st, 2018.          // 
//  Copyright © 2018 Raman Kooner. All rights reserved.           // 
//                                                                // 
//                                                                // 
//  In submitting this file for class work at CSULB               // 
//  I am confirming that this is my work and the work             // 
//  of no one else. In submitting this code I acknowledge that    // 
//  plagiarism in student project work is subject to dismissal.   //  
//  from the class                                                // 
//****************************************************************//

module TopModule_tf;

	// Inputs
	reg clk;
	reg reset;
	reg sw;
	reg uphdnl;

	// Outputs
	wire a;
	wire b;
	wire c;
	wire d;
	wire e;
	wire f;
	wire g;
	wire aa7;
	wire aa6;
	wire aa5;
	wire aa4;
	wire aa3;
	wire aa2;
	wire aa1;
	wire aa0;

	// Instantiate the Unit Under Test (UUT)
	TopModule uut (
		.clk(clk), 
		.reset(reset), 
		.sw(sw), 
		.uphdnl(uphdnl), 
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.e(e), 
		.f(f), 
		.g(g), 
		.aa7(aa7), 
		.aa6(aa6), 
		.aa5(aa5), 
		.aa4(aa4), 
		.aa3(aa3), 
		.aa2(aa2), 
		.aa1(aa1), 
		.aa0(aa0)
	);

	always #5 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		sw = 0;
		uphdnl = 1;

		// Wait 100 ns for global reset to finish
		#100 reset = 0;
        
		// Add stimulus here

	end
	
	always begin 
		#30000000  sw = ~sw;
		end
	always 
		#30000000 uphdnl = ~uphdnl;

      
endmodule

