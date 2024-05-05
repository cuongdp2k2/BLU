/* verilator lint_off WIDTH */
module top #(
    parameter QINV = 58728449 ,
    parameter Q    = 8380417  
)(
    input logic  clk_i ,
    input logic  [31:0] A_i ,

    output logic [31:0] A_o
);
    Modulus dut (
        .*
    );

    always @(posedge clk_i) begin
        
    end
endmodule : top 
/* verilator lint_on WIDTH */
