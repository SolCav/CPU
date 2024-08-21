`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:55:44 06/20/2024 
// Design Name: 
// Module Name:    Regfile 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Regfile(
		input clk,
		input [2:0] op1,
		input [2:0] op2,
		input [7:0] wrb_data,
		output [7:0] reg_1,
		output [7:0] reg_2
		
    );
	reg [7:0] reg1;
	reg [7:0] reg2;
	reg [7:0] r [7:0];
	initial begin 
		 r[0] = 0; // z
		 r[1] = 5; // x
		 r[2] = 5; // i
		 r[3] = 3;
		 r[4] = 4;
		 r[5] = 5;
		 r[6] = 6;
		 r[7] = 7;
	end
	always @(posedge clk) begin
			r[op1] = wrb_data;
	end
	assign reg_1 = r[op1];
	assign reg_2 = r[op2];
	
	
endmodule
