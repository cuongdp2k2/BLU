module dili_sub (
    input logic [31:0] A, B,
    output logic [31:0] S,
    output logic Co
) ;
    logic [31:0] B_temp ;

    assign B_temp = ~B ;

    dili_adder sub_unit(
        .A(A),
        .B(B_temp),
        .Ci(1),

        .S(S) , // A - B
        .Co(Co)
    );

endmodule : dili_sub