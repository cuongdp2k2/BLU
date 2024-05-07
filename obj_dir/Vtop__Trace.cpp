// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop::traceChgTop0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtop::traceChgSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_i_temp),32);
            tracep->chgIData(oldp+1,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_i_temp),32);
            tracep->chgIData(oldp+2,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w_i_temp),32);
            tracep->chgIData(oldp+3,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_o_temp),32);
            tracep->chgIData(oldp+4,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_o_temp),32);
            tracep->chgIData(oldp+5,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_reduce32),32);
            tracep->chgIData(oldp+6,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire 
                                      + (0x7fe001U 
                                         & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire 
                                            >> 0x1fU)))),32);
            tracep->chgIData(oldp+7,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire 
                                      + (0x7fe001U 
                                         & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire 
                                            >> 0x1fU)))),32);
            tracep->chgIData(oldp+8,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire 
                                      + (0x7fe001U 
                                         & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire 
                                            >> 0x1fU)))),32);
            tracep->chgIData(oldp+9,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire 
                                      + (0x7fe001U 
                                         & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire 
                                            >> 0x1fU)))),32);
            tracep->chgIData(oldp+10,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_temp2),32);
            tracep->chgIData(oldp+11,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_temp2),32);
            tracep->chgIData(oldp+12,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mult_reduce),32);
            tracep->chgIData(oldp+13,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__add2modular),32);
            tracep->chgIData(oldp+14,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__sub2modular),32);
            tracep->chgQData(oldp+15,(VL_MULS_QQQ(64,64,64, 
                                                  VL_EXTENDS_QI(64,32, 
                                                                (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire 
                                                                 + 
                                                                 (0x7fe001U 
                                                                  & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire 
                                                                     >> 0x1fU)))), 
                                                  VL_EXTENDS_QI(64,32, 
                                                                (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire 
                                                                 + 
                                                                 (0x7fe001U 
                                                                  & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire 
                                                                     >> 0x1fU)))))),64);
            tracep->chgIData(oldp+17,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__A_wire),32);
            tracep->chgIData(oldp+18,((((IData)(0x400000U) 
                                        + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_i_temp) 
                                       >> 0x17U)),32);
            tracep->chgIData(oldp+19,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp),32);
            tracep->chgIData(oldp+20,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire),32);
            tracep->chgIData(oldp+21,((((IData)(0x400000U) 
                                        + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_i_temp) 
                                       >> 0x17U)),32);
            tracep->chgIData(oldp+22,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp),32);
            tracep->chgIData(oldp+23,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire),32);
            tracep->chgIData(oldp+24,((((IData)(0x400000U) 
                                        + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w_i_temp) 
                                       >> 0x17U)),32);
            tracep->chgIData(oldp+25,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp),32);
            tracep->chgIData(oldp+26,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire),32);
            tracep->chgIData(oldp+27,((((IData)(0x400000U) 
                                        + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__add2modular) 
                                       >> 0x17U)),32);
            tracep->chgIData(oldp+28,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp),32);
            tracep->chgIData(oldp+29,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire),32);
            tracep->chgIData(oldp+30,((((IData)(0x400000U) 
                                        + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__sub2modular) 
                                       >> 0x17U)),32);
            tracep->chgIData(oldp+31,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp),32);
            tracep->chgQData(oldp+32,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__a_temp),64);
            tracep->chgQData(oldp+34,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__t_temp),64);
            tracep->chgQData(oldp+36,(VL_MULS_QQQ(64,64,64, 0xa3faULL, 
                                                  VL_EXTENDS_QI(64,32, 
                                                                (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire 
                                                                 + 
                                                                 (0x7fe001U 
                                                                  & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire 
                                                                     >> 0x1fU)))))),64);
            tracep->chgQData(oldp+38,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__a_temp),64);
            tracep->chgQData(oldp+40,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__t_temp),64);
            tracep->chgQData(oldp+42,(VL_MULS_QQQ(64,64,64, 0xa3faULL, 
                                                  VL_EXTENDS_QI(64,32, 
                                                                (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire 
                                                                 + 
                                                                 (0x7fe001U 
                                                                  & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire 
                                                                     >> 0x1fU)))))),64);
            tracep->chgQData(oldp+44,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__a_temp),64);
            tracep->chgQData(oldp+46,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__t_temp),64);
            tracep->chgIData(oldp+48,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_i_temp),32);
            tracep->chgIData(oldp+49,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_i_temp),32);
            tracep->chgIData(oldp+50,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_i_temp),32);
            tracep->chgIData(oldp+51,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_o_temp),32);
            tracep->chgIData(oldp+52,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_o_temp),32);
            tracep->chgIData(oldp+53,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_reduce32),32);
            tracep->chgIData(oldp+54,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_reduce32),32);
            tracep->chgIData(oldp+55,((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire 
                                       + (0x7fe001U 
                                          & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire 
                                             >> 0x1fU)))),32);
            tracep->chgIData(oldp+56,(((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                        + (0x7fe001U 
                                           & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                              >> 0x1fU))) 
                                       >> 1U)),32);
            tracep->chgIData(oldp+57,((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub_reduce 
                                       >> 1U)),32);
            tracep->chgIData(oldp+58,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_temp2),32);
            tracep->chgIData(oldp+59,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_temp2),32);
            tracep->chgIData(oldp+60,((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                       + (0x7fe001U 
                                          & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                             >> 0x1fU)))),32);
            tracep->chgIData(oldp+61,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub_reduce),32);
            tracep->chgIData(oldp+62,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mult_reduce),32);
            tracep->chgIData(oldp+63,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__add2modular),32);
            tracep->chgIData(oldp+64,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub2modular),32);
            tracep->chgQData(oldp+65,(VL_MULS_QQQ(64,64,64, 
                                                  VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub_reduce), 
                                                  VL_EXTENDS_QI(64,32, 
                                                                (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire 
                                                                 + 
                                                                 (0x7fe001U 
                                                                  & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire 
                                                                     >> 0x1fU)))))),64);
            tracep->chgIData(oldp+67,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__A_wire),32);
            tracep->chgIData(oldp+68,((((IData)(0x400000U) 
                                        + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_i_temp) 
                                       >> 0x17U)),32);
            tracep->chgIData(oldp+69,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp),32);
            tracep->chgIData(oldp+70,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__A_wire),32);
            tracep->chgIData(oldp+71,((((IData)(0x400000U) 
                                        + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_i_temp) 
                                       >> 0x17U)),32);
            tracep->chgIData(oldp+72,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp),32);
            tracep->chgIData(oldp+73,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire),32);
            tracep->chgIData(oldp+74,((((IData)(0x400000U) 
                                        + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_i_temp) 
                                       >> 0x17U)),32);
            tracep->chgIData(oldp+75,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp),32);
            tracep->chgIData(oldp+76,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire),32);
            tracep->chgIData(oldp+77,((((IData)(0x400000U) 
                                        + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__add2modular) 
                                       >> 0x17U)),32);
            tracep->chgIData(oldp+78,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp),32);
            tracep->chgIData(oldp+79,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__A_wire),32);
            tracep->chgIData(oldp+80,((((IData)(0x400000U) 
                                        + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub2modular) 
                                       >> 0x17U)),32);
            tracep->chgIData(oldp+81,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp),32);
            tracep->chgQData(oldp+82,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__a_temp),64);
            tracep->chgQData(oldp+84,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__t_temp),64);
            tracep->chgQData(oldp+86,(VL_MULS_QQQ(64,64,64, 0xa3faULL, 
                                                  VL_EXTENDS_QI(64,32, 
                                                                ((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                                                  + 
                                                                  (0x7fe001U 
                                                                   & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                                                      >> 0x1fU))) 
                                                                 >> 1U)))),64);
            tracep->chgQData(oldp+88,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__a_temp),64);
            tracep->chgQData(oldp+90,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__t_temp),64);
            tracep->chgQData(oldp+92,(VL_MULS_QQQ(64,64,64, 0xa3faULL, 
                                                  VL_EXTENDS_QI(64,32, 
                                                                (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub_reduce 
                                                                 >> 1U)))),64);
            tracep->chgQData(oldp+94,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__a_temp),64);
            tracep->chgQData(oldp+96,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__t_temp),64);
        }
        tracep->chgBit(oldp+98,(vlTOPp->reset_ni));
        tracep->chgBit(oldp+99,(vlTOPp->clk_i));
        tracep->chgIData(oldp+100,(vlTOPp->data1_i),32);
        tracep->chgIData(oldp+101,(vlTOPp->data2_i),32);
        tracep->chgIData(oldp+102,(vlTOPp->zeta_i),32);
        tracep->chgIData(oldp+103,(vlTOPp->data2_o),32);
        tracep->chgIData(oldp+104,(vlTOPp->data1_o),32);
        tracep->chgIData(oldp+105,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_o_temp
                                     : 0U)),32);
        tracep->chgIData(oldp+106,(((IData)(vlTOPp->reset_ni)
                                     ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_o_temp
                                     : 0U)),32);
    }
}

void Vtop::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
