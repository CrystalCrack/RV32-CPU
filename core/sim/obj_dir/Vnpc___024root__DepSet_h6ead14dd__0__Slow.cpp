// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc___024root.h"

VL_ATTR_COLD void Vnpc___024root___eval_static(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vnpc___024root___eval_initial__TOP(Vnpc___024root* vlSelf);

VL_ATTR_COLD void Vnpc___024root___eval_initial(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_initial\n"); );
    // Body
    Vnpc___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vnpc___024root___eval_initial__TOP(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0U] = 0x27U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[1U] = 0x26U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[2U] = 0x25U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[3U] = 0x24U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[4U] = 0x23U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[5U] = 0x22U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[6U] = 0x21U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[7U] = 0x20U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[8U] = 0x1fU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[9U] = 0x1eU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xaU] = 0x1dU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xbU] = 0x1cU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xcU] = 0x1bU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xdU] = 0x1aU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xeU] = 0x19U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0xfU] = 0x18U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x10U] = 0x17U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x11U] = 0x16U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x12U] = 0x15U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x13U] = 0x14U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x14U] = 0x13U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x15U] = 0x12U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x16U] = 0x11U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x17U] = 0x10U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x18U] = 0xfU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x19U] = 0xeU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1aU] = 0xdU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1bU] = 0xcU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1cU] = 0xbU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1dU] = 0xaU;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1eU] = 9U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x1fU] = 8U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x20U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x21U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x22U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x23U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x24U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x25U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list[0x26U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[9U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x11U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x12U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x15U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1aU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1bU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1cU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1eU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x25U] = 0U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3U] = 4U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4U] = 3U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5U] = 2U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6U] = 1U;
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0U] = 0x27U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[1U] = 0x26U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[2U] = 0x25U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[3U] = 0x24U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[4U] = 0x23U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[5U] = 0x22U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[6U] = 0x21U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[7U] = 0x20U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[8U] = 0x1fU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[9U] = 0x1eU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xaU] = 0x1dU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xbU] = 0x1cU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xcU] = 0x1bU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xdU] = 0x1aU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xeU] = 0x19U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0xfU] = 0x18U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x10U] = 0x17U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x11U] = 0x16U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x12U] = 0x15U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x13U] = 0x14U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x14U] = 0x13U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x15U] = 0x12U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x16U] = 0x11U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x17U] = 0x10U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x18U] = 0xfU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x19U] = 0xeU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1aU] = 0xdU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1bU] = 0xcU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1cU] = 0xbU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1dU] = 0xaU;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1eU] = 9U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x1fU] = 8U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x20U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x21U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x22U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x23U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x24U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x25U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list[0x26U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[3U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[4U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[5U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[6U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[8U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[9U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xaU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xbU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xcU] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xdU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xeU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0xfU] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x10U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x11U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x12U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x13U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x14U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x15U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x16U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x17U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x18U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x19U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1aU] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1bU] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1cU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1dU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1eU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x1fU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x20U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x21U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x22U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x23U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x24U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x25U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list[0x26U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0U] = 0x27U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[1U] = 0x26U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[2U] = 0x25U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[3U] = 0x24U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[4U] = 0x23U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[5U] = 0x22U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[6U] = 0x21U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[7U] = 0x20U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[8U] = 0x1fU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[9U] = 0x1eU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xaU] = 0x1dU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xbU] = 0x1cU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xcU] = 0x1bU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xdU] = 0x1aU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xeU] = 0x19U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0xfU] = 0x18U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x10U] = 0x17U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x11U] = 0x16U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x12U] = 0x15U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x13U] = 0x14U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x14U] = 0x13U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x15U] = 0x12U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x16U] = 0x11U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x17U] = 0x10U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x18U] = 0xfU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x19U] = 0xeU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1aU] = 0xdU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1bU] = 0xcU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1cU] = 0xbU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1dU] = 0xaU;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1eU] = 9U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x1fU] = 8U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x20U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x21U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x22U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x23U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x24U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x25U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list[0x26U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[1U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[7U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[8U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[9U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xaU] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xbU] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xcU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xdU] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xeU] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0xfU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x10U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x11U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x12U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x13U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x14U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x15U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x16U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x17U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x18U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x19U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1aU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1bU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1cU] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1dU] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1eU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x1fU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x20U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x21U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x22U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x23U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x24U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x25U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list[0x26U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0U] = 0x27U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[1U] = 0x26U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[2U] = 0x25U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[3U] = 0x24U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[4U] = 0x23U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[5U] = 0x22U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[6U] = 0x21U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[7U] = 0x20U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[8U] = 0x1fU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[9U] = 0x1eU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xaU] = 0x1dU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xbU] = 0x1cU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xcU] = 0x1bU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xdU] = 0x1aU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xeU] = 0x19U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0xfU] = 0x18U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x10U] = 0x17U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x11U] = 0x16U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x12U] = 0x15U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x13U] = 0x14U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x14U] = 0x13U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x15U] = 0x12U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x16U] = 0x11U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x17U] = 0x10U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x18U] = 0xfU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x19U] = 0xeU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1aU] = 0xdU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1bU] = 0xcU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1cU] = 0xbU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1dU] = 0xaU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1eU] = 9U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x1fU] = 8U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x20U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x21U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x22U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x23U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x24U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x25U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list[0x26U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[7U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[8U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[9U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xaU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xbU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xcU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xdU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xeU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0xfU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x10U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x11U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x12U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x13U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x14U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x15U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x16U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x17U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x18U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x19U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1aU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1bU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1cU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1dU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1eU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x1fU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x20U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x21U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x22U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x23U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x24U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x25U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list[0x26U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0U] = 0x27U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[1U] = 0x26U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[2U] = 0x25U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[3U] = 0x24U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[4U] = 0x23U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[5U] = 0x22U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[6U] = 0x21U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[7U] = 0x20U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[8U] = 0x1fU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[9U] = 0x1eU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xaU] = 0x1dU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xbU] = 0x1cU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xcU] = 0x1bU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xdU] = 0x1aU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xeU] = 0x19U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0xfU] = 0x18U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x10U] = 0x17U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x11U] = 0x16U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x12U] = 0x15U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x13U] = 0x14U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x14U] = 0x13U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x15U] = 0x12U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x16U] = 0x11U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x17U] = 0x10U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x18U] = 0xfU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x19U] = 0xeU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1aU] = 0xdU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1bU] = 0xcU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1cU] = 0xbU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1dU] = 0xaU;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1eU] = 9U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x1fU] = 8U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x20U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x21U] = 6U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x22U] = 5U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x23U] = 4U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x24U] = 3U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x25U] = 2U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list[0x26U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[7U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[8U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[9U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xaU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xbU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xcU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xdU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xeU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0xfU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x10U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x11U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x12U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x13U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x14U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x15U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x16U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x17U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x18U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x19U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1aU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1bU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1cU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1dU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1eU] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x1fU] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x20U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x21U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x22U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x23U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x24U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x25U] = 1U;
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list[0x26U] = 1U;
}

