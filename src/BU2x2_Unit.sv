/* verilator lint_off DECLFILENAME */
/* verilator lint_off WIDTH */
// STAGE 0 - STORAGE --------------------------------------------------------------
// module mem_stage_0 #(
//     parameter DATA_WIDTH = 32 , 
//     parameter Val_Q = 8380417 
// )(
//     input logic reset_ni , clk_i ,
//     input logic is_GS_BU_i ,
//     input logic [2*DATA_WIDTH-1:0] data1_i , data2_i ,
//     input logic [DATA_WIDTH-1:0] zeta_i ,

//     output logic is_GS_BU_o ,
//     output logic [2*DATA_WIDTH-1:0] data2_o , data1_o ,
//     output logic [DATA_WIDTH-1:0] zeta_o 
// ) ;
//     reg is_GS_BU_reg ;
//     reg [2*DATA_WIDTH-1:0] data2_reg , data1_reg ;
//     reg [DATA_WIDTH-1:0] zeta_reg ;

//     always @(posedge clk_i) begin
//         is_GS_BU_reg <= is_GS_BU_i ;
//         data2_reg    <= data2_i  ;
//         data1_reg    <= data1_i  ;
//         zeta_reg     <= zeta_i   ;
//     end

//     assign  is_GS_BU_o = (reset_ni) ? is_GS_BU_reg : 0 ;
//     assign  data1_o    = (reset_ni) ? data1_reg    : 0 ;
//     assign  data2_o    = (reset_ni) ? data2_reg    : 0 ;
//     assign  zeta_o     = (reset_ni) ? zeta_reg     : 0 ;
// endmodule: mem_stage_0

// STAGE 0 - STORAGE --------------------------------------------------------------
module mem_stage_0 #(
    parameter DATA_WIDTH = 32 , 
    parameter Val_Q = 8380417 
)(
    input logic reset_ni , clk_i ,
    input logic is_GS_BU_i ,
    input logic [2*DATA_WIDTH-1:0] data1_i , data2_i ,
    input logic [2*DATA_WIDTH-1:0] w_i ,

    output logic is_GS_BU_o ,
    output logic [2*DATA_WIDTH-1:0] data2_o , data1_o ,
    output logic [2*DATA_WIDTH-1:0] w_o 
) ;
    reg is_GS_BU_reg ;
    reg [2*DATA_WIDTH-1:0] data2_reg , data1_reg ;
    reg [2*DATA_WIDTH-1:0] w_reg ;

    always @(posedge clk_i) begin
        is_GS_BU_reg <= is_GS_BU_i  ; 
        data2_reg    <= data2_i     ;
        data1_reg    <= data1_i     ;
        w_reg        <= w_i         ;
    end

    assign  is_GS_BU_o = (reset_ni) ? is_GS_BU_reg : 0 ;
    assign  data1_o    = (reset_ni) ? data1_reg    : 0 ;
    assign  data2_o    = (reset_ni) ? data2_reg    : 0 ;
    assign  w_o        = (reset_ni) ? w_reg        : 0 ;
endmodule: mem_stage_0

