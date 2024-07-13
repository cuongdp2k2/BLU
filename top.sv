/* verilator lint_off WIDTH */
/* verilator lint_off UNUSED */
module top #(
    parameter DATA_WIDTH = 32 ,
    parameter QINV = 58728449 ,
    parameter Q    = 8380417  
)(
    input signed [31:0] a_i, b_i,
    input clk_i, rstn,
    input carry_i,
    output signed [31:0] sum_o,
    output carry_o
);
    dili_adder dut (
        .A(a_i) ,
        .B(b_i) ,
        .clk(clk_i) ,
        .rstn(rstn) ,
        .Ci(carry_i) ,
        .S(sum_o) ,
        .Co(carry_o)
    );

    // always @(posedge clk_i) begin
        
    // end
endmodule : top 
/* verilator lint_on WIDTH */
