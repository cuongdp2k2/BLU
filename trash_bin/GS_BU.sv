/* verilator lint_off WIDTH */
module GS_BU(
	// input
	input logic		  clk_i      , 
	input logic       reset_ni    ,

	input logic [7:0] P_i 		 ,
	input logic [7:0] Q_i 		 ,
	input logic [3:0] W_i 		 ,
	
	// output
	output logic [11:0] X0_o ,
	output logic [11:0] X1_o   
);
	reg [11:0] X_temp [1:0] ;
	
	always @(posedge clk_i) begin
		X_temp[0] <= P_i + Q_i  ;
		X_temp[1] <= ( P_i - Q_i ) * W_i ;
	end

	assign X0_o  = (!reset_ni) ? 0 : X_temp [0] ;
	assign X1_o  = (!reset_ni) ? 0 : X_temp [1] ;

endmodule : GS_BU
/* verilator lint_on WIDTH */
