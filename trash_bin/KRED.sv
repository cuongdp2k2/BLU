module KRED (
    input logic signed [7:0] data_i , mod_val ,
    output logic signed [7:0] data_o
) ;

    assign data_o = data_i % mod_val ;

endmodule : KRED