`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:57:13 06/20/2024 
// Design Name: 
// Module Name:    PC 
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
module PC(clk,reset,up_down,load,data,count);
  
  input clk,reset,load,up_down;
  input [7:0] data;
  output reg [7:0] count;
  
  	initial begin
		count <= 0;
	end
	
  always@(posedge clk or posedge reset) 
  begin
    if(reset)    
      count <= 0;
    else if(load)    
      count <= data;
    else if(up_down)       
      count <= count + 1;
    else            
      count <= count - 1;
		
  end

  
  endmodule
  