// STAGE 1 - STORAGE --------------------------------------------------------------
module mem_stage_1 #(
    parameter DATA_WIDTH = 32 , 
    parameter Val_Q = 8380417 
)(
    input logic reset_ni , clk_i ,
    input logic is_GS_BU_i ,
    input logic [2*DATA_WIDTH-1:0] data1_i , data2_i ,
    input logic [2*DATA_WIDTH-1:0] data_mul_i ,
    input logic [2*DATA_WIDTH-1:0] w_i ,

    output logic is_GS_BU_o ,
    output logic [2*DATA_WIDTH-1:0] data2_o , data1_o ,
    output logic [2*DATA_WIDTH-1:0] data_mul_o ,
    output logic [2*DATA_WIDTH-1:0] w_o 
) ;
    reg is_GS_BU_reg ;
    reg [2*DATA_WIDTH-1:0] data_mul_reg ;
    reg [2*DATA_WIDTH-1:0] data2_reg , data1_reg ;
    reg [2*DATA_WIDTH-1:0] w_reg ;

    always @(posedge clk_i) begin
       data_mul_reg <= data_mul_i       ;
       is_GS_BU_reg <= is_GS_BU_i       ; 
       data2_reg    <= data2_i          ;
       data1_reg    <= data1_i          ;
       w_reg        <= w_i              ;
    end

    assign  data_mul_o = (reset_ni) ? data_mul_reg : 0 ;
    assign  is_GS_BU_o = (reset_ni) ? is_GS_BU_reg : 0 ;
    assign  data1_o    = (reset_ni) ? data1_reg    : 0 ;
    assign  data2_o    = (reset_ni) ? data2_reg    : 0 ;
    assign  w_o        = (reset_ni) ? w_reg        : 0 ;
endmodule : mem_stage_1

// STAGE 2 - STORAGE --------------------------------------------------------------
module mem_stage_2 #(
    parameter DATA_WIDTH = 32 , 
    parameter Val_Q = 8380417 
)(
    input logic reset_ni , clk_i ,
    input logic is_GS_BU_i ,
    input logic [2*DATA_WIDTH-1:0] u_i , t_i ,
    input logic [2*DATA_WIDTH-1:0] w_i ,

    output logic is_GS_BU_o ,
    output logic [2*DATA_WIDTH-1:0] u_o , t_o ,
    output logic [2*DATA_WIDTH-1:0] w_o 
) ;
    reg is_GS_BU_reg ;
    reg [2*DATA_WIDTH-1:0] u_reg , t_reg ;
    reg [2*DATA_WIDTH-1:0] w_reg ;

    always @(posedge clk_i) begin
        is_GS_BU_reg <= is_GS_BU_i  ;
        u_reg        <= u_i         ;
        t_reg        <= t_i         ;
        w_reg        <= w_i         ;
    end

    assign  is_GS_BU_o  = (reset_ni) ? is_GS_BU_reg : 0 ;
    assign  u_o         = (reset_ni) ? u_reg        : 0 ;
    assign  t_o         = (reset_ni) ? t_reg        : 0 ;
    assign  w_o         = (reset_ni) ? w_reg        : 0 ;
endmodule: mem_stage_2

// STAGE 3 - STORAGE --------------------------------------------------------------
module mem_stage_3 #(
    parameter DATA_WIDTH = 32 , 
    parameter Val_Q = 8380417 
)(
    input logic reset_ni , clk_i ,
    input logic is_GS_BU_i ,
    input logic [2*DATA_WIDTH-1:0] u_i , t_i ,
    input logic [2*DATA_WIDTH-1:0] w_i ,

    output logic is_GS_BU_o ,
    output logic [2*DATA_WIDTH-1:0] u_o , t_o ,
    output logic [2*DATA_WIDTH-1:0] w_o 
) ;
    reg is_GS_BU_reg ;
    reg [2*DATA_WIDTH-1:0] u_reg , t_reg ;
    reg [2*DATA_WIDTH-1:0] w_reg ;

    always @(posedge clk_i) begin
        is_GS_BU_reg <= is_GS_BU_i  ;
        u_reg        <= u_i         ;
        t_reg        <= t_i         ;
        w_reg        <= w_i         ;
    end

    assign  is_GS_BU_o  = (reset_ni) ? is_GS_BU_reg : 0 ;
    assign  u_o         = (reset_ni) ? u_reg        : 0 ;
    assign  t_o         = (reset_ni) ? t_reg        : 0 ;
    assign  w_o         = (reset_ni) ? w_reg        : 0 ;
endmodule: mem_stage_3

