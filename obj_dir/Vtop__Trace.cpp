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
            tracep->chgIData(oldp+0,(vlTOPp->top__DOT__dut__DOT__G_reg[0]),32);
            tracep->chgIData(oldp+1,(vlTOPp->top__DOT__dut__DOT__G_reg[1]),32);
            tracep->chgIData(oldp+2,(vlTOPp->top__DOT__dut__DOT__G_reg[2]),32);
            tracep->chgIData(oldp+3,(vlTOPp->top__DOT__dut__DOT__G_reg[3]),32);
            tracep->chgIData(oldp+4,(vlTOPp->top__DOT__dut__DOT__G_reg[4]),32);
            tracep->chgIData(oldp+5,(vlTOPp->top__DOT__dut__DOT__G_reg[5]),32);
            tracep->chgIData(oldp+6,(vlTOPp->top__DOT__dut__DOT__P_reg[0]),32);
            tracep->chgIData(oldp+7,(vlTOPp->top__DOT__dut__DOT__P_reg[1]),32);
            tracep->chgIData(oldp+8,(vlTOPp->top__DOT__dut__DOT__P_reg[2]),32);
            tracep->chgIData(oldp+9,(vlTOPp->top__DOT__dut__DOT__P_reg[3]),32);
            tracep->chgIData(oldp+10,(vlTOPp->top__DOT__dut__DOT__P_reg[4]),32);
            tracep->chgIData(oldp+11,(vlTOPp->top__DOT__dut__DOT__P_reg[5]),32);
            tracep->chgBit(oldp+12,(vlTOPp->top__DOT__dut__DOT__C_reg[0]));
            tracep->chgBit(oldp+13,(vlTOPp->top__DOT__dut__DOT__C_reg[1]));
            tracep->chgBit(oldp+14,(vlTOPp->top__DOT__dut__DOT__C_reg[2]));
            tracep->chgBit(oldp+15,(vlTOPp->top__DOT__dut__DOT__C_reg[3]));
            tracep->chgBit(oldp+16,(vlTOPp->top__DOT__dut__DOT__C_reg[4]));
            tracep->chgBit(oldp+17,(vlTOPp->top__DOT__dut__DOT__C_reg[5]));
            tracep->chgBit(oldp+18,(vlTOPp->top__DOT__dut__DOT__C_reg[6]));
            tracep->chgBit(oldp+19,(vlTOPp->top__DOT__dut__DOT__C_reg[7]));
            tracep->chgBit(oldp+20,(vlTOPp->top__DOT__dut__DOT__C_reg[8]));
            tracep->chgBit(oldp+21,(vlTOPp->top__DOT__dut__DOT__C_reg[9]));
            tracep->chgBit(oldp+22,(vlTOPp->top__DOT__dut__DOT__C_reg[10]));
            tracep->chgIData(oldp+23,(vlTOPp->top__DOT__dut__DOT__P1_reg[0]),32);
            tracep->chgIData(oldp+24,(vlTOPp->top__DOT__dut__DOT__P1_reg[1]),32);
            tracep->chgIData(oldp+25,(vlTOPp->top__DOT__dut__DOT__P1_reg[2]),32);
            tracep->chgIData(oldp+26,(vlTOPp->top__DOT__dut__DOT__P1_reg[3]),32);
            tracep->chgIData(oldp+27,(vlTOPp->top__DOT__dut__DOT__P1_reg[4]),32);
            tracep->chgIData(oldp+28,(vlTOPp->top__DOT__dut__DOT__P1_reg[5]),32);
            tracep->chgIData(oldp+29,(vlTOPp->top__DOT__dut__DOT__P1_reg[6]),32);
            tracep->chgIData(oldp+30,(vlTOPp->top__DOT__dut__DOT__P1_reg[7]),32);
            tracep->chgIData(oldp+31,(vlTOPp->top__DOT__dut__DOT__P1_reg[8]),32);
            tracep->chgIData(oldp+32,(vlTOPp->top__DOT__dut__DOT__P1_reg[9]),32);
            tracep->chgIData(oldp+33,(vlTOPp->top__DOT__dut__DOT__P6_reg[0]),32);
            tracep->chgIData(oldp+34,(vlTOPp->top__DOT__dut__DOT__P6_reg[1]),32);
            tracep->chgIData(oldp+35,(vlTOPp->top__DOT__dut__DOT__P6_reg[2]),32);
            tracep->chgIData(oldp+36,(vlTOPp->top__DOT__dut__DOT__P6_reg[3]),32);
            tracep->chgIData(oldp+37,(vlTOPp->top__DOT__dut__DOT__P6_reg[4]),32);
            tracep->chgIData(oldp+38,(vlTOPp->top__DOT__dut__DOT__G6_reg[0]),32);
            tracep->chgIData(oldp+39,(vlTOPp->top__DOT__dut__DOT__G6_reg[1]),32);
            tracep->chgIData(oldp+40,(vlTOPp->top__DOT__dut__DOT__G6_reg[2]),32);
            tracep->chgIData(oldp+41,(vlTOPp->top__DOT__dut__DOT__G6_reg[3]),32);
            tracep->chgIData(oldp+42,(vlTOPp->top__DOT__dut__DOT__G6_reg[4]),32);
            tracep->chgIData(oldp+43,(vlTOPp->top__DOT__dut__DOT__C[0]),32);
            tracep->chgIData(oldp+44,(vlTOPp->top__DOT__dut__DOT__C[1]),32);
            tracep->chgIData(oldp+45,(vlTOPp->top__DOT__dut__DOT__C[2]),32);
            tracep->chgIData(oldp+46,(vlTOPp->top__DOT__dut__DOT__C[3]),32);
            tracep->chgIData(oldp+47,(vlTOPp->top__DOT__dut__DOT__C[4]),32);
            tracep->chgIData(oldp+48,(vlTOPp->top__DOT__dut__DOT__S_temp),32);
            tracep->chgBit(oldp+49,(vlTOPp->top__DOT__dut__DOT__Co_temp));
        }
        tracep->chgIData(oldp+50,(vlTOPp->a_i),32);
        tracep->chgIData(oldp+51,(vlTOPp->b_i),32);
        tracep->chgBit(oldp+52,(vlTOPp->clk_i));
        tracep->chgBit(oldp+53,(vlTOPp->rstn));
        tracep->chgBit(oldp+54,(vlTOPp->carry_i));
        tracep->chgIData(oldp+55,(vlTOPp->sum_o),32);
        tracep->chgBit(oldp+56,(vlTOPp->carry_o));
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
