/* verilator lint_off WIDTH */
/* verilator lint_off UNUSED */
module MontRED#(
    parameter QINV = 58728449 ,
    parameter Q    = 8380417  
)(
    input  logic signed [63:0] A_i,
    output logic signed [31:0] A_o
);
    reg signed [63:0] a_temp;
    reg signed [63:0] t_temp;

    always @* begin
        // Bước 1: t = (int64_t)(int32_t)a*QINV
        a_temp = A_i;
        t_temp = a_temp * QINV;

        // Bước 2: t = (a - (int64_t)t*Q) >> 32
        t_temp = a_temp - (t_temp[31:0] * Q) >> 32;

        // Bước 3: Gán kết quả
        A_o = t_temp[31:0];
    end

endmodule : MontRED
/* verilator lint_on WIDTH */
/* verilator lint_on UNUSED */
