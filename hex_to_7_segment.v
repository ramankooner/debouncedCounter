`timescale 1ns / 1ps
//****************************************************************// 
//  File name: hex_to_7_segment.v                                 // 
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

module hex_to_7_segment(hex, a, b, c, d, e, f, g);
	
	input  [3:0] hex;
	output       a, b, c, d, e, f, g;
	reg          a, b, c, d, e, f, g;
	
	always @(*)
	
		case(hex)
		4'h0:    {a, b, c, d, e, f, g} = 7'b0000001;
		4'h1:    {a, b, c, d, e, f, g} = 7'b1001111;
		4'h2:    {a, b, c, d, e, f, g} = 7'b0010010;
		4'h3:    {a, b, c, d, e, f, g} = 7'b0000110;
		4'h4:    {a, b, c, d, e, f, g} = 7'b1001100;
		4'h5:    {a, b, c, d, e, f, g} = 7'b0100100;
		4'h6:    {a, b, c, d, e, f, g} = 7'b0100000;
		4'h7:    {a, b, c, d, e, f, g} = 7'b0001111;
		4'h8:    {a, b, c, d, e, f, g} = 7'b0000000;
		4'h9:    {a, b, c, d, e, f, g} = 7'b0001100;
		4'hA:    {a, b, c, d, e, f, g} = 7'b0001000;
		4'hB:    {a, b, c, d, e, f, g} = 7'b1100000;
		4'hC:    {a, b, c, d, e, f, g} = 7'b0110001;
		4'hD:    {a, b, c, d, e, f, g} = 7'b1000010;
		4'hE:    {a, b, c, d, e, f, g} = 7'b0110000;
		4'hF:    {a, b, c, d, e, f, g} = 7'b0111000;
		default: {a, b, c, d, e, f, g} = 7'b1111110;
		
	endcase 
		
endmodule
