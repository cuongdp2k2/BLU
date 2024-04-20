/* verilator lint_off UNUSED */
module Brent_Kung_adder (
    input logic [3:0] a_i , b_i ,
    input logic        carry_i ,

    output logic [3:0] sum_o,
    output logic       carry_o 
) ;
    logic [3 :0] Propagate_sig_stg_1  ;
    logic [3 :0] Generate_sig_stg_1   ;
    logic [1 :0] Propagate_sig_stg_2  ;
    logic [1 :0] Generate_sig_stg_2   ;
    logic        Propagate_sig_stg_3  ;
    logic        Generate_sig_stg_3   ;
    logic [3:0]  C_gen ;

    // Pre_processing 
    // Stage 1
    assign Propagate_sig_stg_1 = a_i ^ b_i ;
    assign Generate_sig_stg_1  = a_i & b_i ;

    // Carry Generation Network 
    // Stage 2
    assign Generate_sig_stg_2[0] =  Generate_sig_stg_1[1] | (Propagate_sig_stg_1[1] & Generate_sig_stg_1[0]) ;
    assign Generate_sig_stg_2[1] =  Generate_sig_stg_1[3] | (Propagate_sig_stg_1[3] & Generate_sig_stg_1[2]) ;

    assign Propagate_sig_stg_2[0] = Propagate_sig_stg_1[1] & Propagate_sig_stg_1[0] ;
    assign Propagate_sig_stg_2[1] = Propagate_sig_stg_1[3] & Propagate_sig_stg_1[2] ;

    //Stage 3
    assign Generate_sig_stg_3 = Generate_sig_stg_2[1] | (Propagate_sig_stg_2[1] & Generate_sig_stg_2[0]) ;
    assign Propagate_sig_stg_3 = Propagate_sig_stg_2[1] & Propagate_sig_stg_2[0] ;

    // Post Processing Stage
    assign C_gen [3] = Generate_sig_stg_3 ;
    assign C_gen [2] = Generate_sig_stg_1[2] | (Generate_sig_stg_2[0] & carry_i) ;
    assign C_gen [1] = Generate_sig_stg_2[0] ;
    assign C_gen [0] = Generate_sig_stg_1[0] ;

    assign sum_o = Propagate_sig_stg_1 ^ {C_gen[2:0],carry_i} ;
    assign carry_o = C_gen[3] ;

endmodule : Brent_Kung_adder
/* verilator lint_on UNUSED */