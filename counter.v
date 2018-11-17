`timescale 1ns / 1ps
//****************************************************************// 
//  File name: counter.v                                          // 
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
module counter(clk, reset, ped, uphdnl, count);

	input         clk, reset, ped, uphdnl;
	output [15:0] count;
	reg    [15:0] count;
	
	always @ (posedge clk, posedge reset)
	
		if (reset) count <= 16'b0; else
		if (ped & uphdnl) count <= count + 16'b1; else
		if (ped & ~uphdnl) count <= count - 16'b1;


endmodule
