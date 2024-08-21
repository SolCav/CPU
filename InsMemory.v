
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:53:16 06/20/2024 
// Design Name: 
// Module Name:    InsMemory 
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
module InsMemory(

	input clk,
	input [7:0] address,
	output reg [10:0] code
    );
	 
	reg [10:0] rom_block[0:255];
	initial begin
		
		rom_block[0] = 11'b0_1101_000_000; //0 //INC 
		rom_block[1] = 11'b0_1110_001_000; //5 //DEC 
		rom_block[2] = 11'b1_0001_010_000; //5 //ISZ
		rom_block[3] = 11'b1_0000_000_000; //JMP
		rom_block[4] = 11'b0_1101_100_000; //0 //INC
		rom_block[5] = 11'b0_0000_110_111; //add
		 /*
		 r[0] = 0; // z
		 r[1] = 5; // x
		 r[2] = 5; // i
		 */
	
		
	end
	always @(*) begin
		code = rom_block[address];
	
	end




endmodule