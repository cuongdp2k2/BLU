module dili_reduce32 #(
    parameter WIDTH = 32 ,
    parameter QINV  = 58728449 ,
    parameter Q     = 8380417 
)(
    input  signed [WIDTH-1:0] a_i ,
    output signed [WIDTH-1:0] a_o
);
    logic signed [WIDTH-1:0] a_ShiftLeft_22, a_ShiftRight_23 , a_AddShiftLeft22 , a_mulQ ;

    assign a_ShiftLeft_22   = 1 << 22 ;
    assign a_AddShiftLeft22 = a_i + a_ShiftLeft_22 ;
    assign a_ShiftRight_23  = a_AddShiftLeft22 >> 23 ;
    assign a_mulQ           = a_ShiftRight_23 * Q ;
    assign a_o              = a_i + a_mulQ ;
    
endmodule : dili_reduce32