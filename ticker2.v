`timescale 1ns / 1ps
//****************************************************************// 
//  File name: ticker2.v                                          // 
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

module ticker2(clk, reset, tick);

	input          clk, reset;
	output         tick;
	
	reg     [9:0] count;
	reg     [9:0] n_count;
	
	assign tick = (count == 1000);
	
	always @ (posedge clk, posedge reset)
	
		if(reset) 
			count <= 10'b0;
			
		else 
			count <= n_count;
	
	always @ (*)
	
		n_count = (tick) ? 10'b0 : count + 10'b1;

endmodule 