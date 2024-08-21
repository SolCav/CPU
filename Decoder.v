`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:54:38 06/20/2024 
// Design Name: 
// Module Name:    Decoder 
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
module Decoder(
		input clk,
		input [10:0] code,
		output reg type,
		output reg [7:0] jmpAdd,
		output reg [3:0] opcode,
		output reg [2:0] op1,
		output reg [2:0] op2
    );
	always @(*) begin
		type = code[10];
		jmpAdd = code[7:0];
		opcode = code[9:6];
		op1 = code[5:3];
		op2 = code[2:0];
	
	end
	
endmodule
