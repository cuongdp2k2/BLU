// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedFst;


//----------

VL_MODULE(Vtop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(carry_i,0,0);
    VL_OUT8(carry_o,0,0);
    VL_IN16(a_i,15,0);
    VL_IN16(b_i,15,0);
    VL_OUT16(sum_o,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*7:0*/ top__DOT__dut__DOT__P_stg2;
    CData/*7:0*/ top__DOT__dut__DOT__G_stg2;
    CData/*3:0*/ top__DOT__dut__DOT__P_stg3;
    CData/*3:0*/ top__DOT__dut__DOT__G_stg3;
    CData/*1:0*/ top__DOT__dut__DOT__P_stg4;
    CData/*1:0*/ top__DOT__dut__DOT__G_stg4;
    CData/*0:0*/ top__DOT__dut__DOT__P_stg6;
    CData/*0:0*/ top__DOT__dut__DOT__G_stg6;
    CData/*2:0*/ top__DOT__dut__DOT__P_stg7;
    CData/*2:0*/ top__DOT__dut__DOT__G_stg7;
    CData/*7:0*/ top__DOT__dut__DOT__P_stg8;
    CData/*7:0*/ top__DOT__dut__DOT__G_stg8;
    SData/*15:0*/ top__DOT__dut__DOT__P_stg1;
    SData/*15:0*/ top__DOT__dut__DOT__G_stg1;
    SData/*15:0*/ top__DOT__dut__DOT__C;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage6_dot__G_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage6_dot__P_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage7_dot1__G_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage7_dot1__P_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage7_dot2__G_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage7_dot2__P_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage7_dot3__G_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage7_dot3__P_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage8_dot2__G_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage8_dot2__P_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage8_dot3__G_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage8_dot3__P_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage8_dot4__G_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage8_dot4__P_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage8_dot5__G_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage8_dot5__P_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage8_dot6__G_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage8_dot6__P_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage8_dot7__G_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage8_dot7__P_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage8_dot8__G_i;
    CData/*1:0*/ top__DOT__dut__DOT____Vcellinp__stage8_dot8__P_i;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtop__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(Vtop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedFst* tracep);
    static void traceChgTop0(void* userp, VerilatedFst* tracep);
    static void traceCleanup(void* userp, VerilatedFst* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
