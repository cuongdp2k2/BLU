// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    a_i = VL_RAND_RESET_I(16);
    b_i = VL_RAND_RESET_I(16);
    carry_i = VL_RAND_RESET_I(1);
    sum_o = VL_RAND_RESET_I(16);
    carry_o = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__P_stg1 = VL_RAND_RESET_I(16);
    top__DOT__dut__DOT__G_stg1 = VL_RAND_RESET_I(16);
    top__DOT__dut__DOT__P_stg2 = VL_RAND_RESET_I(8);
    top__DOT__dut__DOT__G_stg2 = VL_RAND_RESET_I(8);
    top__DOT__dut__DOT__P_stg3 = VL_RAND_RESET_I(4);
    top__DOT__dut__DOT__G_stg3 = VL_RAND_RESET_I(4);
    top__DOT__dut__DOT__P_stg4 = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT__G_stg4 = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT__P_stg6 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__G_stg6 = VL_RAND_RESET_I(1);
    top__DOT__dut__DOT__P_stg7 = VL_RAND_RESET_I(3);
    top__DOT__dut__DOT__G_stg7 = VL_RAND_RESET_I(3);
    top__DOT__dut__DOT__P_stg8 = VL_RAND_RESET_I(8);
    top__DOT__dut__DOT__G_stg8 = VL_RAND_RESET_I(8);
    top__DOT__dut__DOT__C = VL_RAND_RESET_I(16);
    top__DOT__dut__DOT____Vcellinp__stage6_dot__G_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage6_dot__P_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage7_dot1__G_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage7_dot1__P_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage7_dot2__G_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage7_dot2__P_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage7_dot3__G_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage7_dot3__P_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage8_dot2__G_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage8_dot2__P_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage8_dot3__G_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage8_dot3__P_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage8_dot4__G_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage8_dot4__P_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage8_dot5__G_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage8_dot5__P_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage8_dot6__G_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage8_dot6__P_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage8_dot7__G_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage8_dot7__P_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage8_dot8__G_i = VL_RAND_RESET_I(2);
    top__DOT__dut__DOT____Vcellinp__stage8_dot8__P_i = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
