`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:59:01 06/20/2024
// Design Name:   MiniCPU
// Module Name:   C:/Users/RM/Desktop/hasansaba/CPU/TB.v
// Project Name:  CPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MiniCPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [15:0] cpu_out;

	
	initial begin 
		 clk = 0;
		 forever begin
			 #10 clk = ~clk;
	end end




	wire [7:0] pc;
	wire [10:0] code;
	
	wire [3:0] opcode;
	wire [2:0] op1;
	wire [2:0] op2;
	

	wire [7:0] reg_1;
	wire [7:0] reg_2;

	
	wire [7:0] wrb_data;
	
	wire load;

	
	wire type;
	wire [7:0] jmpAdd;
	wire [7:0] exc_jmpAdd;
	
	
	PC cnt(
		.clk(clk),
		.reset(reset),
		.up_down(1),
		.load(load),
		.data(exc_jmpAdd),
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
		.type(type),
		.jmpAdd(jmpAdd),
		.pc(pc),
		.exc_jmpAdd(exc_jmpAdd),
		.exc_out(wrb_data),
		.load(load)
    );
	
	assign cpu_out ={wrb_data};
	

	initial begin
		// Initialize Inputs
		reset = 0;
		
		
		

		// Wait 100 ns for global reset to finish
		#1000;
        
		// Add stimulus here
		
		$finish;


	end
      
endmodule

