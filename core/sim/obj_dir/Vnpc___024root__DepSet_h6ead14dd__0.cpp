// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "Vnpc__pch.h"
#include "Vnpc___024root.h"

void Vnpc___024root___ico_sequent__TOP__0(Vnpc___024root* vlSelf);

void Vnpc___024root___eval_ico(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_ico\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vnpc___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vnpc___024root___ico_sequent__TOP__0(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___ico_sequent__TOP__0\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.npc__DOT__inst = 0U;
    } else {
        Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP(vlSelfRef.npc__DOT__pc, vlSelfRef.__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout);
        vlSelfRef.npc__DOT__inst = vlSelfRef.__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout;
    }
    vlSelfRef.npc__DOT__rf_rdata2 = ((0U == (0x1fU 
                                             & (vlSelfRef.npc__DOT__inst 
                                                >> 0x14U)))
                                      ? 0U : vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf
                                     [(0x1fU & (vlSelfRef.npc__DOT__inst 
                                                >> 0x14U))]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x23U] 
        = (0xfffff000U & vlSelfRef.npc__DOT__inst);
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x24U] 
        = (0xfffff000U & vlSelfRef.npc__DOT__inst);
    vlSelfRef.npc__DOT__idu_inst__DOT__immJ = (((- (IData)(
                                                           (vlSelfRef.npc__DOT__inst 
                                                            >> 0x1fU))) 
                                                << 0x14U) 
                                               | (((0xff000U 
                                                    & vlSelfRef.npc__DOT__inst) 
                                                   | (0x800U 
                                                      & (vlSelfRef.npc__DOT__inst 
                                                         >> 9U))) 
                                                  | (0x7feU 
                                                     & (vlSelfRef.npc__DOT__inst 
                                                        >> 0x14U))));
    vlSelfRef.npc__DOT__idu_inst__DOT__immS = (((- (IData)(
                                                           (vlSelfRef.npc__DOT__inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelfRef.npc__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.npc__DOT__inst 
                                                        >> 7U))));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_addi 
        = (IData)((0x13U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xor 
        = (IData)((0x4033U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_or = (IData)(
                                                            (0x6033U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_andi 
        = (IData)((0x7013U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sll 
        = (IData)((0x1033U == (0xfe00707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_and 
        = (IData)((0x7033U == (0xfe00707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xori 
        = (IData)((0x4013U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slli 
        = (IData)((0x1013U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_ori 
        = (IData)((0x6013U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltu 
        = (IData)((0x3033U == (0xfe00707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slt 
        = (IData)((0x2033U == (0xfe00707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slti 
        = (IData)((0x2013U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr 
        = (IData)((0x67U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq 
        = (IData)((0x63U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne 
        = (IData)((0x1063U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge 
        = (IData)((0x5063U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt 
        = (IData)((0x4063U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw = (IData)(
                                                            (0x2023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb = (IData)(
                                                            (0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh = (IData)(
                                                            (0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lw = (IData)(
                                                            (0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lh = (IData)(
                                                            (0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lb = (IData)(
                                                            (3U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__immB = (((- (IData)(
                                                           (vlSelfRef.npc__DOT__inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0x800U 
                                                   & (vlSelfRef.npc__DOT__inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelfRef.npc__DOT__inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelfRef.npc__DOT__inst 
                                                           >> 7U)))));
    vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_6 
        = (IData)((0x33U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_15 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_17 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__immI = (((- (IData)(
                                                           (vlSelfRef.npc__DOT__inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.npc__DOT__inst 
                                                  >> 0x14U));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x22U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immJ;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x10U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immS;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x16U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immS;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x20U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immS;
    vlSelfRef.npc__DOT__cmp_type = (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltu) 
                                     | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltiu))
                                     ? 3U : (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slt) 
                                              | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slti))
                                              ? 2U : 0U));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xaU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immB;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xbU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immB;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xdU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immB;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xeU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immB;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x18U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immB;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1dU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immB;
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_add 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_6) 
           & (0U == (vlSelfRef.npc__DOT__inst >> 0x19U)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sub 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_6) 
           & (0x20U == (vlSelfRef.npc__DOT__inst >> 0x19U)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srai 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_15) 
           & (0x20U == (vlSelfRef.npc__DOT__inst >> 0x19U)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srli 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_15) 
           & (0U == (vlSelfRef.npc__DOT__inst >> 0x19U)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srl 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_17) 
           & (0U == (vlSelfRef.npc__DOT__inst >> 0x19U)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sra 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_17) 
           & (0x20U == (vlSelfRef.npc__DOT__inst >> 0x19U)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0U] 
        = (IData)((0x2700000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[1U] 
        = ((vlSelfRef.npc__DOT__idu_inst__DOT__immI 
            << 6U) | (IData)(((0x2700000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                              >> 0x20U)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[2U] 
        = (0x980U | ((0xfffff000U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[2U]) 
                     | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                        >> 0x1aU)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[2U] 
        = ((0xfffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[2U]) 
           | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
              << 0xcU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[3U] 
        = (0x25000U | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                       >> 0x14U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[4U] = 0x900000U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[5U] 
        = (0x23000000U | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                          << 0x1eU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[6U] 
        = (0x80000000U | ((0xfffU & (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                                     >> 2U)) | (0x3ffff000U 
                                                & (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                                                   >> 2U))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[7U] = 8U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[8U] 
        = (0x210U | (0xfffffc00U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[8U] 
        = ((0x3ffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[8U]) 
           | ((IData)((0x2000000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
              << 0xaU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[9U] 
        = (((IData)((0x2000000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
            >> 0x16U) | ((vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                          << 0x10U) | ((IData)(((0x2000000000ULL 
                                                 | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xaU] 
        = (0x1f0000U | (((0x3ffU & (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                                    >> 0x10U)) | ((IData)(
                                                          ((0x2000000000ULL 
                                                            | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                                           >> 0x20U)) 
                                                  >> 0x16U)) 
                        | (0xfc00U & (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                                      >> 0x10U))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xbU] 
        = (0x7800000U | (0xf0000000U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xbU] 
        = ((0xfffffffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xbU]) 
           | ((IData)((0x1d00000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB)))) 
              << 0x1cU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xcU] 
        = (((IData)((0x1d00000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB)))) 
            >> 4U) | ((IData)(((0x1d00000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB))) 
                               >> 0x20U)) << 0x1cU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xdU] 
        = (((0xffffffcU & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                           << 2U)) | ((IData)(((0x1d00000000ULL 
                                                | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB))) 
                                               >> 0x20U)) 
                                      >> 4U)) | (0xf0000000U 
                                                 & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                                                    << 2U)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xeU] 
        = (0x70U | ((0xffffff00U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xeU]) 
                    | (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                       >> 0x1eU)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xeU] 
        = ((0xffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xeU]) 
           | ((IData)((0x1b00000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
              << 8U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xfU] 
        = (((IData)((0x1b00000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
            >> 0x18U) | ((vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                          << 0xeU) | ((IData)(((0x1b00000000ULL 
                                                | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                               >> 0x20U)) 
                                      << 8U)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x10U] 
        = (0x68000U | ((0xfff00000U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x10U]) 
                       | (((0xffU & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                                     >> 0x12U)) | ((IData)(
                                                           ((0x1b00000000ULL 
                                                             | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                                            >> 0x20U)) 
                                                   >> 0x18U)) 
                          | (0x3f00U & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                                        >> 0x12U)))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x10U] 
        = ((0xfffffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x10U]) 
           | ((IData)((0x1900000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB)))) 
              << 0x14U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x11U] 
        = (((IData)((0x1900000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB)))) 
            >> 0xcU) | ((vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                         << 0x1aU) | ((IData)(((0x1900000000ULL 
                                                | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB))) 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x12U] 
        = (0x60000000U | (((0xfffffU & (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                                        >> 6U)) | ((IData)(
                                                           ((0x1900000000ULL 
                                                             | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB))) 
                                                            >> 0x20U)) 
                                                   >> 0xcU)) 
                          | (0x3f00000U & (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                                           >> 6U))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x13U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immS;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x14U] = 0x17U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x15U] = 0x580U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x16U] 
        = (0x15000U | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                       << 0x12U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x17U] 
        = (0x500000U | ((0xff000000U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x17U]) 
                        | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                           >> 0xeU)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x17U] 
        = ((0xffffffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x17U]) 
           | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
              << 0x18U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x18U] 
        = (0x13000000U | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                          >> 8U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x19U] = 0x80000000U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1aU] 
        = (4U | ((0xfffff0U & (vlSelfRef.npc__DOT__idu_inst__DOT__immS 
                               << 4U)) | (0xff000000U 
                                          & (vlSelfRef.npc__DOT__idu_inst__DOT__immS 
                                             << 4U))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1bU] 
        = (0x110U | ((0xfffffc00U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1bU]) 
                     | (vlSelfRef.npc__DOT__idu_inst__DOT__immS 
                        >> 0x1cU)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1bU] 
        = ((0x3ffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1bU]) 
           | ((IData)((0x1000000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
              << 0xaU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1cU] 
        = (((IData)((0x1000000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
            >> 0x16U) | ((vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                          << 0x10U) | ((IData)(((0x1000000000ULL 
                                                 | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1dU] 
        = (0xf0000U | ((0xffc00000U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1dU]) 
                       | (((0x3ffU & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                                      >> 0x10U)) | 
                           ((IData)(((0x1000000000ULL 
                                      | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                     >> 0x20U)) >> 0x16U)) 
                          | (0xfc00U & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                                        >> 0x10U)))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1dU] 
        = ((0x3fffffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1dU]) 
           | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
              << 0x16U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1eU] 
        = (0x3800000U | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                         >> 0xaU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1fU] = 0xd0000000U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x20U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x21U] = 0x30U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x22U] 
        = (0xb00U | ((0x3fc000U & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                                   << 0xeU)) | (0xffc00000U 
                                                & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                                                   << 0xeU))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x23U] 
        = (0x28000U | (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                       >> 0x12U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x24U] 
        = (0x900000U | (0xfc000000U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x24U] 
        = ((0x3ffffffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x24U]) 
           | ((IData)((0x800000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
              << 0x1aU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x25U] 
        = (((IData)((0x800000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
            >> 6U) | ((IData)(((0x800000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                               >> 0x20U)) << 0x1aU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x26U] 
        = (((0x3ffffffU & vlSelfRef.npc__DOT__idu_inst__DOT__immS) 
            | ((IData)(((0x800000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                        >> 0x20U)) >> 6U)) | (0xfc000000U 
                                              & vlSelfRef.npc__DOT__idu_inst__DOT__immS));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x27U] 
        = (7U | (0xffffffc0U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x27U]));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x27U] 
        = ((0x3fU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x27U]) 
           | ((IData)((0x600000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
              << 6U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x28U] 
        = (((IData)((0x600000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
            >> 0x1aU) | ((vlSelfRef.npc__DOT__idu_inst__DOT__immJ 
                          << 0xcU) | ((IData)(((0x600000000ULL 
                                                | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                               >> 0x20U)) 
                                      << 6U)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x29U] 
        = (0x5000U | ((0xc0000000U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x29U]) 
                      | (((0x3fU & (vlSelfRef.npc__DOT__idu_inst__DOT__immJ 
                                    >> 0x14U)) | ((IData)(
                                                          ((0x600000000ULL 
                                                            | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                                           >> 0x20U)) 
                                                  >> 0x1aU)) 
                         | (0xfc0U & (vlSelfRef.npc__DOT__idu_inst__DOT__immJ 
                                      >> 0x14U)))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x29U] 
        = ((0x3fffffffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x29U]) 
           | ((IData)((QData)((IData)((0x400000U | 
                                       (vlSelfRef.npc__DOT__inst 
                                        >> 0xcU))))) 
              << 0x1eU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2aU] 
        = (((IData)((QData)((IData)((0x400000U | (vlSelfRef.npc__DOT__inst 
                                                  >> 0xcU))))) 
            >> 2U) | ((IData)(((QData)((IData)((0x400000U 
                                                | (vlSelfRef.npc__DOT__inst 
                                                   >> 0xcU)))) 
                               >> 0x20U)) << 0x1eU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2bU] 
        = ((0xfffffff0U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2bU]) 
           | ((IData)(((QData)((IData)((0x400000U | 
                                        (vlSelfRef.npc__DOT__inst 
                                         >> 0xcU)))) 
                       >> 0x20U)) >> 2U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2bU] 
        = ((0xfU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2bU]) 
           | ((IData)((0x800000000300000ULL | (QData)((IData)(
                                                              (vlSelfRef.npc__DOT__inst 
                                                               >> 0xcU))))) 
              << 4U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2cU] 
        = (((IData)((0x800000000300000ULL | (QData)((IData)(
                                                            (vlSelfRef.npc__DOT__inst 
                                                             >> 0xcU))))) 
            >> 0x1cU) | ((IData)(((0x800000000300000ULL 
                                   | (QData)((IData)(
                                                     (vlSelfRef.npc__DOT__inst 
                                                      >> 0xcU)))) 
                                  >> 0x20U)) << 4U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2dU] 
        = (((IData)(((0x800000000300000ULL | (QData)((IData)(
                                                             (vlSelfRef.npc__DOT__inst 
                                                              >> 0xcU)))) 
                     >> 0x20U)) >> 0x1cU) | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                                             << 4U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2eU] 
        = ((0x3f0U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2eU]) 
           | (0x3ffU & (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                        >> 0x1cU)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2eU] 
        = (0x10U | (0xfU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[7U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[8U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xcU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xfU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x13U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x14U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x17U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x19U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1fU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x21U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x26U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__stop_sim = (1U & ((~ ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_addi) 
                                              | ((0x100073U 
                                                  == vlSelfRef.npc__DOT__inst) 
                                                 | ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.npc__DOT__inst)) 
                                                    | ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.npc__DOT__inst)) 
                                                       | ((0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.npc__DOT__inst)) 
                                                          | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr) 
                                                             | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw) 
                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lw) 
                                                                   | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_add) 
                                                                      | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq) 
                                                                         | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltu) 
                                                                            | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xor) 
                                                                               | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_or) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltiu) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lbu) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sub) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srai) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_andi) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sll) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_and) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xori) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slli) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slt) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lh) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lhu) 
                                                                                | ((((((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srl) 
                                                                                | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srli)) 
                                                                                | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sra)) 
                                                                                | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lb)) 
                                                                                | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slti)) 
                                                                                | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_ori))))))))))))))))))))))))))))))))))) 
                                          | (0x100073U 
                                             == vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_name = 
        ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_addi)
          ? 1U : ((0x100073U == vlSelfRef.npc__DOT__inst)
                   ? 2U : ((0x17U == (0x7fU & vlSelfRef.npc__DOT__inst))
                            ? 3U : ((0x37U == (0x7fU 
                                               & vlSelfRef.npc__DOT__inst))
                                     ? 4U : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.npc__DOT__inst))
                                              ? 5U : 
                                             ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr)
                                               ? 6U
                                               : ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw)
                                                   ? 7U
                                                   : 
                                                  ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lw)
                                                    ? 8U
                                                    : 
                                                   ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_add)
                                                     ? 9U
                                                     : 
                                                    ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq)
                                                      ? 0xaU
                                                      : 
                                                     ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltu)
                                                       ? 0xbU
                                                       : 
                                                      ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xor)
                                                        ? 0xcU
                                                        : 
                                                       ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_or)
                                                         ? 0xdU
                                                         : 
                                                        ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltiu)
                                                          ? 0xeU
                                                          : 
                                                         ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne)
                                                           ? 0xfU
                                                           : 
                                                          ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lbu)
                                                            ? 0x10U
                                                            : 
                                                           ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb)
                                                             ? 0x11U
                                                             : 
                                                            ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sub)
                                                              ? 0x12U
                                                              : 
                                                             ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srai)
                                                               ? 0x13U
                                                               : 
                                                              ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_andi)
                                                                ? 0x14U
                                                                : 
                                                               ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sll)
                                                                 ? 0x15U
                                                                 : 
                                                                ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_and)
                                                                  ? 0x16U
                                                                  : 
                                                                 ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh)
                                                                   ? 0x17U
                                                                   : 
                                                                  ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xori)
                                                                    ? 0x18U
                                                                    : 
                                                                   ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge)
                                                                     ? 0x19U
                                                                     : 
                                                                    ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu)
                                                                      ? 0x1aU
                                                                      : 
                                                                     ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slli)
                                                                       ? 0x1bU
                                                                       : 
                                                                      ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt)
                                                                        ? 0x1cU
                                                                        : 
                                                                       ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu)
                                                                         ? 0x1dU
                                                                         : 
                                                                        ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slt)
                                                                          ? 0x1eU
                                                                          : 
                                                                         ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lh)
                                                                           ? 0x1fU
                                                                           : 
                                                                          ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lhu)
                                                                            ? 0x20U
                                                                            : 
                                                                           ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srl)
                                                                             ? 0x21U
                                                                             : 
                                                                            ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srli)
                                                                              ? 0x22U
                                                                              : 
                                                                             ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sra)
                                                                               ? 0x23U
                                                                               : 
                                                                              ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srl)
                                                                                ? 0x24U
                                                                                : 
                                                                               ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lb)
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slti)
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_ori)
                                                                                 ? 0x27U
                                                                                 : 0U)))))))))))))))))))))))))))))))))))))));
    vlSelfRef.npc__DOT__rs1 = (((IData)(vlSelfRef.npc__DOT__stop_sim) 
                                | (0x37U == (0x7fU 
                                             & vlSelfRef.npc__DOT__inst)))
                                ? 0U : (0x1fU & (vlSelfRef.npc__DOT__inst 
                                                 >> 0xfU)));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [6U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [7U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [8U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [9U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x24U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x25U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x26U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelfRef.npc__DOT__rdregsrc = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit)
                                     ? (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out)
                                     : 0U);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [6U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [7U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [8U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [9U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x24U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x25U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x26U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelfRef.npc__DOT__ALU_op = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [6U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [7U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [8U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [9U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x24U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x25U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x26U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelfRef.npc__DOT__imm = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit)
                                ? vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out
                                : 1U);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
            == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
            [0U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [1U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [2U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [3U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [4U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [5U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [6U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [7U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [8U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [9U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xaU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xbU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xcU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xdU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xeU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xfU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x10U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x11U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x12U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x13U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x14U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x15U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x16U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x17U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x18U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x19U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1aU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1bU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1cU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1dU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1eU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1fU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x20U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x21U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x22U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x23U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x24U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x25U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x26U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelfRef.npc__DOT__ALUsrc1 = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
                                   && (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
            == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
            [0U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [1U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [2U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [3U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [4U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [5U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [6U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [7U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [8U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [9U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xaU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xbU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xcU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xdU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xeU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xfU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x10U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x11U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x12U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x13U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x14U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x15U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x16U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x17U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x18U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x19U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1aU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1bU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1cU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1dU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1eU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1fU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x20U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x21U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x22U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x23U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x24U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x25U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x26U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelfRef.npc__DOT__ALUsrc2 = ((1U & (~ (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit))) 
                                   || (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out));
    vlSelfRef.npc__DOT__rf_rdata1 = ((0U == (IData)(vlSelfRef.npc__DOT__rs1))
                                      ? 0U : vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf
                                     [vlSelfRef.npc__DOT__rs1]);
    vlSelfRef.npc__DOT__ALU_B = ((IData)(vlSelfRef.npc__DOT__ALUsrc2)
                                  ? vlSelfRef.npc__DOT__imm
                                  : vlSelfRef.npc__DOT__rf_rdata2);
    vlSelfRef.npc__DOT__ALU_A = ((IData)(vlSelfRef.npc__DOT__ALUsrc1)
                                  ? vlSelfRef.npc__DOT__pc
                                  : vlSelfRef.npc__DOT__rf_rdata1);
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_0 = VL_SHIFTRS_III(32,32,5, vlSelfRef.npc__DOT__ALU_A, 
                                                              (0x1fU 
                                                               & vlSelfRef.npc__DOT__ALU_B));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_1 = (vlSelfRef.npc__DOT__ALU_A 
                                                & vlSelfRef.npc__DOT__ALU_B);
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_2 = (vlSelfRef.npc__DOT__ALU_A 
                                                | vlSelfRef.npc__DOT__ALU_B);
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_3 = (vlSelfRef.npc__DOT__ALU_A 
                                                ^ vlSelfRef.npc__DOT__ALU_B);
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_4 = (vlSelfRef.npc__DOT__ALU_A 
                                                << 
                                                (0x1fU 
                                                 & vlSelfRef.npc__DOT__ALU_B));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_5 = (vlSelfRef.npc__DOT__ALU_A 
                                                >> 
                                                (0x1fU 
                                                 & vlSelfRef.npc__DOT__ALU_B));
    vlSelfRef.npc__DOT__u_ALU__DOT__sub_result = ((IData)(1U) 
                                                  + 
                                                  (vlSelfRef.npc__DOT__ALU_A 
                                                   + 
                                                   (~ vlSelfRef.npc__DOT__ALU_B)));
    vlSelfRef.npc__DOT__u_ALU__DOT__add_result = (vlSelfRef.npc__DOT__ALU_A 
                                                  + 
                                                  (vlSelfRef.npc__DOT__ALU_B 
                                                   + (IData)(vlSelfRef.npc__DOT__ALU_Cin)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U] 
        = (0x400000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U] 
        = (0x600000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_2)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_2));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_4)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_4));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_5)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_5));
    vlSelfRef.npc__DOT__u_ALU__DOT__sub_overflow = 
        (1U & (((vlSelfRef.npc__DOT__ALU_A >> 0x1fU) 
                & ((~ (vlSelfRef.npc__DOT__u_ALU__DOT__sub_result 
                       >> 0x1fU)) & (~ (vlSelfRef.npc__DOT__ALU_B 
                                        >> 0x1fU)))) 
               | ((~ (vlSelfRef.npc__DOT__ALU_A >> 0x1fU)) 
                  & ((vlSelfRef.npc__DOT__ALU_B & vlSelfRef.npc__DOT__u_ALU__DOT__sub_result) 
                     >> 0x1fU))));
    vlSelfRef.npc__DOT__u_ALU__DOT__add_overflow = 
        (1U & (((vlSelfRef.npc__DOT__ALU_A >> 0x1fU) 
                & ((~ (vlSelfRef.npc__DOT__u_ALU__DOT__add_result 
                       >> 0x1fU)) & (vlSelfRef.npc__DOT__ALU_B 
                                     >> 0x1fU))) | 
               ((~ (vlSelfRef.npc__DOT__ALU_A >> 0x1fU)) 
                & ((~ (vlSelfRef.npc__DOT__ALU_B >> 0x1fU)) 
                   & (vlSelfRef.npc__DOT__u_ALU__DOT__add_result 
                      >> 0x1fU)))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_12 = (((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_overflow)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_result)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_11 = (((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_overflow)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_result)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6U] 
        = (0x200000000ULL | vlSelfRef.__VdfgRegularize_hd87f99a1_1_12);
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_1_12;
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_1_11;
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_1_11;
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                               == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                               [0U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__ALU_op) == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                                  == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__ALU_op) == 
              vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                                  == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__ALU_op) == 
              vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                                  == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__ALU_op) == 
              vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                                  == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__ALU_op) == 
              vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                                  == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__ALU_op) == 
              vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                                  == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__ALU_op) == 
              vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                                  == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__ALU_op) == 
              vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__out = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
                                            ? vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
                                            : 0ULL);
    if (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw) 
         | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lw) 
            | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lbu) 
               | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb) 
                  | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh) 
                     | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lh) 
                        | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lhu) 
                           | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lb))))))))) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out), vlSelfRef.__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout);
        vlSelfRef.npc__DOT__drdata = vlSelfRef.__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout;
        if (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw) 
             | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb) 
                | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh)))) {
            Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_write_TOP((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out), vlSelfRef.npc__DOT__rf_rdata2, 
                                                                                ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw)
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh)
                                                                                 ? 3U
                                                                                 : 0U))));
        }
    } else {
        vlSelfRef.npc__DOT__drdata = 0U;
    }
    vlSelfRef.npc__DOT__u_PC__DOT__dnpc = ((((0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.npc__DOT__inst)) 
                                             | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr)) 
                                            | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq) 
                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne) 
                                                   | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge) 
                                                      | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                                         | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                            | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                                               & ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  (vlSelfRef.npc__DOT__rf_rdata1 
                                                   == vlSelfRef.npc__DOT__rf_rdata2)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.npc__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlSelfRef.npc__DOT__rf_rdata1 
                                                    != vlSelfRef.npc__DOT__rf_rdata2)
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.npc__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 
                                                    VL_GTES_III(32, vlSelfRef.npc__DOT__rf_rdata1, vlSelfRef.npc__DOT__rf_rdata2)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.npc__DOT__inst 
                                                          >> 0xcU)))
                                                      ? 
                                                     (vlSelfRef.npc__DOT__rf_rdata1 
                                                      >= vlSelfRef.npc__DOT__rf_rdata2)
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.npc__DOT__inst 
                                                           >> 0xcU)))
                                                       ? 
                                                      VL_LTS_III(32, vlSelfRef.npc__DOT__rf_rdata1, vlSelfRef.npc__DOT__rf_rdata2)
                                                       : (IData)(
                                                                 ((0x6000U 
                                                                   == 
                                                                   (0x7000U 
                                                                    & vlSelfRef.npc__DOT__inst)) 
                                                                  & (vlSelfRef.npc__DOT__rf_rdata1 
                                                                     < vlSelfRef.npc__DOT__rf_rdata2))))))))))
                                            ? ((IData)(
                                                       (vlSelfRef.npc__DOT__u_ALU__DOT__out 
                                                        >> 1U)) 
                                               << 1U)
                                            : ((IData)(4U) 
                                               + vlSelfRef.npc__DOT__pc));
}