VL_ATTR_COLD void Vnpc___024root___eval_final(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vnpc___024root___eval_triggers__stl(Vnpc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__stl(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___eval_stl(Vnpc___024root* vlSelf);

VL_ATTR_COLD void Vnpc___024root___eval_settle(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vnpc___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vnpc___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/crystc/workspace/RV32-CPU/core/vsrc/npc.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vnpc___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__stl(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vnpc___024root___ico_sequent__TOP__0(Vnpc___024root* vlSelf);

VL_ATTR_COLD void Vnpc___024root___eval_stl(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vnpc___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__ico(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__act(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__nba(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vnpc___024root___ctor_var_reset(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___ctor_var_reset\n"); );
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
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_he69f398c__0 = 0;
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h873f971e__0 = 0;
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd3ddd1c8__0 = 0;
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
    vlSelf->__VdfgTmp_hfeab4dac__0 = 0;
    vlSelf->__VdfgTmp_h743af046__0 = 0;
    vlSelf->__VdfgTmp_h7497e9b0__0 = 0;
    vlSelf->__VdfgTmp_h71bd92c6__0 = 0;
    vlSelf->__VdfgTmp_hfeb03756__0 = 0;
    vlSelf->__VdfgTmp_hfe872291__0 = 0;
    vlSelf->__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout = 0;
    vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
