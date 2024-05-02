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
            tracep->chgQData(oldp+4,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u),64);
            tracep->chgQData(oldp+6,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t),64);
            tracep->chgIData(oldp+8,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w_Q),32);
            tracep->chgIData(oldp+9,(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__genW_Q__DOT__temp),32);
            tracep->chgQData(oldp+10,((vlTOPp->top__DOT__dut__DOT__data1_intt 
                                       + vlTOPp->top__DOT__dut__DOT__data2_intt)),64);
            tracep->chgQData(oldp+12,((vlTOPp->top__DOT__dut__DOT__data1_intt 
                                       - vlTOPp->top__DOT__dut__DOT__data2_intt)),64);
            tracep->chgQData(oldp+14,(((vlTOPp->top__DOT__dut__DOT__data1_intt 
                                        + vlTOPp->top__DOT__dut__DOT__data2_intt) 
                                       >> 1U)),64);
            tracep->chgQData(oldp+16,(((vlTOPp->top__DOT__dut__DOT__data1_intt 
                                        - vlTOPp->top__DOT__dut__DOT__data2_intt) 
                                       >> 1U)),64);
            tracep->chgQData(oldp+18,(VL_DIV_QQQ(64, 
                                                 ((vlTOPp->top__DOT__dut__DOT__data1_intt 
                                                   - vlTOPp->top__DOT__dut__DOT__data2_intt) 
                                                  >> 1U), 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_Q 
                                                                                >> 0x1fU)))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_Q))))),64);
            tracep->chgIData(oldp+20,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_Q),32);
            tracep->chgIData(oldp+21,(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__genW_Q__DOT__temp),32);
        }
        tracep->chgBit(oldp+22,(vlTOPp->clk_i));
        tracep->chgBit(oldp+23,(vlTOPp->reset_ni));
        tracep->chgIData(oldp+24,(vlTOPp->data1_i),32);
        tracep->chgIData(oldp+25,(vlTOPp->data2_i),32);
        tracep->chgIData(oldp+26,(vlTOPp->w_i),32);
        tracep->chgIData(oldp+27,(vlTOPp->data2_o),32);
        tracep->chgIData(oldp+28,(vlTOPp->data1_o),32);
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
