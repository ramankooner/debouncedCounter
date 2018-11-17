`timescale 1ns / 1ps
//****************************************************************// 
//  File name: TopModule.v                                        // 
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

module TopModule(clk, reset, sw, uphdnl, a, b, c, d, e, f, g,
                 aa7, aa6, aa5, aa4, aa3, aa2, aa1, aa0);
	
	input         clk, reset, sw, uphdnl; 
	output        a, b, c, d, e, f, g;
	output        aa7, aa6, aa5, aa4, aa3, aa2, aa1, aa0;
	
	wire          reset_s, tick, present_output, ped;
	wire   [15:0] count;
	
								 // clk, reset, reset_s
	AISO                u0 ( clk, reset, reset_s                      );
	
								 // clk,  reset,  tick
	ticker              u1 ( clk, reset_s, tick                       );
	
								 // clk,  reset,  sw, present_output, m_tick
	Debounce            u2 ( clk, reset_s, sw, present_output, tick   ); 
	
								 // clk,  reset,         db,      ped
	PositiveEdgeDetect  u3 ( clk, reset_s, present_output, ped        );
	
								 // clk,  reset,  ped, uphdnl, count
	counter             u4 ( clk, reset_s, ped, uphdnl, count         );
				
		   					 // clk, reset, a, b, c, d, e, f, g,
	    					    //	aa7, aa6, aa5, aa4, aa3, aa2, aa1, aa0,
	 		   			    //	A7, A6, A5, A4, A3, A2, A1, A0 
	Display_Controller  u5 ( clk, reset_s, a, b, c, d, e, f, g,
								    aa7, aa6, aa5, aa4, aa3, aa2, aa1, aa0,
									 4'b0, 4'b0, 4'b0, 4'b0, count[15:12],
									 count[11:8], count[7:4], count[3:0]      );
									

endmodule
