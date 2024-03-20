
module CT_BU #(
	parameter DATA_WIDTH = 8 ,
	parameter W_WIDTH    = 4 ,
)(
	// input
	input logic		  clk_i      , 
	input logic       reset_ni    ,

	input logic [DATA_WIDTH-1:0] P_i ,
	input logic [DATA_WIDTH-1:0] Q_i ,
	input logic [W_WIDTH-1:0]    W_i ,
	
	// output
	output logic [DATA_WIDTH+W_WIDTH-1:0] X0_o ,
	output logic [DATA_WIDTH+W_WIDTH-1:0] X1_o   
);
	reg [11:0] X_temp [1:0] ;
	
	always @(posedge clk_i) begin
		X_temp[0] <= {4'b0, P_i} + Q_i * W_i ;
		X_temp[1] <= {4'b0, P_i} - Q_i * W_i ;
	end

	assign X0_o  = (!reset_ni) ? 0 : X_temp [0] ;
	assign X1_o  = (!reset_ni) ? 0 : X_temp [1] ;

endmodule : CT_BU