// STAGE 4 - STORAGE --------------------------------------------------------------
module mem_stage_4 #(
    parameter DATA_WIDTH = 32 , 
    parameter Val_Q = 8380417 
)(
    input logic reset_ni , clk_i ,
    input logic is_GS_BU_i ,
    input logic [2*DATA_WIDTH-1:0] u_i , t_i ,
    input logic [2*DATA_WIDTH-1:0] u_div2_i , t_div2_i ,
    input logic [2*DATA_WIDTH-1:0] w_i ,

    output logic is_GS_BU_o ,
    output logic [2*DATA_WIDTH-1:0] u_o , t_o ,
    output logic [2*DATA_WIDTH-1:0] u_div2_o , t_div2_o ,
    output logic [2*DATA_WIDTH-1:0] w_o 
) ;
    reg is_GS_BU_reg ;
    reg [2*DATA_WIDTH-1:0] u_reg , t_reg ;
    reg [2*DATA_WIDTH-1:0] u_div2_reg , t_div2_reg ;
    reg [2*DATA_WIDTH-1:0] w_reg ;

    always @(posedge clk_i) begin
        is_GS_BU_reg <= is_GS_BU_i  ;
        u_reg        <= u_i         ;
        t_reg        <= t_i         ;
        u_div2_reg   <= u_div2_i    ;
        t_div2_reg   <= t_div2_i    ;
        w_reg        <= w_i         ;
    end

    assign  is_GS_BU_o  = (reset_ni) ? is_GS_BU_reg : 0 ;
    assign  u_o         = (reset_ni) ? u_reg        : 0 ;
    assign  t_o         = (reset_ni) ? t_reg        : 0 ;
    assign  u_div2_o    = (reset_ni) ? u_div2_reg   : 0 ;
    assign  t_div2_o    = (reset_ni) ? t_div2_reg   : 0 ;
    assign  w_o         = (reset_ni) ? w_reg        : 0 ;
endmodule: mem_stage_4

