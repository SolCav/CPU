`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:37:56 06/20/2024 
// Design Name: 
// Module Name:    MiniCPU 
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


module MiniCPU(
	input clk,
	input reset,
	output [7:0]cpu_out
    );
	 /*
	wire [7:0] pc;
	wire [10:0] code;
	
	wire [3:0] opcode;
	wire [2:0] op1;
	wire [2:0] op2;
	

	wire [7:0] reg_1;
	wire [7:0] reg_2;

	wire [7:0] exc_out;
	
	wire [7:0] wrb_data;
	wire wrb;


	wire type;
	wire [7:0] jmpAdd;
	
	PC cnt(
		.clk(clk),
		.reset(reset),
		.up_down(1),
		.load(0),
		.data(0),
		.count(pc)
	);
	
	InsMemory IM_ins(
		.clk(clk),
		.address(pc),
		.code(code)
	);
	
	 Decoder decoder_ins(
		.clk(clk),
		.code(code),
		.type(type),
		.jmpAdd(jmpAdd),
		.opcode(opcode),
		.op1(op1),
		.op2(op2)
    );
 
	Regfile regfile_ins(
		.clk(clk),
		.wrb(wrb),
		.opcode(opcode),
		.op1(op1),
		.op2(op2),
		.reg_1(reg_1),
		.reg_2(reg_2),
		.wrb_data(wrb_data)
		
    );
	 
 
	ALU execute_ins(
		.clk(clk),
		.opcode(opcode),
		.reg_1(reg_1),
		.reg_2(reg_2),
		.exc_out(wrb_data),
		.wrb(wrb)
    );
	
	assign cpu_out ={wrb_data};
	//assign cpu_out = {wrb_data, reg_1};
	*/
	
endmodule
