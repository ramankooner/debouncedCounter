`timescale 1ns / 1ps
//****************************************************************// 
//  File name: ad_mux.v                                           // 
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

module ad_mux(select, A7, A6, A5, A4, A3, A2, A1, A0, Y);
	
	input  [2:0] select;
	input  [3:0] A7, A6, A5, A4, A3, A2, A1, A0;
	output [3:0] Y;
	reg    [3:0] Y;
	
	always @ ( A7 or A6 or A5 or A4 or A3 or A2 or A1 or A0 or select)
		
		case(select)
			3'b000:  Y = A0;
			3'b001:  Y = A1;
			3'b010:  Y = A2; 
			3'b011:  Y = A3; 
			3'b100:  Y = A4;
			3'b101:  Y = A5; 
			3'b110:  Y = A6; 
			3'b111:  Y = A7;
			default: Y = 4'b0;
			
		endcase
		
endmodule
