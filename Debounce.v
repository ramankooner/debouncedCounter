`timescale 1ns / 1ps

//****************************************************************// 
//  File name: Debounce.v                                         // 
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

module Debounce(clk, reset, sw, present_output, m_tick);

	input        clk, reset, sw, m_tick;
	output       present_output;
	 
	
	reg    [2:0] present_state, next_state;
	reg          present_output, next_output;
	
	always @ (posedge clk, posedge reset)
		
		if(reset)
			begin
				present_state  <= 3'b000;
				present_output <= 1'b0;
			end
	
		else 
			begin 
				present_state  <= next_state;
				present_output <= next_output;
			end
	
	always @ (*)
		begin 
			case (present_state)
			
			3'b000:  {next_state, next_output} = (sw) ? {3'b001, 1'b0} : {3'b000, 1'b0};
			3'b001:  {next_state, next_output} = (sw) ? (m_tick) ? {3'b010, 1'b0} : {3'b001, 1'b0} : {3'b000, 1'b0};
			3'b010:  {next_state, next_output} = (sw) ? (m_tick) ? {3'b011, 1'b0} : {3'b010, 1'b0} : {3'b000, 1'b0};
			3'b011:  {next_state, next_output} = (sw) ? (m_tick) ? {3'b100, 1'b1} : {3'b011, 1'b0} : {3'b000, 1'b0};
			
			
			3'b100:  {next_state, next_output} = (sw) ? {3'b100, 1'b1} : {3'b101, 1'b1};
			3'b101:  {next_state, next_output} = (sw) ? {3'b100, 1'b1} : (m_tick) ? {3'b110, 1'b1} : {3'b101, 1'b1};
			3'b110:  {next_state, next_output} = (sw) ? {3'b100, 1'b1} : (m_tick) ? {3'b111, 1'b1} : {3'b110, 1'b1};
			3'b111:  {next_state, next_output} = (sw) ? {3'b100, 1'b1} : (m_tick) ? {3'b000, 1'b0} : {3'b111, 1'b1};
			default: {next_state, next_output} = {3'b000, 1'b0};
			
			endcase
		end
		
endmodule