void Vnpc___024root___eval_triggers__ico(Vnpc___024root* vlSelf);

bool Vnpc___024root___eval_phase__ico(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_phase__ico\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vnpc___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vnpc___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vnpc___024root___eval_act(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_act\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vnpc___024root___nba_sequent__TOP__0(Vnpc___024root* vlSelf);

void Vnpc___024root___eval_nba(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_nba\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vnpc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vnpc___024root____Vdpiimwrap_npc__DOT__ebreak_TOP();

VL_INLINE_OPT void Vnpc___024root___nba_sequent__TOP__0(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___nba_sequent__TOP__0\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdlySet__npc__DOT__u_RegisterFile__DOT__rf__v0;
    __VdlySet__npc__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    IData/*31:0*/ __VdlyVal__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __VdlyVal__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    CData/*4:0*/ __VdlyDim0__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __VdlyDim0__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    CData/*0:0*/ __VdlySet__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __VdlySet__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    // Body
    if (vlSelfRef.npc__DOT__stop_sim) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__ebreak_TOP();
    }
    __VdlySet__npc__DOT__u_RegisterFile__DOT__rf__v0 = 0U;
    __VdlySet__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0U;
    if (vlSelfRef.rst) {
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i = 0x20U;
        __VdlySet__npc__DOT__u_RegisterFile__DOT__rf__v0 = 1U;
    } else if ((4U != (IData)(vlSelfRef.npc__DOT__rdregsrc))) {
        __VdlyVal__npc__DOT__u_RegisterFile__DOT__rf__v32 
            = ((0U == (IData)(vlSelfRef.npc__DOT__rdregsrc))
                ? (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out)
                : ((1U == (IData)(vlSelfRef.npc__DOT__rdregsrc))
                    ? ((0U == (7U & (vlSelfRef.npc__DOT__inst 
                                     >> 0xcU))) ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.npc__DOT__drdata 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelfRef.npc__DOT__drdata))
                        : ((4U == (7U & (vlSelfRef.npc__DOT__inst 
                                         >> 0xcU)))
                            ? (0xffU & vlSelfRef.npc__DOT__drdata)
                            : ((1U == (7U & (vlSelfRef.npc__DOT__inst 
                                             >> 0xcU)))
                                ? (((- (IData)((1U 
                                                & (vlSelfRef.npc__DOT__drdata 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelfRef.npc__DOT__drdata))
                                : ((5U == (7U & (vlSelfRef.npc__DOT__inst 
                                                 >> 0xcU)))
                                    ? (0xffffU & vlSelfRef.npc__DOT__drdata)
                                    : vlSelfRef.npc__DOT__drdata))))
                    : ((2U == (IData)(vlSelfRef.npc__DOT__rdregsrc))
                        ? ((IData)(4U) + vlSelfRef.npc__DOT__pc)
                        : ((3U == (IData)(vlSelfRef.npc__DOT__rdregsrc))
                            ? ((0U == (IData)(vlSelfRef.npc__DOT__cmp_type))
                                ? (1U & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out)))))
                                : ((1U == (IData)(vlSelfRef.npc__DOT__cmp_type))
                                    ? (0U != (IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out))
                                    : ((2U == (IData)(vlSelfRef.npc__DOT__cmp_type))
                                        ? (1U & ((IData)(
                                                         (0x80000000ULL 
                                                          == 
                                                          (0x180000000ULL 
                                                           & vlSelfRef.npc__DOT__u_ALU__DOT__out))) 
                                                 | (IData)(
                                                           (0x100000000ULL 
                                                            == 
                                                            (0x180000000ULL 
                                                             & vlSelfRef.npc__DOT__u_ALU__DOT__out)))))
                                        : (1U & (~ 
                                                 ((0U 
                                                   == (IData)(vlSelfRef.npc__DOT__ALU_op))
                                                   ? (IData)(
                                                             (1ULL 
                                                              & (((QData)((IData)(vlSelfRef.npc__DOT__ALU_A)) 
                                                                  + 
                                                                  ((QData)((IData)(vlSelfRef.npc__DOT__ALU_B)) 
                                                                   + (QData)((IData)(vlSelfRef.npc__DOT__ALU_Cin)))) 
                                                                 >> 0x20U)))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.npc__DOT__ALU_op)) 
                                                   & (IData)(
                                                             (1ULL 
                                                              & ((1ULL 
                                                                  + 
                                                                  ((QData)((IData)(vlSelfRef.npc__DOT__ALU_A)) 
                                                                   + (QData)((IData)(
                                                                                (~ vlSelfRef.npc__DOT__ALU_B))))) 
                                                                 >> 0x20U))))))))))
                            : 0U))));
        __VdlyDim0__npc__DOT__u_RegisterFile__DOT__rf__v32 
            = ((IData)(vlSelfRef.npc__DOT__stop_sim)
                ? 0xaU : (0x1fU & (vlSelfRef.npc__DOT__inst 
                                   >> 7U)));
        __VdlySet__npc__DOT__u_RegisterFile__DOT__rf__v32 = 1U;
    }
    if (__VdlySet__npc__DOT__u_RegisterFile__DOT__rf__v0) {
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[1U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[2U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[3U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[4U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[5U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[6U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[7U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[8U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[9U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0xaU] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0xbU] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0xcU] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0xdU] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0xeU] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0xfU] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x10U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x11U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x12U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x13U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x14U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x15U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x16U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x17U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x18U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x19U] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x1aU] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x1bU] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x1cU] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x1dU] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x1eU] = 0U;
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[0x1fU] = 0U;
    }
    if (__VdlySet__npc__DOT__u_RegisterFile__DOT__rf__v32) {
        vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf[__VdlyDim0__npc__DOT__u_RegisterFile__DOT__rf__v32] 
            = __VdlyVal__npc__DOT__u_RegisterFile__DOT__rf__v32;
    }
    vlSelfRef.npc__DOT__pc = ((IData)(vlSelfRef.rst)
                               ? 0x80000000U : vlSelfRef.npc__DOT__u_PC__DOT__dnpc);
    if (vlSelfRef.rst) {
        vlSelfRef.npc__DOT__inst = 0U;
    } else {
        Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP(vlSelfRef.npc__DOT__pc, vlSelfRef.__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout);
        vlSelfRef.npc__DOT__inst = vlSelfRef.__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout;
    }
    vlSelfRef.npc__DOT__rf_rdata2 = ((0U == (0x1fU 
                                             & (vlSelfRef.npc__DOT__inst 
                                                >> 0x14U)))
                                      ? 0U : vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf
                                     [(0x1fU & (vlSelfRef.npc__DOT__inst 
                                                >> 0x14U))]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x23U] 
        = (0xfffff000U & vlSelfRef.npc__DOT__inst);
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x24U] 
        = (0xfffff000U & vlSelfRef.npc__DOT__inst);
    vlSelfRef.npc__DOT__idu_inst__DOT__immJ = (((- (IData)(
                                                           (vlSelfRef.npc__DOT__inst 
                                                            >> 0x1fU))) 
                                                << 0x14U) 
                                               | (((0xff000U 
                                                    & vlSelfRef.npc__DOT__inst) 
                                                   | (0x800U 
                                                      & (vlSelfRef.npc__DOT__inst 
                                                         >> 9U))) 
                                                  | (0x7feU 
                                                     & (vlSelfRef.npc__DOT__inst 
                                                        >> 0x14U))));
    vlSelfRef.npc__DOT__idu_inst__DOT__immS = (((- (IData)(
                                                           (vlSelfRef.npc__DOT__inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelfRef.npc__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelfRef.npc__DOT__inst 
                                                        >> 7U))));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_addi 
        = (IData)((0x13U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xor 
        = (IData)((0x4033U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_or = (IData)(
                                                            (0x6033U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_andi 
        = (IData)((0x7013U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sll 
        = (IData)((0x1033U == (0xfe00707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_and 
        = (IData)((0x7033U == (0xfe00707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xori 
        = (IData)((0x4013U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slli 
        = (IData)((0x1013U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_ori 
        = (IData)((0x6013U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltu 
        = (IData)((0x3033U == (0xfe00707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slt 
        = (IData)((0x2033U == (0xfe00707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slti 
        = (IData)((0x2013U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr 
        = (IData)((0x67U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq 
        = (IData)((0x63U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne 
        = (IData)((0x1063U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge 
        = (IData)((0x5063U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt 
        = (IData)((0x4063U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw = (IData)(
                                                            (0x2023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb = (IData)(
                                                            (0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh = (IData)(
                                                            (0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lw = (IData)(
                                                            (0x2003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lh = (IData)(
                                                            (0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lb = (IData)(
                                                            (3U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__immB = (((- (IData)(
                                                           (vlSelfRef.npc__DOT__inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0x800U 
                                                   & (vlSelfRef.npc__DOT__inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelfRef.npc__DOT__inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelfRef.npc__DOT__inst 
                                                           >> 7U)))));
    vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_6 
        = (IData)((0x33U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_15 
        = (IData)((0x5013U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_17 
        = (IData)((0x5033U == (0x707fU & vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__immI = (((- (IData)(
                                                           (vlSelfRef.npc__DOT__inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelfRef.npc__DOT__inst 
                                                  >> 0x14U));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x22U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immJ;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x10U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immS;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x16U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immS;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x20U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immS;
    vlSelfRef.npc__DOT__cmp_type = (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltu) 
                                     | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltiu))
                                     ? 3U : (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slt) 
                                              | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slti))
                                              ? 2U : 0U));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xaU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immB;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xbU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immB;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xdU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immB;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xeU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immB;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x18U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immB;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1dU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immB;
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_add 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_6) 
           & (0U == (vlSelfRef.npc__DOT__inst >> 0x19U)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sub 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_6) 
           & (0x20U == (vlSelfRef.npc__DOT__inst >> 0x19U)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srai 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_15) 
           & (0x20U == (vlSelfRef.npc__DOT__inst >> 0x19U)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srli 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_15) 
           & (0U == (vlSelfRef.npc__DOT__inst >> 0x19U)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srl 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_17) 
           & (0U == (vlSelfRef.npc__DOT__inst >> 0x19U)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sra 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT____VdfgRegularize_hdcfcc17d_0_17) 
           & (0x20U == (vlSelfRef.npc__DOT__inst >> 0x19U)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0U] 
        = (IData)((0x2700000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[1U] 
        = ((vlSelfRef.npc__DOT__idu_inst__DOT__immI 
            << 6U) | (IData)(((0x2700000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                              >> 0x20U)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[2U] 
        = (0x980U | ((0xfffff000U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[2U]) 
                     | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                        >> 0x1aU)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[2U] 
        = ((0xfffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[2U]) 
           | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
              << 0xcU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[3U] 
        = (0x25000U | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                       >> 0x14U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[4U] = 0x900000U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[5U] 
        = (0x23000000U | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                          << 0x1eU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[6U] 
        = (0x80000000U | ((0xfffU & (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                                     >> 2U)) | (0x3ffff000U 
                                                & (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                                                   >> 2U))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[7U] = 8U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[8U] 
        = (0x210U | (0xfffffc00U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[8U] 
        = ((0x3ffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[8U]) 
           | ((IData)((0x2000000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
              << 0xaU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[9U] 
        = (((IData)((0x2000000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
            >> 0x16U) | ((vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                          << 0x10U) | ((IData)(((0x2000000000ULL 
                                                 | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xaU] 
        = (0x1f0000U | (((0x3ffU & (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                                    >> 0x10U)) | ((IData)(
                                                          ((0x2000000000ULL 
                                                            | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                                           >> 0x20U)) 
                                                  >> 0x16U)) 
                        | (0xfc00U & (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                                      >> 0x10U))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xbU] 
        = (0x7800000U | (0xf0000000U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xbU] 
        = ((0xfffffffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xbU]) 
           | ((IData)((0x1d00000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB)))) 
              << 0x1cU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xcU] 
        = (((IData)((0x1d00000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB)))) 
            >> 4U) | ((IData)(((0x1d00000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB))) 
                               >> 0x20U)) << 0x1cU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xdU] 
        = (((0xffffffcU & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                           << 2U)) | ((IData)(((0x1d00000000ULL 
                                                | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB))) 
                                               >> 0x20U)) 
                                      >> 4U)) | (0xf0000000U 
                                                 & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                                                    << 2U)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xeU] 
        = (0x70U | ((0xffffff00U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xeU]) 
                    | (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                       >> 0x1eU)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xeU] 
        = ((0xffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xeU]) 
           | ((IData)((0x1b00000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
              << 8U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xfU] 
        = (((IData)((0x1b00000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
            >> 0x18U) | ((vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                          << 0xeU) | ((IData)(((0x1b00000000ULL 
                                                | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                               >> 0x20U)) 
                                      << 8U)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x10U] 
        = (0x68000U | ((0xfff00000U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x10U]) 
                       | (((0xffU & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                                     >> 0x12U)) | ((IData)(
                                                           ((0x1b00000000ULL 
                                                             | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                                            >> 0x20U)) 
                                                   >> 0x18U)) 
                          | (0x3f00U & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                                        >> 0x12U)))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x10U] 
        = ((0xfffffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x10U]) 
           | ((IData)((0x1900000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB)))) 
              << 0x14U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x11U] 
        = (((IData)((0x1900000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB)))) 
            >> 0xcU) | ((vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                         << 0x1aU) | ((IData)(((0x1900000000ULL 
                                                | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB))) 
                                               >> 0x20U)) 
                                      << 0x14U)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x12U] 
        = (0x60000000U | (((0xfffffU & (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                                        >> 6U)) | ((IData)(
                                                           ((0x1900000000ULL 
                                                             | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immB))) 
                                                            >> 0x20U)) 
                                                   >> 0xcU)) 
                          | (0x3f00000U & (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                                           >> 6U))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x13U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immS;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x14U] = 0x17U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x15U] = 0x580U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x16U] 
        = (0x15000U | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                       << 0x12U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x17U] 
        = (0x500000U | ((0xff000000U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x17U]) 
                        | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                           >> 0xeU)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x17U] 
        = ((0xffffffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x17U]) 
           | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
              << 0x18U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x18U] 
        = (0x13000000U | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                          >> 8U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x19U] = 0x80000000U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1aU] 
        = (4U | ((0xfffff0U & (vlSelfRef.npc__DOT__idu_inst__DOT__immS 
                               << 4U)) | (0xff000000U 
                                          & (vlSelfRef.npc__DOT__idu_inst__DOT__immS 
                                             << 4U))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1bU] 
        = (0x110U | ((0xfffffc00U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1bU]) 
                     | (vlSelfRef.npc__DOT__idu_inst__DOT__immS 
                        >> 0x1cU)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1bU] 
        = ((0x3ffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1bU]) 
           | ((IData)((0x1000000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
              << 0xaU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1cU] 
        = (((IData)((0x1000000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
            >> 0x16U) | ((vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                          << 0x10U) | ((IData)(((0x1000000000ULL 
                                                 | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1dU] 
        = (0xf0000U | ((0xffc00000U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1dU]) 
                       | (((0x3ffU & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                                      >> 0x10U)) | 
                           ((IData)(((0x1000000000ULL 
                                      | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                     >> 0x20U)) >> 0x16U)) 
                          | (0xfc00U & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                                        >> 0x10U)))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1dU] 
        = ((0x3fffffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1dU]) 
           | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
              << 0x16U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1eU] 
        = (0x3800000U | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                         >> 0xaU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1fU] = 0xd0000000U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x20U] = 0U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x21U] = 0x30U;
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x22U] 
        = (0xb00U | ((0x3fc000U & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                                   << 0xeU)) | (0xffc00000U 
                                                & (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                                                   << 0xeU))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x23U] 
        = (0x28000U | (vlSelfRef.npc__DOT__idu_inst__DOT__immB 
                       >> 0x12U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x24U] 
        = (0x900000U | (0xfc000000U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x24U] 
        = ((0x3ffffffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x24U]) 
           | ((IData)((0x800000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
              << 0x1aU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x25U] 
        = (((IData)((0x800000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
            >> 6U) | ((IData)(((0x800000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                               >> 0x20U)) << 0x1aU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x26U] 
        = (((0x3ffffffU & vlSelfRef.npc__DOT__idu_inst__DOT__immS) 
            | ((IData)(((0x800000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                        >> 0x20U)) >> 6U)) | (0xfc000000U 
                                              & vlSelfRef.npc__DOT__idu_inst__DOT__immS));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x27U] 
        = (7U | (0xffffffc0U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x27U]));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x27U] 
        = ((0x3fU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x27U]) 
           | ((IData)((0x600000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
              << 6U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x28U] 
        = (((IData)((0x600000000ULL | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI)))) 
            >> 0x1aU) | ((vlSelfRef.npc__DOT__idu_inst__DOT__immJ 
                          << 0xcU) | ((IData)(((0x600000000ULL 
                                                | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                               >> 0x20U)) 
                                      << 6U)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x29U] 
        = (0x5000U | ((0xc0000000U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x29U]) 
                      | (((0x3fU & (vlSelfRef.npc__DOT__idu_inst__DOT__immJ 
                                    >> 0x14U)) | ((IData)(
                                                          ((0x600000000ULL 
                                                            | (QData)((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__immI))) 
                                                           >> 0x20U)) 
                                                  >> 0x1aU)) 
                         | (0xfc0U & (vlSelfRef.npc__DOT__idu_inst__DOT__immJ 
                                      >> 0x14U)))));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x29U] 
        = ((0x3fffffffU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x29U]) 
           | ((IData)((QData)((IData)((0x400000U | 
                                       (vlSelfRef.npc__DOT__inst 
                                        >> 0xcU))))) 
              << 0x1eU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2aU] 
        = (((IData)((QData)((IData)((0x400000U | (vlSelfRef.npc__DOT__inst 
                                                  >> 0xcU))))) 
            >> 2U) | ((IData)(((QData)((IData)((0x400000U 
                                                | (vlSelfRef.npc__DOT__inst 
                                                   >> 0xcU)))) 
                               >> 0x20U)) << 0x1eU));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2bU] 
        = ((0xfffffff0U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2bU]) 
           | ((IData)(((QData)((IData)((0x400000U | 
                                        (vlSelfRef.npc__DOT__inst 
                                         >> 0xcU)))) 
                       >> 0x20U)) >> 2U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2bU] 
        = ((0xfU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2bU]) 
           | ((IData)((0x800000000300000ULL | (QData)((IData)(
                                                              (vlSelfRef.npc__DOT__inst 
                                                               >> 0xcU))))) 
              << 4U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2cU] 
        = (((IData)((0x800000000300000ULL | (QData)((IData)(
                                                            (vlSelfRef.npc__DOT__inst 
                                                             >> 0xcU))))) 
            >> 0x1cU) | ((IData)(((0x800000000300000ULL 
                                   | (QData)((IData)(
                                                     (vlSelfRef.npc__DOT__inst 
                                                      >> 0xcU)))) 
                                  >> 0x20U)) << 4U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2dU] 
        = (((IData)(((0x800000000300000ULL | (QData)((IData)(
                                                             (vlSelfRef.npc__DOT__inst 
                                                              >> 0xcU)))) 
                     >> 0x20U)) >> 0x1cU) | (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                                             << 4U));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2eU] 
        = ((0x3f0U & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2eU]) 
           | (0x3ffU & (vlSelfRef.npc__DOT__idu_inst__DOT__immI 
                        >> 0x1cU)));
    vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2eU] 
        = (0x10U | (0xfU & vlSelfRef.npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[7U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[8U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xcU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xfU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x13U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x14U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x17U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x19U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1fU] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x21U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x26U] 
        = vlSelfRef.npc__DOT__idu_inst__DOT__immI;
    vlSelfRef.npc__DOT__stop_sim = (1U & ((~ ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_addi) 
                                              | ((0x100073U 
                                                  == vlSelfRef.npc__DOT__inst) 
                                                 | ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelfRef.npc__DOT__inst)) 
                                                    | ((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelfRef.npc__DOT__inst)) 
                                                       | ((0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelfRef.npc__DOT__inst)) 
                                                          | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr) 
                                                             | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw) 
                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lw) 
                                                                   | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_add) 
                                                                      | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq) 
                                                                         | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltu) 
                                                                            | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xor) 
                                                                               | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_or) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltiu) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lbu) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sub) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srai) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_andi) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sll) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_and) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xori) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slli) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slt) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lh) 
                                                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lhu) 
                                                                                | ((((((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srl) 
                                                                                | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srli)) 
                                                                                | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sra)) 
                                                                                | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lb)) 
                                                                                | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slti)) 
                                                                                | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_ori))))))))))))))))))))))))))))))))))) 
                                          | (0x100073U 
                                             == vlSelfRef.npc__DOT__inst)));
    vlSelfRef.npc__DOT__idu_inst__DOT__inst_name = 
        ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_addi)
          ? 1U : ((0x100073U == vlSelfRef.npc__DOT__inst)
                   ? 2U : ((0x17U == (0x7fU & vlSelfRef.npc__DOT__inst))
                            ? 3U : ((0x37U == (0x7fU 
                                               & vlSelfRef.npc__DOT__inst))
                                     ? 4U : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.npc__DOT__inst))
                                              ? 5U : 
                                             ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr)
                                               ? 6U
                                               : ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw)
                                                   ? 7U
                                                   : 
                                                  ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lw)
                                                    ? 8U
                                                    : 
                                                   ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_add)
                                                     ? 9U
                                                     : 
                                                    ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq)
                                                      ? 0xaU
                                                      : 
                                                     ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltu)
                                                       ? 0xbU
                                                       : 
                                                      ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xor)
                                                        ? 0xcU
                                                        : 
                                                       ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_or)
                                                         ? 0xdU
                                                         : 
                                                        ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sltiu)
                                                          ? 0xeU
                                                          : 
                                                         ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne)
                                                           ? 0xfU
                                                           : 
                                                          ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lbu)
                                                            ? 0x10U
                                                            : 
                                                           ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb)
                                                             ? 0x11U
                                                             : 
                                                            ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sub)
                                                              ? 0x12U
                                                              : 
                                                             ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srai)
                                                               ? 0x13U
                                                               : 
                                                              ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_andi)
                                                                ? 0x14U
                                                                : 
                                                               ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sll)
                                                                 ? 0x15U
                                                                 : 
                                                                ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_and)
                                                                  ? 0x16U
                                                                  : 
                                                                 ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh)
                                                                   ? 0x17U
                                                                   : 
                                                                  ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_xori)
                                                                    ? 0x18U
                                                                    : 
                                                                   ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge)
                                                                     ? 0x19U
                                                                     : 
                                                                    ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu)
                                                                      ? 0x1aU
                                                                      : 
                                                                     ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slli)
                                                                       ? 0x1bU
                                                                       : 
                                                                      ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt)
                                                                        ? 0x1cU
                                                                        : 
                                                                       ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu)
                                                                         ? 0x1dU
                                                                         : 
                                                                        ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slt)
                                                                          ? 0x1eU
                                                                          : 
                                                                         ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lh)
                                                                           ? 0x1fU
                                                                           : 
                                                                          ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lhu)
                                                                            ? 0x20U
                                                                            : 
                                                                           ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srl)
                                                                             ? 0x21U
                                                                             : 
                                                                            ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srli)
                                                                              ? 0x22U
                                                                              : 
                                                                             ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sra)
                                                                               ? 0x23U
                                                                               : 
                                                                              ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_srl)
                                                                                ? 0x24U
                                                                                : 
                                                                               ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lb)
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_slti)
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_ori)
                                                                                 ? 0x27U
                                                                                 : 0U)))))))))))))))))))))))))))))))))))))));
    vlSelfRef.npc__DOT__rs1 = (((IData)(vlSelfRef.npc__DOT__stop_sim) 
                                | (0x37U == (0x7fU 
                                             & vlSelfRef.npc__DOT__inst)))
                                ? 0U : (0x1fU & (vlSelfRef.npc__DOT__inst 
                                                 >> 0xfU)));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [6U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [7U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [8U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [9U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x24U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x25U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x26U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelfRef.npc__DOT__rdregsrc = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit)
                                     ? (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out)
                                     : 0U);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [6U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [7U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [8U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [9U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x24U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x25U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x26U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelfRef.npc__DOT__ALU_op = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [6U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [7U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [8U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [9U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x24U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x25U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x26U]))) & vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelfRef.npc__DOT__imm = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit)
                                ? vlSelfRef.npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out
                                : 1U);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
            == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
            [0U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [1U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [2U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [3U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [4U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [5U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [6U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [7U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [8U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [9U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xaU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xbU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xcU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xdU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xeU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xfU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x10U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x11U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x12U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x13U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x14U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x15U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x16U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x17U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x18U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x19U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1aU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1bU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1cU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1dU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1eU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1fU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x20U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x21U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x22U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x23U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x24U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x25U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x26U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelfRef.npc__DOT__ALUsrc1 = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
                                   && (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
            == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
            [0U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [1U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [2U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [3U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [4U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [5U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [6U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [7U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [8U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [8U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [9U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [9U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xaU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xbU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xcU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xdU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xeU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xfU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x10U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x11U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x12U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x13U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x14U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x15U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x16U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x17U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x18U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x19U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1aU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1bU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1cU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1dU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1eU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1fU]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x20U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x21U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x22U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x23U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x24U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x24U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x25U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x25U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x26U]) & vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x26U]));
    vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x26U]));
    vlSelfRef.npc__DOT__ALUsrc2 = ((1U & (~ (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit))) 
                                   || (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out));
    vlSelfRef.npc__DOT__rf_rdata1 = ((0U == (IData)(vlSelfRef.npc__DOT__rs1))
                                      ? 0U : vlSelfRef.npc__DOT__u_RegisterFile__DOT__rf
                                     [vlSelfRef.npc__DOT__rs1]);
    vlSelfRef.npc__DOT__ALU_B = ((IData)(vlSelfRef.npc__DOT__ALUsrc2)
                                  ? vlSelfRef.npc__DOT__imm
                                  : vlSelfRef.npc__DOT__rf_rdata2);
    vlSelfRef.npc__DOT__ALU_A = ((IData)(vlSelfRef.npc__DOT__ALUsrc1)
                                  ? vlSelfRef.npc__DOT__pc
                                  : vlSelfRef.npc__DOT__rf_rdata1);
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_0 = VL_SHIFTRS_III(32,32,5, vlSelfRef.npc__DOT__ALU_A, 
                                                              (0x1fU 
                                                               & vlSelfRef.npc__DOT__ALU_B));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_1 = (vlSelfRef.npc__DOT__ALU_A 
                                                & vlSelfRef.npc__DOT__ALU_B);
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_2 = (vlSelfRef.npc__DOT__ALU_A 
                                                | vlSelfRef.npc__DOT__ALU_B);
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_3 = (vlSelfRef.npc__DOT__ALU_A 
                                                ^ vlSelfRef.npc__DOT__ALU_B);
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_4 = (vlSelfRef.npc__DOT__ALU_A 
                                                << 
                                                (0x1fU 
                                                 & vlSelfRef.npc__DOT__ALU_B));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_5 = (vlSelfRef.npc__DOT__ALU_A 
                                                >> 
                                                (0x1fU 
                                                 & vlSelfRef.npc__DOT__ALU_B));
    vlSelfRef.npc__DOT__u_ALU__DOT__sub_result = ((IData)(1U) 
                                                  + 
                                                  (vlSelfRef.npc__DOT__ALU_A 
                                                   + 
                                                   (~ vlSelfRef.npc__DOT__ALU_B)));
    vlSelfRef.npc__DOT__u_ALU__DOT__add_result = (vlSelfRef.npc__DOT__ALU_A 
                                                  + 
                                                  (vlSelfRef.npc__DOT__ALU_B 
                                                   + (IData)(vlSelfRef.npc__DOT__ALU_Cin)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U] 
        = (0x400000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_0));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U] 
        = (0x600000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_2)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_2));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_3));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_4)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_4));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_5)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_5));
    vlSelfRef.npc__DOT__u_ALU__DOT__sub_overflow = 
        (1U & (((vlSelfRef.npc__DOT__ALU_A >> 0x1fU) 
                & ((~ (vlSelfRef.npc__DOT__u_ALU__DOT__sub_result 
                       >> 0x1fU)) & (~ (vlSelfRef.npc__DOT__ALU_B 
                                        >> 0x1fU)))) 
               | ((~ (vlSelfRef.npc__DOT__ALU_A >> 0x1fU)) 
                  & ((vlSelfRef.npc__DOT__ALU_B & vlSelfRef.npc__DOT__u_ALU__DOT__sub_result) 
                     >> 0x1fU))));
    vlSelfRef.npc__DOT__u_ALU__DOT__add_overflow = 
        (1U & (((vlSelfRef.npc__DOT__ALU_A >> 0x1fU) 
                & ((~ (vlSelfRef.npc__DOT__u_ALU__DOT__add_result 
                       >> 0x1fU)) & (vlSelfRef.npc__DOT__ALU_B 
                                     >> 0x1fU))) | 
               ((~ (vlSelfRef.npc__DOT__ALU_A >> 0x1fU)) 
                & ((~ (vlSelfRef.npc__DOT__ALU_B >> 0x1fU)) 
                   & (vlSelfRef.npc__DOT__u_ALU__DOT__add_result 
                      >> 0x1fU)))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_12 = (((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_overflow)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__sub_result)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_11 = (((QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_overflow)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__add_result)));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6U] 
        = (0x200000000ULL | vlSelfRef.__VdfgRegularize_hd87f99a1_1_12);
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_1_12;
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_1_11;
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_1_11;
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                               == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                               [0U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__ALU_op) == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                                  == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__ALU_op) == 
              vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                                  == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__ALU_op) == 
              vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                                  == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__ALU_op) == 
              vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                                  == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__ALU_op) == 
              vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                                  == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__ALU_op) == 
              vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                                  == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__ALU_op) == 
              vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelfRef.npc__DOT__ALU_op) 
                                  == vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [7U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.npc__DOT__ALU_op) == 
              vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [7U]));
    vlSelfRef.npc__DOT__u_ALU__DOT__out = ((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
                                            ? vlSelfRef.npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
                                            : 0ULL);
    if (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw) 
         | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lw) 
            | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lbu) 
               | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb) 
                  | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh) 
                     | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lh) 
                        | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lhu) 
                           | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_lb))))))))) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out), vlSelfRef.__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout);
        vlSelfRef.npc__DOT__drdata = vlSelfRef.__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout;
        if (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw) 
             | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb) 
                | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh)))) {
            Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_write_TOP((IData)(vlSelfRef.npc__DOT__u_ALU__DOT__out), vlSelfRef.npc__DOT__rf_rdata2, 
                                                                                ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sw)
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sb)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_sh)
                                                                                 ? 3U
                                                                                 : 0U))));
        }
    } else {
        vlSelfRef.npc__DOT__drdata = 0U;
    }
    vlSelfRef.npc__DOT__u_PC__DOT__dnpc = ((((0x6fU 
                                              == (0x7fU 
                                                  & vlSelfRef.npc__DOT__inst)) 
                                             | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_jalr)) 
                                            | (((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_beq) 
                                                | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bne) 
                                                   | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bge) 
                                                      | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                                         | ((IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                            | (IData)(vlSelfRef.npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                                               & ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  (vlSelfRef.npc__DOT__rf_rdata1 
                                                   == vlSelfRef.npc__DOT__rf_rdata2)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.npc__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlSelfRef.npc__DOT__rf_rdata1 
                                                    != vlSelfRef.npc__DOT__rf_rdata2)
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.npc__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 
                                                    VL_GTES_III(32, vlSelfRef.npc__DOT__rf_rdata1, vlSelfRef.npc__DOT__rf_rdata2)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.npc__DOT__inst 
                                                          >> 0xcU)))
                                                      ? 
                                                     (vlSelfRef.npc__DOT__rf_rdata1 
                                                      >= vlSelfRef.npc__DOT__rf_rdata2)
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.npc__DOT__inst 
                                                           >> 0xcU)))
                                                       ? 
                                                      VL_LTS_III(32, vlSelfRef.npc__DOT__rf_rdata1, vlSelfRef.npc__DOT__rf_rdata2)
                                                       : (IData)(
                                                                 ((0x6000U 
                                                                   == 
                                                                   (0x7000U 
                                                                    & vlSelfRef.npc__DOT__inst)) 
                                                                  & (vlSelfRef.npc__DOT__rf_rdata1 
                                                                     < vlSelfRef.npc__DOT__rf_rdata2))))))))))
                                            ? ((IData)(
                                                       (vlSelfRef.npc__DOT__u_ALU__DOT__out 
                                                        >> 1U)) 
                                               << 1U)
                                            : ((IData)(4U) 
                                               + vlSelfRef.npc__DOT__pc));
}

void Vnpc___024root___eval_triggers__act(Vnpc___024root* vlSelf);

bool Vnpc___024root___eval_phase__act(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_phase__act\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vnpc___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vnpc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vnpc___024root___eval_phase__nba(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_phase__nba\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vnpc___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__ico(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__nba(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__act(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG

void Vnpc___024root___eval(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vnpc___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/freeb1e/RISCV/RV32-CPU/core/vsrc/npc.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vnpc___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vnpc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/freeb1e/RISCV/RV32-CPU/core/vsrc/npc.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vnpc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/freeb1e/RISCV/RV32-CPU/core/vsrc/npc.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vnpc___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vnpc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vnpc___024root___eval_debug_assertions(Vnpc___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_debug_assertions\n"); );
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
