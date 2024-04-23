/* verilator lint_off PINCONNECTEMPTY */
module Brent_Kung_adder_8bit(
    input logic [7:0] a_i , b_i ,
    input logic       carry_i ,

    output logic [7:0] sum_o ,
    output logic       carry_o
);
    logic carry_Low2High ;

    Brent_Kung_adder_4bit Low_Bit_Adder (
        .a_i (a_i[3:0]) ,
        .b_i (b_i[3:0]) ,
        .carry_i(carry_i) , 

        .sum_o(sum_o[3:0]) ,
        .carry_o(carry_Low2High) 
    ) ;

    Brent_Kung_adder_4bit High_Bit_Adder (
        .a_i (a_i[7:4]) ,
        .b_i (b_i[7:4]) , 
        .carry_i(carry_Low2High) ,

        .sum_o(sum_o[7:4]) ,
        .carry_o(carry_o) 
    ) ;

endmodule : Brent_Kung_adder_8bit
/* verilator lint_on PINCONNECTEMPTY */
