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
    VL_IN8(reset_ni,0,0);
    VL_IN(zeta_i,31,0);
    VL_OUT(zeta_o,31,0);
    VL_IN64(data1_i,63,0);
    VL_IN64(data2_i,63,0);
    VL_OUT64(data2_o,63,0);
    VL_OUT64(data1_o,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__is_GS_BU_reg;
        CData/*0:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__is_GS_BU_reg;
        CData/*0:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__is_GS_BU_reg;
        CData/*0:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__is_GS_BU_reg;
        CData/*0:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__is_GS_BU_reg;
        CData/*0:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__is_GS_BU_reg;
        CData/*0:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__is_GS_BU_reg;
        CData/*0:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__is_GS_BU_reg;
        CData/*0:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__is_GS_BU_reg;
        CData/*0:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__is_GS_BU_reg;
        IData/*31:0*/ top__DOT__dut__DOT__ntt_comp__DOT__zeta32;
        IData/*31:0*/ top__DOT__dut__DOT__ntt_comp__DOT__mod_Q__DOT__temp;
        IData/*31:0*/ top__DOT__dut__DOT__intt_comp__DOT__zeta32;
        IData/*31:0*/ top__DOT__dut__DOT__intt_comp__DOT__mod_Q__DOT__temp;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data2_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__data1_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_0__DOT__w_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data_mul_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data2_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__data1_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_1__DOT__w_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__u_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__t_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_2__DOT__w_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__u_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__t_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_3__DOT__w_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__u_div2_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__t_div2_reg;
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__STG_4__DOT__w_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data2_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__data1_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_0__DOT__w_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data_mul_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data2_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__data1_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_1__DOT__w_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__u_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__t_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_2__DOT__w_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__u_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__t_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_3__DOT__w_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__u_div2_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__t_div2_reg;
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__STG_4__DOT__w_reg;
        CData/*0:0*/ top__DOT__dut__DOT__ntt_comp__DOT__is_GS_BU[6];
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__w[5];
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__u[4];
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__u_div2[2];
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__t[4];
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__t_div2[2];
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__mul_res[2];
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__data1[3];
        QData/*63:0*/ top__DOT__dut__DOT__ntt_comp__DOT__data2[3];
        CData/*0:0*/ top__DOT__dut__DOT__intt_comp__DOT__is_GS_BU[6];
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__w[5];
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__u[4];
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__u_div2[2];
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__t[4];
    };
    struct {
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__t_div2[2];
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__mul_res[2];
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__data1[3];
        QData/*63:0*/ top__DOT__dut__DOT__intt_comp__DOT__data2[3];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vm_traceActivity[3];
    
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
    static void _combo__TOP__3(Vtop__Syms* __restrict vlSymsp);
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
    static void _sequent__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vtop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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
