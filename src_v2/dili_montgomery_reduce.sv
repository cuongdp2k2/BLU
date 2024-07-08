/* verilator lint_off WIDTH */
/* verilator lint_off PINCONNECTEMPTY */
/* verilator lint_off UNUSED */

module dili_montgomery_reduce #(
    parameter WIDTH = 32 ,
    parameter QINV  = 58728449 ,
    parameter Q     = 8380417 
)(
    input  signed [2*WIDTH-1:0] a_i,
    output signed [WIDTH-1:0] a_o
);
    logic signed [2*WIDTH-1:0] t_mulINVQ , t_shift , t_mulQ;

    assign t_mulINVQ   = a_i[31:0] * QINV      ;
    assign t_mulQ   = t_mulINVQ[31:0] * Q ;
    assign t_shift = a_i - t_mulQ;
    assign a_o = t_shift >>> 32  ;

endmodule : dili_montgomery_reduce
/* verilator lint_on WIDTH */
/* verilator lint_on PINCONNECTEMPTY */
/* verilator lint_on UNUSED */