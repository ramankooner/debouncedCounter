`timescale 1ns / 1ps

//****************************************************************// 
//  File name: Display_Controller.v                               // 
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

module Display_Controller( clk, reset, a, b, c, d, e, f, g,
									aa7, aa6, aa5, aa4, aa3, aa2, aa1, aa0,
									A7, A6, A5, A4, A3, A2, A1, A0 );
									
	input          clk, reset;
	input   [3:0]  A7, A6, A5, A4, A3, A2, A1, A0;
	
	output         a, b, c, d, e, f, g;
	output         aa7, aa6, aa5, aa4, aa3, aa2, aa1, aa0;
	
	wire    [3:0]  hex;
	wire    [2:0]  select; 
	wire           tick;
	
	                   // hex, a, b, c, d, e, f, g
	hex_to_7_segment u0 ( hex, a, b, c, d, e, f, g                    );
	
							 // clk, reset, tick, a7, a6, a5, a4, a3, a2, a1, a0, seg_sel
	pixel_controller u1 ( clk, reset, tick, aa7, aa6, aa5, aa4, 
	                      aa3, aa2, aa1, aa0, select                  );
								 
							 // select, A7, A6, A5, A4, A3, A2, A1, A0,  Y
	ad_mux           u2 ( select, A7, A6, A5, A4, A3, A2, A1, A0, hex );
	
						    // clk, reset, tick
	ticker2          u3 ( clk, reset, tick );

endmodule
