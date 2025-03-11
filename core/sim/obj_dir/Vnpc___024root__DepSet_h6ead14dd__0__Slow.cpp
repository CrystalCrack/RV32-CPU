// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "Vnpc__pch.h"
#include "Vnpc___024root.h"

VL_ATTR_COLD void Vnpc___024root___eval_static(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_static\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vnpc___024root___eval_initial__TOP(Vnpc___024root* vlSelf);
VL_ATTR_COLD void Vnpc___024root____Vm_traceActivitySetAll(Vnpc___024root* vlSelf);

VL_ATTR_COLD void Vnpc___024root___eval_initial(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_initial\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vnpc___024root___eval_initial__TOP(vlSelf);
    Vnpc___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vnpc___024root___eval_initial__TOP(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_initial__TOP\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0U] = 0x27U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[1U] = 0x26U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[2U] = 0x25U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[3U] = 0x24U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[4U] = 0x23U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[5U] = 0x22U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[6U] = 0x21U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[7U] = 0x20U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[8U] = 0x1fU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[9U] = 0x1eU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xaU] = 0x1dU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xbU] = 0x1cU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xcU] = 0x1bU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xdU] = 0x1aU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xeU] = 0x19U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xfU] = 0x18U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x10U] = 0x17U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x11U] = 0x16U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x12U] = 0x15U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x13U] = 0x14U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x14U] = 0x13U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x15U] = 0x12U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x16U] = 0x11U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x17U] = 0x10U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x18U] = 0xfU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x19U] = 0xeU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1aU] = 0xdU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1bU] = 0xcU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1cU] = 0xbU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1dU] = 0xaU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1eU] = 9U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1fU] = 8U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x20U] = 7U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x21U] = 6U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x22U] = 5U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x23U] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x24U] = 3U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x25U] = 2U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x26U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[9U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x11U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x12U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x15U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1aU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1bU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1cU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1eU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x25U] = 0U;
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0U] = 0x27U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[1U] = 0x26U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[2U] = 0x25U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[3U] = 0x24U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[4U] = 0x23U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[5U] = 0x22U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[6U] = 0x21U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[7U] = 0x20U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[8U] = 0x1fU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[9U] = 0x1eU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xaU] = 0x1dU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xbU] = 0x1cU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xcU] = 0x1bU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xdU] = 0x1aU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xeU] = 0x19U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xfU] = 0x18U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x10U] = 0x17U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x11U] = 0x16U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x12U] = 0x15U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x13U] = 0x14U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x14U] = 0x13U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x15U] = 0x12U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x16U] = 0x11U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x17U] = 0x10U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x18U] = 0xfU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x19U] = 0xeU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1aU] = 0xdU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1bU] = 0xcU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1cU] = 0xbU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1dU] = 0xaU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1eU] = 9U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1fU] = 8U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x20U] = 7U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x21U] = 6U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x22U] = 5U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x23U] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x24U] = 3U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x25U] = 2U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x26U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[3U] = 7U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[4U] = 2U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[5U] = 7U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[6U] = 7U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[8U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[9U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xaU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xbU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xcU] = 6U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xdU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xeU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xfU] = 5U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x10U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x11U] = 3U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x12U] = 6U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x13U] = 3U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x14U] = 2U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x15U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x16U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x17U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x18U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x19U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1aU] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1bU] = 5U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1cU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1dU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1eU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1fU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x20U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x21U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x22U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x23U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x24U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x25U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x26U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0U] = 0x27U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[1U] = 0x26U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[2U] = 0x25U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[3U] = 0x24U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[4U] = 0x23U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[5U] = 0x22U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[6U] = 0x21U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[7U] = 0x20U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[8U] = 0x1fU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[9U] = 0x1eU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xaU] = 0x1dU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xbU] = 0x1cU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xcU] = 0x1bU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xdU] = 0x1aU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xeU] = 0x19U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xfU] = 0x18U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x10U] = 0x17U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x11U] = 0x16U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x12U] = 0x15U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x13U] = 0x14U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x14U] = 0x13U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x15U] = 0x12U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x16U] = 0x11U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x17U] = 0x10U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x18U] = 0xfU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x19U] = 0xeU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1aU] = 0xdU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1bU] = 0xcU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1cU] = 0xbU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1dU] = 0xaU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1eU] = 9U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1fU] = 8U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x20U] = 7U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x21U] = 6U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x22U] = 5U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x23U] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x24U] = 3U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x25U] = 2U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x26U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[1U] = 3U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[7U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[8U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[9U] = 3U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xaU] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xbU] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xcU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xdU] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xeU] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xfU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x10U] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x11U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x12U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x13U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x14U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x15U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x16U] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x17U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x18U] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x19U] = 3U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1aU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1bU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1cU] = 3U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1dU] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1eU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1fU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x20U] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x21U] = 2U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x22U] = 2U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x23U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x24U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x25U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x26U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0U] = 0x27U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[1U] = 0x26U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[2U] = 0x25U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[3U] = 0x24U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[4U] = 0x23U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[5U] = 0x22U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[6U] = 0x21U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[7U] = 0x20U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[8U] = 0x1fU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[9U] = 0x1eU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xaU] = 0x1dU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xbU] = 0x1cU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xcU] = 0x1bU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xdU] = 0x1aU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xeU] = 0x19U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xfU] = 0x18U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x10U] = 0x17U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x11U] = 0x16U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x12U] = 0x15U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x13U] = 0x14U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x14U] = 0x13U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x15U] = 0x12U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x16U] = 0x11U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x17U] = 0x10U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x18U] = 0xfU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x19U] = 0xeU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1aU] = 0xdU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1bU] = 0xcU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1cU] = 0xbU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1dU] = 0xaU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1eU] = 9U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1fU] = 8U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x20U] = 7U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x21U] = 6U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x22U] = 5U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x23U] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x24U] = 3U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x25U] = 2U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x26U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[8U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[9U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xaU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xbU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xcU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xdU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xeU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xfU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x10U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x11U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x12U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x13U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x14U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x15U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x16U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x17U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x18U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x19U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1aU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1bU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1cU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1dU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1eU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1fU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x20U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x21U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x22U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x23U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x24U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x25U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x26U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0U] = 0x27U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[1U] = 0x26U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[2U] = 0x25U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[3U] = 0x24U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[4U] = 0x23U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[5U] = 0x22U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[6U] = 0x21U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[7U] = 0x20U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[8U] = 0x1fU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[9U] = 0x1eU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xaU] = 0x1dU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xbU] = 0x1cU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xcU] = 0x1bU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xdU] = 0x1aU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xeU] = 0x19U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xfU] = 0x18U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x10U] = 0x17U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x11U] = 0x16U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x12U] = 0x15U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x13U] = 0x14U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x14U] = 0x13U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x15U] = 0x12U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x16U] = 0x11U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x17U] = 0x10U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x18U] = 0xfU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x19U] = 0xeU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1aU] = 0xdU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1bU] = 0xcU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1cU] = 0xbU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1dU] = 0xaU;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1eU] = 9U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1fU] = 8U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x20U] = 7U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x21U] = 6U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x22U] = 5U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x23U] = 4U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x24U] = 3U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x25U] = 2U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x26U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[7U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[8U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[9U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xaU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xbU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xcU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xdU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xeU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xfU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x10U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x11U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x12U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x13U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x14U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x15U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x16U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x17U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x18U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x19U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1aU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1bU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1cU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1dU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1eU] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1fU] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x20U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x21U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x22U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x23U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x24U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x25U] = 1U;
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x26U] = 1U;
}

