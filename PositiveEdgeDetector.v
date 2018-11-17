`timescale 1ns / 1ps
//****************************************************************// 
//  File name: PositiveEdgeDetector.v                             // 
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

module PositiveEdgeDetect(clk, reset, db, ped);

	input clk, reset, db; 
	
	output ped; 
	
	wire Q1, Q2;
	
	assign ped = ( Q1 & ~Q2 ); 
	
	DFlipFlop u1 ( clk, reset, db, Q1 );
	DFlipFlop u0 ( clk, reset, Q1, Q2 );


endmodule
