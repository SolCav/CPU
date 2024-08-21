
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:56:22 06/20/2024 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
		input  clk,
		input [3:0] opcode,
		input [7:0] reg_1,
		input [7:0] reg_2,
		input type,
		input [7:0] pc,
		input [7:0] jmpAdd,
		output [7:0] exc_out,
		output reg [7:0] exc_jmpAdd,
		output reg load
    );
	 
	reg [7:0] reg1;
	reg [7:0] reg2;
	reg [7:0]i;
	reg [7:0] out;
	reg CF;
	reg SF;
	initial begin
		out = 0;
		CF = 0;
		SF = 0;
		load = 0;
	end
	
	always @(*) begin
		reg1 = reg_1;
		reg2 = reg_2;
		if (type == 0)begin
			load = 0;
			exc_jmpAdd = jmpAdd;
			case (opcode)
				
				//ADD
				4'b0000:begin
					out = reg_1 + reg_2;
			
					
				end
				
				//AND
				4'b0001:begin
					out = reg_1 & reg_2;
			
				end
				
				//SUB
				4'b0010:begin
					out = reg_1 - reg_2;
					
				end
				
				//OR
				4'b0011:begin
					out = reg_1 | reg_2;
					
				end
				
				//XOR
				4'b0100:begin
					out = reg_1 ^ reg_2;
				end			
				
				//MOV
				4'b0101:begin
					out =  reg_2;
				end	
				
				//NOT
				4'b0110:begin
					out =  ~reg_1;
				end
				
				//SAR
				4'b0111:begin
					CF = reg1[0];
					SF = reg1[7];
					out = (reg1 >> reg2);
					out[7] = SF;
					
				end
				
						
				//SAL
				4'b1000:begin
					CF = reg1[7];
					SF = reg1[7];
					out = (reg1 << reg2);
					out[7] = SF;
					
					
				end		
				
				//SLR
				4'b1001:begin
					
					out = (reg1 >> reg2);
					
					
				end

				
				//SLL
				4'b1010:begin
					
					out = (reg1 << reg2);
					
					
				end		
				
				
				//ROR
				4'b1011:begin
					CF = reg1[7];
					SF = reg1[7];			
					out = reg1;
					if(reg2 != 0) begin
						for (i = 0; i < reg2; i = i + 1)begin
							CF = out[0];
							out = out >> 1;
							out[7] = CF;
						end;
					end
					
				end
				
				//ROL
				4'b1100:begin
					CF = reg1[0];
					SF = reg1[7];			
					out = reg1;		
					if(reg2 != 0) begin
					
						for (i = 0; i < reg2; i = i + 1)begin
							CF = out[7];
							out = out << 1;
							out[0] = CF;
						end;
					end
					
				end
				

				
				//INC
				4'b1101:begin
					out =  reg1 + 1;
				end
				
							
				//DEC
				4'b1110:begin
					out =  reg1 - 1;
				end
				
				//NEG
				4'b1111:begin
					out =  ~reg_1;
					out = out + 1;
				end


				
				default:;
			endcase
		end
		
		//JMP
		else begin
			if(opcode == 4'b0000)begin
				out = reg_1;
				exc_jmpAdd = jmpAdd;
				load = 1;
				
			end
			else if(opcode == 4'b0001) begin
				load = 1;
				out = reg_1 - 1;
				if(out == 8'b0000_0000)begin
					exc_jmpAdd = pc + 2;
					
				end
				else begin
					exc_jmpAdd = pc + 1;
				end
			
			end
		end
					
		
	end
	
	assign exc_out = out;
	
endmodule

