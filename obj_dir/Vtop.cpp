// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 2, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 2, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_o_temp 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_temp2;
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_o_temp 
        = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_temp2;
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_i_temp 
        = vlTOPp->zeta_i;
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_i_temp 
        = vlTOPp->data1_i;
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_i_temp 
        = vlTOPp->data2_i;
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w_i_temp 
        = vlTOPp->zeta_i;
    if (vlTOPp->reset_ni) {
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_i_temp 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_o_temp;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_i_temp 
            = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_o_temp;
    } else {
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_i_temp = 0U;
        vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_i_temp = 0U;
    }
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_i_temp 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__w_i_temp) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_i_temp 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_i_temp) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_i_temp 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_i_temp) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w_i_temp 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__w_i_temp) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_o_temp 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_temp2;
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_i_temp 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_i_temp) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_o_temp 
        = vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_temp2;
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_i_temp 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_i_temp) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_reduce32 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__A_wire 
           + (0x7fe001U & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_u2Q__DOT__A_wire 
                           >> 0x1fU)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__a_temp 
        = VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, 
                                              (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire 
                                               + (0x7fe001U 
                                                  & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_t2Q__DOT__A_wire 
                                                     >> 0x1fU)))), 
                      VL_EXTENDS_QI(64,32, (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire 
                                            + (0x7fe001U 
                                               & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red_w2Q__DOT__A_wire 
                                                  >> 0x1fU)))));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__t_temp 
        = VL_MULS_QQQ(64,64,64, 0x3802001ULL, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__a_temp);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__t_temp 
        = ((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__a_temp 
            - (0x7fe001ULL * (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__t_temp)))) 
           >> 0x20U);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mult_reduce 
        = (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__MontModular__DOT__t_temp);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_reduce32 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__A_wire 
           + (0x7fe001U & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_t2Q__DOT__A_wire 
                           >> 0x1fU)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_reduce32 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__A_wire 
           + (0x7fe001U & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_u2Q__DOT__A_wire 
                           >> 0x1fU)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__add2modular 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_reduce32 
           + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mult_reduce);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__sub2modular 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_reduce32 
           - vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__mult_reduce);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__add2modular 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_reduce32 
           + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_reduce32);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub2modular 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_reduce32 
           - vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_reduce32);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__add2modular 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__add2modular) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__sub2modular 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__sub2modular) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__add2modular 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__add2modular) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub2modular 
           - ((IData)(0x7fe001U) * (((IData)(0x400000U) 
                                     + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub2modular) 
                                    >> 0x17U)));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__A_wire 
        = (VL_LTES_III(1,32,32, 0U, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp)
            ? vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp
            : ((IData)(0x7fe001U) + vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__reduce32_comp__DOT__A_o_temp));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__a_temp 
        = VL_MULS_QQQ(64,64,64, 0xa3faULL, VL_EXTENDS_QI(64,32, 
                                                         (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire 
                                                          + 
                                                          (0x7fe001U 
                                                           & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Add_Modular__DOT__A_wire 
                                                              >> 0x1fU)))));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__t_temp 
        = VL_MULS_QQQ(64,64,64, 0x3802001ULL, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__a_temp);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__t_temp 
        = ((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__a_temp 
            - (0x7fe001ULL * (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__t_temp)))) 
           >> 0x20U);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__u_temp2 
        = (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2u__DOT__t_temp);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__a_temp 
        = VL_MULS_QQQ(64,64,64, 0xa3faULL, VL_EXTENDS_QI(64,32, 
                                                         (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire 
                                                          + 
                                                          (0x7fe001U 
                                                           & (vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Sub_Modular__DOT__A_wire 
                                                              >> 0x1fU)))));
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__t_temp 
        = VL_MULS_QQQ(64,64,64, 0x3802001ULL, vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__a_temp);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__t_temp 
        = ((vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__a_temp 
            - (0x7fe001ULL * (QData)((IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__t_temp)))) 
           >> 0x20U);
    vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__t_temp2 
        = (IData)(vlTOPp->top__DOT__dut__DOT__ntt_comp__DOT__Red2t__DOT__t_temp);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__a_temp 
        = VL_MULS_QQQ(64,64,64, 0xa3faULL, VL_EXTENDS_QI(64,32, 
                                                         ((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                                           + 
                                                           (0x7fe001U 
                                                            & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Add_Modular__DOT__A_wire 
                                                               >> 0x1fU))) 
                                                          >> 1U)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__t_temp 
        = VL_MULS_QQQ(64,64,64, 0x3802001ULL, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__a_temp);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__t_temp 
        = ((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__a_temp 
            - (0x7fe001ULL * (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__t_temp)))) 
           >> 0x20U);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_temp2 
        = (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2u__DOT__t_temp);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub_reduce 
        = (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__A_wire 
           + (0x7fe001U & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Sub_Modular__DOT__A_wire 
                           >> 0x1fU)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__a_temp 
        = VL_MULS_QQQ(64,64,64, 0xa3faULL, VL_EXTENDS_QI(64,32, 
                                                         (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub_reduce 
                                                          >> 1U)));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__t_temp 
        = VL_MULS_QQQ(64,64,64, 0x3802001ULL, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__a_temp);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__t_temp 
        = ((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__a_temp 
            - (0x7fe001ULL * (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__t_temp)))) 
           >> 0x20U);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_temp2 
        = (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red2t__DOT__t_temp);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__a_temp 
        = VL_MULS_QQQ(64,64,64, VL_EXTENDS_QI(64,32, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__sub_reduce), 
                      VL_EXTENDS_QI(64,32, (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire 
                                            + (0x7fe001U 
                                               & (vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__Red_w2Q__DOT__A_wire 
                                                  >> 0x1fU)))));
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__t_temp 
        = VL_MULS_QQQ(64,64,64, 0x3802001ULL, vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__a_temp);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__t_temp 
        = ((vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__a_temp 
            - (0x7fe001ULL * (QData)((IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__t_temp)))) 
           >> 0x20U);
    vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__mult_reduce 
        = (IData)(vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__MontModular__DOT__t_temp);
}

VL_INLINE_OPT void Vtop::_combo__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset_ni) {
        vlTOPp->data2_o = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__t_o_temp;
        vlTOPp->data1_o = vlTOPp->top__DOT__dut__DOT__intt_comp__DOT__u_o_temp;
    } else {
        vlTOPp->data2_o = 0U;
        vlTOPp->data1_o = 0U;
    }
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset_ni & 0xfeU))) {
        Verilated::overWidthError("reset_ni");}
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
}
#endif  // VL_DEBUG