// BU2x2_Unit     --------------------------------------------------------------
module BU2x2_Unit #(
    parameter DATA_WIDTH = 32 , 
    parameter Val_Q = 8380417 
)(
    input logic reset_ni , clk_i ,
    input logic is_GS_BU_i ,
    input logic [2*DATA_WIDTH-1:0] data1_i , data2_i ,
    input logic [DATA_WIDTH-1:0] zeta_i ,

    output logic [DATA_WIDTH-1:0] zeta_o ,
    output logic [2*DATA_WIDTH-1:0] data2_o , data1_o 

);
    // Wires
    logic                    is_GS_BU [5:0]              ;
    logic [DATA_WIDTH-1:0]   zeta32                      ;
    logic [2*DATA_WIDTH-1:0] zeta64                      ;
    logic [2*DATA_WIDTH-1:0] w[4:0]                      ;
    logic [2*DATA_WIDTH-1:0] u[4:1] , u_div2[4:3] , _u_  ;
    logic [2*DATA_WIDTH-1:0] t[4:1] , t_div2[4:3] , _t_  ;
    logic [2*DATA_WIDTH-1:0] mul_res [1:0]               ;
    logic [2*DATA_WIDTH-1:0] data1 [2:0]                 ;
    logic [2*DATA_WIDTH-1:0] data2 [2:0]                 ;

    // Stage_0
    ModulusComponent mod_Q (
        .A_i(zeta_i) ,
        .A_o(zeta32)
    );

    assign zeta64 = (zeta32[31]) ? {32'hffffffff,zeta32} : {32'h0,zeta32} ;

    mem_stage_0 STG_0 (
        .reset_ni(reset_ni)        ,
        .clk_i(clk_i)              ,

        .is_GS_BU_i(is_GS_BU_i)    ,
        .data1_i(data1_i)          ,
        .data2_i(data2_i)          ,
        .w_i(zeta64)               ,

        .is_GS_BU_o(is_GS_BU[0])   ,
        .data1_o(data1[0])         ,
        .data2_o(data2[0])         ,
        .w_o(w[0])               
    ) ;

    // Stage_1
    assign mul_res[0] = data2[0][DATA_WIDTH-1:0] * w[0] ;

    mem_stage_1 STG_1 (
        .reset_ni(reset_ni)          ,
        .clk_i(clk_i)                ,

        .is_GS_BU_i(is_GS_BU[0])   ,
        .data1_i(data1[0])         ,
        .data2_i(data2[0])         ,
        .data_mul_i(mul_res[0])      ,
        .w_i(w[0])                   ,

        .is_GS_BU_o(is_GS_BU[1])     ,
        .data1_o(data1[1])           ,
        .data2_o(data2[1])           ,
        .data_mul_o(mul_res[1])      ,
        .w_o(w[1]) 
    ) ;

    // Stage_2
    assign u[1] = (is_GS_BU[1]) ? {{DATA_WIDTH{data1[1][DATA_WIDTH-1]}},data1[1][DATA_WIDTH-1:0] } : data1[1] ;
    assign t[1] = (is_GS_BU[1]) ? mul_res[1] : data2[1] ;

    mem_stage_2 STG_2 (
        .reset_ni(reset_ni)        ,
        .clk_i(clk_i)              ,

        .is_GS_BU_i(is_GS_BU[1])   ,
        .u_i(u[1])                 ,
        .t_i(t[1])                 ,
        .w_i(w[1])                 ,

        .is_GS_BU_o(is_GS_BU[2])   ,
        .u_o(u[2])                 ,
        .t_o(t[2])                 ,
        .w_o(w[2])                 
    ) ;

    // Stage_3
    assign _u_ = u[2] + t[2] ;
    assign _t_ = u[2] - t[2] ;

    mem_stage_3 STG_3 (
        .reset_ni(reset_ni)        ,
        .clk_i(clk_i)              ,

        .is_GS_BU_i(is_GS_BU[2])   ,
        .u_i(_u_)                  ,
        .t_i(_t_)                  ,
        .w_i(w[2])                 ,

        .is_GS_BU_o(is_GS_BU[3])   ,
        .u_o(u[3])                 ,
        .t_o(t[3])                 ,
        .w_o(w[3])                 
    ) ;

    //  Stage_4 
    assign u_div2[3] = u[3] / 2 ;
    assign t_div2[3] = t[3] / 2 ;

    mem_stage_4 STG_4 (
        .reset_ni(reset_ni)        ,
        .clk_i(clk_i)              ,

        .is_GS_BU_i(is_GS_BU[3])   ,
        .u_i(u[3])                  ,
        .u_div2_i(u_div2[3])       ,
        .t_i(t[3])                  ,
        .t_div2_i(t_div2[3])       ,
        .w_i(w[3])                 ,

        .is_GS_BU_o(is_GS_BU[4])   ,
        .u_o(u[4])                 ,
        .u_div2_o(u_div2[4])       ,
        .t_o(t[4])                 ,
        .t_div2_o(t_div2[4])       ,
        .w_o(w[4])                 
    ) ;

    // Stage_5 
    assign data1_o = (!reset_ni) ? 0 : (is_GS_BU[4]) ? u[4] : u_div2[4]        ;
    assign data2_o = (!reset_ni) ? 0 : (is_GS_BU[4]) ? t[4] : t_div2[4] / w[4] ; 
    assign zeta_o  = w[4] ;

    // mem_stage_5 STG_5 (
    //     .reset_ni(reset_ni)        ,
    //     .clk_i(clk_i)              ,

    //     .data1_i(data1_o_temp)     ,
    //     .data2_i(data2_o_temp)     ,

    //     .data1_o(data1_o)     ,
    //     .data2_o(data2_o)     
    // ) ;

endmodule : BU2x2_Unit

/* verilator lint_on DECLFILENAME */
/* verilator lint_on WIDTH */