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
            tracep->chgSData(oldp+0,(vlTOPp->top__DOT__dut__DOT__a_reg),9);
            tracep->chgSData(oldp+1,(vlTOPp->top__DOT__dut__DOT__b_reg),9);
            tracep->chgSData(oldp+2,(vlTOPp->top__DOT__dut__DOT__q_reg),9);
        }
        tracep->chgBit(oldp+3,(vlTOPp->clk_i));
        tracep->chgBit(oldp+4,(vlTOPp->rstn_i));
        tracep->chgBit(oldp+5,(vlTOPp->ct_i));
        tracep->chgCData(oldp+6,(vlTOPp->a_i),8);
        tracep->chgCData(oldp+7,(vlTOPp->b_i),8);
        tracep->chgCData(oldp+8,(vlTOPp->q_i),8);
        tracep->chgSData(oldp+9,(vlTOPp->x_o),16);
        tracep->chgSData(oldp+10,(vlTOPp->y_o),16);
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
