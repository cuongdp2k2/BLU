module top (
	// input
    input logic clk_i, rstn_i,
    input logic ct_i ,
    input unsigned [7:0] a_i , b_i , q_i ,
    
    // output
    output reg [15:0] x_o , y_o 
);
	BLU dut(
		.* 
	);

endmodule : top 

