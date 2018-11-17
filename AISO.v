`timescale 1ns / 1ps
//****************************************************************// 
//  File name: AISO.v                                             // 
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

module AISO(clk, reset, reset_s);

	input  clk, reset;
	output reset_s;
	
	wire   Q_meta;
	wire   Q_ok;
	wire   reset_s;
	
	assign reset_s = ~Q_ok;
  
					// clk, reset,   D,     Q
	DFlipFlop u1 ( clk, reset, 1'b1, Q_meta );
	
					// clk, reset,   D,     Q
	DFlipFlop u0 ( clk, reset, Q_meta, Q_ok );
	
endmodule
