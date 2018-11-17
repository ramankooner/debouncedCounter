`timescale 1ns / 1ps
//****************************************************************// 
//  File name: DFlipFlop.v                                        // 
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

module DFlipFlop(clk, reset, D, Q);

	input  clk, reset, D;
	output Q;
	
	reg    Q;
	
	always @ (posedge clk, posedge reset)
		
		if(reset)
			Q <= 1'b0;
		
		else
			Q <= D;

endmodule
