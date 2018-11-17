`timescale 1ns / 1ps
//****************************************************************// 
//  File name: pixel_controller.v                                 // 
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

module pixel_controller(clk, reset, tick, a7, a6, a5, a4, a3, a2, a1, a0, seg_sel);
	
	input        clk, reset, tick;
	output [2:0] seg_sel;
	output       a7, a6, a5, a4, a3, a2, a1, a0;
	
	reg          a7, a6, a5, a4, a3, a2, a1, a0;
	reg    [2:0] seg_sel;
	reg    [2:0] present_state, next_state;
	
	always @ (present_state)
	
		case (present_state)
		
			3'b000:  next_state = 3'b111;
			3'b001:  next_state = 3'b000;
			3'b010:  next_state = 3'b001;
			3'b011:  next_state = 3'b010;
			3'b100:  next_state = 3'b011;
			3'b101:  next_state = 3'b100;
			3'b110:  next_state = 3'b101;
			3'b111:  next_state = 3'b110;
			default: next_state = 3'b000;
			
		endcase
		
	always @ (posedge clk, posedge reset)
	
		if ( reset ) present_state = 3'b000; else

		if ( tick ) present_state = next_state; 
		
		else present_state = present_state;
		
	always @ (present_state)
		
		case ( present_state )
		
			3'b000:  { a7, a6, a5, a4, a3, a2, a1, a0, seg_sel } = 11'b1111_1110_000;
			3'b001:  { a7, a6, a5, a4, a3, a2, a1, a0, seg_sel } = 11'b1111_1101_001;
			3'b010:  { a7, a6, a5, a4, a3, a2, a1, a0, seg_sel } = 11'b1111_1011_010;
			3'b011:  { a7, a6, a5, a4, a3, a2, a1, a0, seg_sel } = 11'b1111_0111_011;
			3'b100:  { a7, a6, a5, a4, a3, a2, a1, a0, seg_sel } = 11'b1110_1111_100;
			3'b101:  { a7, a6, a5, a4, a3, a2, a1, a0, seg_sel } = 11'b1101_1111_101;
			3'b110:  { a7, a6, a5, a4, a3, a2, a1, a0, seg_sel } = 11'b1011_1111_110;
			3'b111:  { a7, a6, a5, a4, a3, a2, a1, a0, seg_sel } = 11'b0111_1111_111;
			default: { a7, a6, a5, a4, a3, a2, a1, a0, seg_sel } = 11'b1111_1111_000;
			
		endcase

endmodule
