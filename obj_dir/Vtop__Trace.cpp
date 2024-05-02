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
            tracep->chgQData(oldp+0,(vlTOPp->top__DOT__dut__DOT__data1_intt),64);
            tracep->chgQData(oldp+2,(vlTOPp->top__DOT__dut__DOT__data2_intt),64);
            tracep->chgIData(oldp+4,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta_temp),32);
            tracep->chgQData(oldp+5,(((0x80000000U 
                                       & vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta_temp)
                                       ? (0xffffffff00000000ULL 
                                          | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta_temp)))
                                       : (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__zeta_temp)))),64);
            tracep->chgQData(oldp+7,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u),64);
            tracep->chgQData(oldp+9,(((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u 
                                       + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t) 
                                      >> 1U)),64);
            tracep->chgQData(oldp+11,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t),64);
            tracep->chgQData(oldp+13,(((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u 
                                        - vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t) 
                                       >> 1U)),64);
            tracep->chgQData(oldp+15,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u 
                                       + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t)),64);
            tracep->chgQData(oldp+17,((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u 
                                       - vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t)),64);
            tracep->chgIData(oldp+19,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mod_Q__DOT__temp),32);
            tracep->chgIData(oldp+20,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta_temp),32);
            tracep->chgQData(oldp+21,(((0x80000000U 
                                        & vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta_temp)
                                        ? (0xffffffff00000000ULL 
                                           | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta_temp)))
                                        : (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta_temp)))),64);
            tracep->chgQData(oldp+23,(((vlTOPp->top__DOT__dut__DOT__data1_intt 
                                        + vlTOPp->top__DOT__dut__DOT__data2_intt) 
                                       >> 1U)),64);
            tracep->chgQData(oldp+25,(((vlTOPp->top__DOT__dut__DOT__data1_intt 
                                        - vlTOPp->top__DOT__dut__DOT__data2_intt) 
                                       >> 1U)),64);
            tracep->chgQData(oldp+27,(VL_DIV_QQQ(64, 
                                                 ((vlTOPp->top__DOT__dut__DOT__data1_intt 
                                                   - vlTOPp->top__DOT__dut__DOT__data2_intt) 
                                                  >> 1U), 
                                                 ((0x80000000U 
                                                   & vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta_temp)
                                                   ? 
                                                  (0xffffffff00000000ULL 
                                                   | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta_temp)))
                                                   : (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__zeta_temp))))),64);
            tracep->chgIData(oldp+29,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mod_Q__DOT__temp),32);
        }
        tracep->chgBit(oldp+30,(vlTOPp->clk_i));
        tracep->chgBit(oldp+31,(vlTOPp->reset_ni));
        tracep->chgQData(oldp+32,(vlTOPp->data1_i),64);
        tracep->chgQData(oldp+34,(vlTOPp->data2_i),64);
        tracep->chgIData(oldp+36,(vlTOPp->zeta_i),32);
        tracep->chgQData(oldp+37,(vlTOPp->data2_o),64);
        tracep->chgQData(oldp+39,(vlTOPp->data1_o),64);
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
