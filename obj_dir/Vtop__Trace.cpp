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
            tracep->chgCData(oldp+0,(vlTOPp->top__DOT__dut__DOT__Propagate_sig_stg_1),4);
            tracep->chgCData(oldp+1,(vlTOPp->top__DOT__dut__DOT__Generate_sig_stg_1),4);
            tracep->chgCData(oldp+2,(vlTOPp->top__DOT__dut__DOT__Propagate_sig_stg_2),2);
            tracep->chgCData(oldp+3,(vlTOPp->top__DOT__dut__DOT__Generate_sig_stg_2),2);
            tracep->chgBit(oldp+4,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__Propagate_sig_stg_2) 
                                           >> 1U) & (IData)(vlTOPp->top__DOT__dut__DOT__Propagate_sig_stg_2)))));
            tracep->chgBit(oldp+5,((1U & (((IData)(vlTOPp->top__DOT__dut__DOT__Generate_sig_stg_2) 
                                           >> 1U) | 
                                          (((IData)(vlTOPp->top__DOT__dut__DOT__Propagate_sig_stg_2) 
                                            >> 1U) 
                                           & (IData)(vlTOPp->top__DOT__dut__DOT__Generate_sig_stg_2))))));
            tracep->chgCData(oldp+6,(vlTOPp->top__DOT__dut__DOT__C_gen),4);
        }
        tracep->chgBit(oldp+7,(vlTOPp->clk_i));
        tracep->chgCData(oldp+8,(vlTOPp->a_i),4);
        tracep->chgCData(oldp+9,(vlTOPp->b_i),4);
        tracep->chgBit(oldp+10,(vlTOPp->carry_i));
        tracep->chgCData(oldp+11,(vlTOPp->sum_o),4);
        tracep->chgBit(oldp+12,(vlTOPp->carry_o));
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
