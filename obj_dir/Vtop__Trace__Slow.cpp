// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace(VerilatedFstC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtop::traceInit(void* userp, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtop::traceInitTop(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtop::traceInitSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+51,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+52,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+53,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+54,"rstn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+55,"carry_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+56,"sum_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+57,"carry_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+58,"top DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+59,"top QINV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+60,"top Q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+51,"top a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+52,"top b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+53,"top clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+54,"top rstn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+55,"top carry_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+56,"top sum_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+57,"top carry_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+51,"top dut A",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+52,"top dut B",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+53,"top dut clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+54,"top dut rstn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+55,"top dut Ci",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+56,"top dut S",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+57,"top dut Co",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+1+i*1,"top dut G_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 31,0);}}
        {int i; for (i=0; i<6; i++) {
                tracep->declBus(c+7+i*1,"top dut P_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1), 31,0);}}
        {int i; for (i=0; i<11; i++) {
                tracep->declBit(c+13+i*1,"top dut C_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+1));}}
        {int i; for (i=0; i<10; i++) {
                tracep->declBus(c+24+i*1,"top dut P1_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+2), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+34+i*1,"top dut P6_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+7), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+39+i*1,"top dut G6_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+7), 31,0);}}
        {int i; for (i=0; i<5; i++) {
                tracep->declBus(c+44+i*1,"top dut C",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+7), 32,1);}}
        tracep->declBus(c+49,"top dut S_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+50,"top dut Co_temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    }
}

void Vtop::traceRegister(VerilatedFst* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtop::traceFullTop0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtop::traceFullSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->top__DOT__dut__DOT__G_reg[0]),32);
        tracep->fullIData(oldp+2,(vlTOPp->top__DOT__dut__DOT__G_reg[1]),32);
        tracep->fullIData(oldp+3,(vlTOPp->top__DOT__dut__DOT__G_reg[2]),32);
        tracep->fullIData(oldp+4,(vlTOPp->top__DOT__dut__DOT__G_reg[3]),32);
        tracep->fullIData(oldp+5,(vlTOPp->top__DOT__dut__DOT__G_reg[4]),32);
        tracep->fullIData(oldp+6,(vlTOPp->top__DOT__dut__DOT__G_reg[5]),32);
        tracep->fullIData(oldp+7,(vlTOPp->top__DOT__dut__DOT__P_reg[0]),32);
        tracep->fullIData(oldp+8,(vlTOPp->top__DOT__dut__DOT__P_reg[1]),32);
        tracep->fullIData(oldp+9,(vlTOPp->top__DOT__dut__DOT__P_reg[2]),32);
        tracep->fullIData(oldp+10,(vlTOPp->top__DOT__dut__DOT__P_reg[3]),32);
        tracep->fullIData(oldp+11,(vlTOPp->top__DOT__dut__DOT__P_reg[4]),32);
        tracep->fullIData(oldp+12,(vlTOPp->top__DOT__dut__DOT__P_reg[5]),32);
        tracep->fullBit(oldp+13,(vlTOPp->top__DOT__dut__DOT__C_reg[0]));
        tracep->fullBit(oldp+14,(vlTOPp->top__DOT__dut__DOT__C_reg[1]));
        tracep->fullBit(oldp+15,(vlTOPp->top__DOT__dut__DOT__C_reg[2]));
        tracep->fullBit(oldp+16,(vlTOPp->top__DOT__dut__DOT__C_reg[3]));
        tracep->fullBit(oldp+17,(vlTOPp->top__DOT__dut__DOT__C_reg[4]));
        tracep->fullBit(oldp+18,(vlTOPp->top__DOT__dut__DOT__C_reg[5]));
        tracep->fullBit(oldp+19,(vlTOPp->top__DOT__dut__DOT__C_reg[6]));
        tracep->fullBit(oldp+20,(vlTOPp->top__DOT__dut__DOT__C_reg[7]));
        tracep->fullBit(oldp+21,(vlTOPp->top__DOT__dut__DOT__C_reg[8]));
        tracep->fullBit(oldp+22,(vlTOPp->top__DOT__dut__DOT__C_reg[9]));
        tracep->fullBit(oldp+23,(vlTOPp->top__DOT__dut__DOT__C_reg[10]));
        tracep->fullIData(oldp+24,(vlTOPp->top__DOT__dut__DOT__P1_reg[0]),32);
        tracep->fullIData(oldp+25,(vlTOPp->top__DOT__dut__DOT__P1_reg[1]),32);
        tracep->fullIData(oldp+26,(vlTOPp->top__DOT__dut__DOT__P1_reg[2]),32);
        tracep->fullIData(oldp+27,(vlTOPp->top__DOT__dut__DOT__P1_reg[3]),32);
        tracep->fullIData(oldp+28,(vlTOPp->top__DOT__dut__DOT__P1_reg[4]),32);
        tracep->fullIData(oldp+29,(vlTOPp->top__DOT__dut__DOT__P1_reg[5]),32);
        tracep->fullIData(oldp+30,(vlTOPp->top__DOT__dut__DOT__P1_reg[6]),32);
        tracep->fullIData(oldp+31,(vlTOPp->top__DOT__dut__DOT__P1_reg[7]),32);
        tracep->fullIData(oldp+32,(vlTOPp->top__DOT__dut__DOT__P1_reg[8]),32);
        tracep->fullIData(oldp+33,(vlTOPp->top__DOT__dut__DOT__P1_reg[9]),32);
        tracep->fullIData(oldp+34,(vlTOPp->top__DOT__dut__DOT__P6_reg[0]),32);
        tracep->fullIData(oldp+35,(vlTOPp->top__DOT__dut__DOT__P6_reg[1]),32);
        tracep->fullIData(oldp+36,(vlTOPp->top__DOT__dut__DOT__P6_reg[2]),32);
        tracep->fullIData(oldp+37,(vlTOPp->top__DOT__dut__DOT__P6_reg[3]),32);
        tracep->fullIData(oldp+38,(vlTOPp->top__DOT__dut__DOT__P6_reg[4]),32);
        tracep->fullIData(oldp+39,(vlTOPp->top__DOT__dut__DOT__G6_reg[0]),32);
        tracep->fullIData(oldp+40,(vlTOPp->top__DOT__dut__DOT__G6_reg[1]),32);
        tracep->fullIData(oldp+41,(vlTOPp->top__DOT__dut__DOT__G6_reg[2]),32);
        tracep->fullIData(oldp+42,(vlTOPp->top__DOT__dut__DOT__G6_reg[3]),32);
        tracep->fullIData(oldp+43,(vlTOPp->top__DOT__dut__DOT__G6_reg[4]),32);
        tracep->fullIData(oldp+44,(vlTOPp->top__DOT__dut__DOT__C[0]),32);
        tracep->fullIData(oldp+45,(vlTOPp->top__DOT__dut__DOT__C[1]),32);
        tracep->fullIData(oldp+46,(vlTOPp->top__DOT__dut__DOT__C[2]),32);
        tracep->fullIData(oldp+47,(vlTOPp->top__DOT__dut__DOT__C[3]),32);
        tracep->fullIData(oldp+48,(vlTOPp->top__DOT__dut__DOT__C[4]),32);
        tracep->fullIData(oldp+49,(vlTOPp->top__DOT__dut__DOT__S_temp),32);
        tracep->fullBit(oldp+50,(vlTOPp->top__DOT__dut__DOT__Co_temp));
        tracep->fullIData(oldp+51,(vlTOPp->a_i),32);
        tracep->fullIData(oldp+52,(vlTOPp->b_i),32);
        tracep->fullBit(oldp+53,(vlTOPp->clk_i));
        tracep->fullBit(oldp+54,(vlTOPp->rstn));
        tracep->fullBit(oldp+55,(vlTOPp->carry_i));
        tracep->fullIData(oldp+56,(vlTOPp->sum_o),32);
        tracep->fullBit(oldp+57,(vlTOPp->carry_o));
        tracep->fullIData(oldp+58,(0x20U),32);
        tracep->fullIData(oldp+59,(0x3802001U),32);
        tracep->fullIData(oldp+60,(0x7fe001U),32);
    }
}