VL_ATTR_COLD void Vnpc___024root___eval_final(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_final\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__stl(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vnpc___024root___eval_phase__stl(Vnpc___024root* vlSelf);

VL_ATTR_COLD void Vnpc___024root___eval_settle(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_settle\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vnpc___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/freeb1e/RISCV/RV32-CPU/core/vsrc/npc.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vnpc___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__stl(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___dump_triggers__stl\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vnpc___024root___ico_sequent__TOP__0(Vnpc___024root* vlSelf);

VL_ATTR_COLD void Vnpc___024root___eval_stl(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_stl\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vnpc___024root___ico_sequent__TOP__0(vlSelf);
        Vnpc___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vnpc___024root___eval_triggers__stl(Vnpc___024root* vlSelf);

VL_ATTR_COLD bool Vnpc___024root___eval_phase__stl(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_phase__stl\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vnpc___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vnpc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__ico(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___dump_triggers__ico\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__act(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___dump_triggers__act\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__nba(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___dump_triggers__nba\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnpc___024root____Vm_traceActivitySetAll(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root____Vm_traceActivitySetAll\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vnpc___024root___ctor_var_reset(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___ctor_var_reset\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->npc__DOT__rs1 = 0;
    vlSelf->npc__DOT__imm = 0;
    vlSelf->npc__DOT__ALU_op = 0;
    vlSelf->npc__DOT__rdregsrc = 0;
    vlSelf->npc__DOT__cmp_type = 0;
    vlSelf->npc__DOT__ALUsrc1 = 0;
    vlSelf->npc__DOT__ALUsrc2 = 0;
    vlSelf->npc__DOT__rf_rdata1 = 0;
    vlSelf->npc__DOT__rf_rdata2 = 0;
    vlSelf->npc__DOT__ALU_A = 0;
    vlSelf->npc__DOT__ALU_B = 0;
    vlSelf->npc__DOT__ALU_Cin = 0;
    vlSelf->npc__DOT__stop_sim = 0;
    vlSelf->npc__DOT__pc = 0;
    vlSelf->npc__DOT__inst = 0;
    vlSelf->npc__DOT__drdata = 0;
    vlSelf->npc__DOT__u_PC__DOT__dnpc = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_name = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_add = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_or = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_and = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lb = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_slti = 0;
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_ori = 0;
    vlSelf->npc__DOT__idu_inst__DOT__immI = 0;
    vlSelf->npc__DOT__idu_inst__DOT__immS = 0;
    vlSelf->npc__DOT__idu_inst__DOT__immB = 0;
    vlSelf->npc__DOT__idu_inst__DOT__immJ = 0;
    VL_ZERO_RESET_W(1482, vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut);
    vlSelf->npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_6 = 0;
    vlSelf->npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_15 = 0;
    vlSelf->npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_17 = 0;
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 39; ++__Vi0) {
        vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[__Vi0] = 0;
    }
    vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->npc__DOT__u_ALU__DOT__add_overflow = 0;
    vlSelf->npc__DOT__u_ALU__DOT__sub_overflow = 0;
    vlSelf->npc__DOT__u_ALU__DOT__add_result = 0;
    vlSelf->npc__DOT__u_ALU__DOT__sub_result = 0;
    vlSelf->npc__DOT__u_ALU__DOT__out = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[__Vi0] = 0;
    }
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out = 0;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_1_0 = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_1_1 = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_1_2 = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_1_3 = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_1_4 = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_1_5 = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_1_11 = 0;
    vlSelf->__VdfgRegularize_hd87f99a1_1_12 = 0;
    vlSelf->__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout = 0;
    vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
