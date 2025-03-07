// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc___024root.h"

void Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vnpc___024root___ico_sequent__TOP__0(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->npc__DOT__inst = 0U;
    } else {
        Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP(vlSelf->npc__DOT__pc, vlSelf->__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout);
        vlSelf->npc__DOT__inst = vlSelf->__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout;
    }
    vlSelf->npc__DOT__idu_inst__DOT__immI = (((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->npc__DOT__inst 
                                                >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__immS = (((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 7U))));
    vlSelf->npc__DOT__idu_inst__DOT__immB = (((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->npc__DOT__inst 
                                                         >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__immJ = (((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->npc__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->npc__DOT__inst 
                                                         >> 0x14U)))));
    vlSelf->npc__DOT__rf_rdata2 = ((0U == (0x1fU & 
                                           (vlSelf->npc__DOT__inst 
                                            >> 0x14U)))
                                    ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                   [(0x1fU & (vlSelf->npc__DOT__inst 
                                              >> 0x14U))]);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[7U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[8U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[9U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xaU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xbU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xcU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xdU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__inst 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x10U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x11U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x13U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__inst 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x14U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x15U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x16U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1aU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1cU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1dU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__inst 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1eU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1fU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0x14U) | ((0xff000U & vlSelf->npc__DOT__inst) 
                         | ((0x800U & (vlSelf->npc__DOT__inst 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0x14U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x20U] 
        = (0xfffff000U & vlSelf->npc__DOT__inst);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x21U] 
        = (0xfffff000U & vlSelf->npc__DOT__inst);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x23U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi = (IData)(
                                                            (0x13U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor = (IData)(
                                                           (0x4033U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_or = (IData)(
                                                          (0x6033U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi = (IData)(
                                                            (0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll = (IData)(
                                                           (0x1033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_and = (IData)(
                                                           (0x7033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori = (IData)(
                                                            (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli = (IData)(
                                                            (0x1013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu = (IData)(
                                                            (0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt = (IData)(
                                                           (0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw = (IData)(
                                                          (0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb = (IData)(
                                                          (0x23U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh = (IData)(
                                                          (0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw = (IData)(
                                                          (0x2003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu = (IData)(
                                                           (0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh = (IData)(
                                                          (0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu = (IData)(
                                                           (0x5003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr = (IData)(
                                                            (0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq = (IData)(
                                                           (0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne = (IData)(
                                                           (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge = (IData)(
                                                           (0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu = (IData)(
                                                            (0x7063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt = (IData)(
                                                           (0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu = (IData)(
                                                            (0x6063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_he69f398c__0 
        = (IData)((0x33U == (0x707fU & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h873f971e__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd3ddd1c8__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[1U] = 0x24U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[2U] 
        = (0x8c0U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                     << 0xcU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[3U] 
        = (0x22000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                       >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[4U] 
        = (0x840000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                        << 0x18U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[5U] 
        = (0x20000000U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                           << 0x1eU) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                        >> 8U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[6U] 
        = (0xc0000000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                          >> 2U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[7U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[8U] 
        = (0x1e0U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                     << 0xaU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[9U] 
        = (0x7400U | ((vlSelf->npc__DOT__idu_inst__DOT__immB 
                       << 0x10U) | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                                    >> 0x16U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xaU] 
        = (0x1c0000U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                         << 0x16U) | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                                      >> 0x10U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xbU] 
        = (0x6c00000U | ((vlSelf->npc__DOT__idu_inst__DOT__immB 
                          << 0x1cU) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                       >> 0xaU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xcU] 
        = (0xa0000000U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                          >> 4U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xdU] 
        = (1U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                 << 2U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xeU] 
        = (0x64U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                     << 8U) | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                               >> 0x1eU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xfU] 
        = (0x1800U | ((vlSelf->npc__DOT__idu_inst__DOT__immS 
                       << 0xeU) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                   >> 0x18U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x10U] 
        = (0x5c000U | (vlSelf->npc__DOT__idu_inst__DOT__immS 
                       >> 0x12U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x11U] = 0x1600000U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x12U] = 0x54000000U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x13U] 
        = vlSelf->npc__DOT__idu_inst__DOT__immI;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x14U] 
        = (0x14U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                    << 6U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x15U] 
        = (0x4c0U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                     >> 0x1aU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x16U] 
        = (0x12000U | (vlSelf->npc__DOT__idu_inst__DOT__immS 
                       << 0x12U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x17U] 
        = (0x440000U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                         << 0x18U) | (vlSelf->npc__DOT__idu_inst__DOT__immS 
                                      >> 0xeU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x18U] 
        = (0x10000000U | ((vlSelf->npc__DOT__idu_inst__DOT__immB 
                           << 0x1eU) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                        >> 8U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x19U] 
        = (0xc0000000U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                          >> 2U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1aU] 
        = (3U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                 << 4U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1bU] 
        = (0xe0U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                    >> 0x1cU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1cU] = 0x3400U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1dU] = 0xc0000U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1eU] 
        = (0x2c00000U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                         << 0x1cU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1fU] 
        = (0xa0000000U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                          >> 4U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x20U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x21U] 
        = (0x24U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                    << 8U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x22U] 
        = (0x800U | ((vlSelf->npc__DOT__idu_inst__DOT__immS 
                      << 0xeU) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                  >> 0x18U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x23U] 
        = (0x1c000U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                        << 0x14U) | (vlSelf->npc__DOT__idu_inst__DOT__immS 
                                     >> 0x12U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x24U] 
        = (0x600000U | ((vlSelf->npc__DOT__idu_inst__DOT__immJ 
                         << 0x1aU) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                      >> 0xcU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x25U] 
        = (0x14000000U | (vlSelf->npc__DOT__idu_inst__DOT__immJ 
                          >> 6U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x26U] 
        = (0xfffff000U & vlSelf->npc__DOT__inst);
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x27U] 
        = (4U | (0xfffc0000U & (vlSelf->npc__DOT__inst 
                                << 6U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x28U] 
        = (0xc0U | (vlSelf->npc__DOT__inst >> 0x1aU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x29U] 
        = (0x2000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                      << 0x12U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2aU] 
        = (0x40000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                       >> 0xeU));
    vlSelf->npc__DOT__cmp_type = (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu) 
                                   | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu))
                                   ? 3U : ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt)
                                            ? 2U : 0U));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_add = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_he69f398c__0) 
         & (0U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_he69f398c__0) 
         & (0x20U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h873f971e__0) 
         & (0x20U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h873f971e__0) 
         & (0U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd3ddd1c8__0) 
         & (0U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd3ddd1c8__0) 
         & (0x20U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__stop_sim = (1U & ((~ ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi) 
                                            | ((0x100073U 
                                                == vlSelf->npc__DOT__inst) 
                                               | ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->npc__DOT__inst)) 
                                                  | ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->npc__DOT__inst)) 
                                                     | ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->npc__DOT__inst)) 
                                                        | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr) 
                                                           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
                                                              | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw) 
                                                                 | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_add) 
                                                                    | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                                                       | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu) 
                                                                          | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor) 
                                                                             | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_or) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_and) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu) 
                                                                                | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl) 
                                                                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli)) 
                                                                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra))))))))))))))))))))))))))))))))))) 
                                        | (0x100073U 
                                           == vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_name = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi)
                                                   ? 1U
                                                   : 
                                                  ((0x100073U 
                                                    == vlSelf->npc__DOT__inst)
                                                    ? 2U
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->npc__DOT__inst))
                                                     ? 3U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->npc__DOT__inst))
                                                      ? 4U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->npc__DOT__inst))
                                                       ? 5U
                                                       : 
                                                      ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr)
                                                        ? 6U
                                                        : 
                                                       ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw)
                                                         ? 7U
                                                         : 
                                                        ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw)
                                                          ? 8U
                                                          : 
                                                         ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_add)
                                                           ? 9U
                                                           : 
                                                          ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq)
                                                            ? 0xaU
                                                            : 
                                                           ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu)
                                                             ? 0xbU
                                                             : 
                                                            ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor)
                                                              ? 0xcU
                                                              : 
                                                             ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_or)
                                                               ? 0xdU
                                                               : 
                                                              ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu)
                                                                ? 0xeU
                                                                : 
                                                               ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne)
                                                                 ? 0xfU
                                                                 : 
                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_and)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt)
                                                                                ? 0x1eU
                                                                                : 
                                                                               ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh)
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu)
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl)
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli)
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra)
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl)
                                                                                 ? 0x24U
                                                                                 : 0U))))))))))))))))))))))))))))))))))));
    vlSelf->npc__DOT__rs1 = (((IData)(vlSelf->npc__DOT__stop_sim) 
                              | (0x37U == (0x7fU & vlSelf->npc__DOT__inst)))
                              ? 0U : (0x1fU & (vlSelf->npc__DOT__inst 
                                               >> 0xfU)));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__rdregsrc = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__ALU_op = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit)
                                 ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out)
                                 : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__imm = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit)
                              ? vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out
                              : 1U);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
            == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
            [0U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [1U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [2U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [3U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [4U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [5U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [6U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [7U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [8U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [9U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xaU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xbU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xcU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xdU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xeU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xfU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x10U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x11U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x12U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x13U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x14U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x15U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x16U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x17U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x18U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x19U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1aU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1bU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1cU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1dU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1eU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1fU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x20U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x21U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x22U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x23U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__ALUsrc1 = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
                                 & (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
            == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
            [0U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [1U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [2U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [3U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [4U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [5U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [6U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [7U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [8U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [9U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xaU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xbU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xcU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xdU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xeU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xfU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x10U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x11U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x12U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x13U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x14U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x15U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x16U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x17U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x18U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x19U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1aU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1bU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1cU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1dU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1eU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1fU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x20U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x21U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x22U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x23U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__ALUsrc2 = (1U & ((~ (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit)) 
                                       | (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out)));
    vlSelf->npc__DOT__rf_rdata1 = ((0U == (IData)(vlSelf->npc__DOT__rs1))
                                    ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                   [vlSelf->npc__DOT__rs1]);
    vlSelf->npc__DOT__ALU_B = ((IData)(vlSelf->npc__DOT__ALUsrc2)
                                ? vlSelf->npc__DOT__imm
                                : vlSelf->npc__DOT__rf_rdata2);
    vlSelf->npc__DOT__ALU_A = ((IData)(vlSelf->npc__DOT__ALUsrc1)
                                ? vlSelf->npc__DOT__pc
                                : vlSelf->npc__DOT__rf_rdata1);
    vlSelf->__VdfgTmp_h88e39ed0__0 = VL_SHIFTRS_III(32,32,5, vlSelf->npc__DOT__ALU_A, 
                                                    (0x1fU 
                                                     & vlSelf->npc__DOT__ALU_B));
    vlSelf->__VdfgTmp_h0b1806e4__0 = (vlSelf->npc__DOT__ALU_A 
                                      & vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h0a443a49__0 = (vlSelf->npc__DOT__ALU_A 
                                      | vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h09752fff__0 = (vlSelf->npc__DOT__ALU_A 
                                      ^ vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h88f4837e__0 = (vlSelf->npc__DOT__ALU_A 
                                      << (0x1fU & vlSelf->npc__DOT__ALU_B));
    vlSelf->__VdfgTmp_h88cffd0d__0 = (vlSelf->npc__DOT__ALU_A 
                                      >> (0x1fU & vlSelf->npc__DOT__ALU_B));
    vlSelf->npc__DOT__u_ALU__DOT__sub_result = ((IData)(1U) 
                                                + (vlSelf->npc__DOT__ALU_A 
                                                   + 
                                                   (~ vlSelf->npc__DOT__ALU_B)));
    vlSelf->npc__DOT__u_ALU__DOT__add_result = (vlSelf->npc__DOT__ALU_A 
                                                + (vlSelf->npc__DOT__ALU_B 
                                                   + (IData)(vlSelf->npc__DOT__ALU_Cin)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h88e39ed0__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h88e39ed0__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U] 
        = (0x600000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0b1806e4__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0b1806e4__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0a443a49__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0a443a49__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h09752fff__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h09752fff__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h88f4837e__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h88f4837e__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h88cffd0d__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h88cffd0d__0));
    vlSelf->npc__DOT__u_ALU__DOT__sub_overflow = (1U 
                                                  & (((vlSelf->npc__DOT__ALU_A 
                                                       >> 0x1fU) 
                                                      & ((~ 
                                                          (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                           >> 0x1fU)) 
                                                         & (~ 
                                                            (vlSelf->npc__DOT__ALU_B 
                                                             >> 0x1fU)))) 
                                                     | ((~ 
                                                         (vlSelf->npc__DOT__ALU_A 
                                                          >> 0x1fU)) 
                                                        & ((vlSelf->npc__DOT__ALU_B 
                                                            & vlSelf->npc__DOT__u_ALU__DOT__sub_result) 
                                                           >> 0x1fU))));
    vlSelf->npc__DOT__u_ALU__DOT__add_overflow = (1U 
                                                  & (((vlSelf->npc__DOT__ALU_A 
                                                       >> 0x1fU) 
                                                      & ((~ 
                                                          (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                           >> 0x1fU)) 
                                                         & (vlSelf->npc__DOT__ALU_B 
                                                            >> 0x1fU))) 
                                                     | ((~ 
                                                         (vlSelf->npc__DOT__ALU_A 
                                                          >> 0x1fU)) 
                                                        & ((~ 
                                                            (vlSelf->npc__DOT__ALU_B 
                                                             >> 0x1fU)) 
                                                           & (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                              >> 0x1fU)))));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6U] 
        = (0x200000000ULL | (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow)) 
                              << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_result))));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                               == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ALU_op) == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__out = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
                                          ? vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
                                          : 0ULL);
    if (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
         | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw) 
            | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu) 
               | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                  | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh) 
                     | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh) 
                        | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu)))))))) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP((IData)(vlSelf->npc__DOT__u_ALU__DOT__out), vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout);
        vlSelf->npc__DOT__drdata = vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout;
        if (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
             | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)))) {
            Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_write_TOP((IData)(vlSelf->npc__DOT__u_ALU__DOT__out), vlSelf->npc__DOT__rf_rdata2, 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw)
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)
                                                                                 ? 3U
                                                                                 : 0U))));
        }
    } else {
        vlSelf->npc__DOT__drdata = 0U;
    }
    vlSelf->npc__DOT__u_PC__DOT__dnpc = ((((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->npc__DOT__inst)) 
                                           | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr)) 
                                          | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                              | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                                 | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                                    | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                                       | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                          | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                                             & ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0xcU)))
                                                 ? 
                                                (vlSelf->npc__DOT__rf_rdata1 
                                                 == vlSelf->npc__DOT__rf_rdata2)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlSelf->npc__DOT__rf_rdata1 
                                                  != vlSelf->npc__DOT__rf_rdata2)
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_GTES_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->npc__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlSelf->npc__DOT__rf_rdata1 
                                                    >= vlSelf->npc__DOT__rf_rdata2)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->npc__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 
                                                    VL_LTS_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                                     : (IData)(
                                                               ((0x6000U 
                                                                 == 
                                                                 (0x7000U 
                                                                  & vlSelf->npc__DOT__inst)) 
                                                                & (vlSelf->npc__DOT__rf_rdata1 
                                                                   < vlSelf->npc__DOT__rf_rdata2))))))))))
                                          ? ((IData)(
                                                     (vlSelf->npc__DOT__u_ALU__DOT__out 
                                                      >> 1U)) 
                                             << 1U)
                                          : ((IData)(4U) 
                                             + vlSelf->npc__DOT__pc));
}

void Vnpc___024root___eval_ico(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vnpc___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vnpc___024root___eval_act(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_act\n"); );
}

void Vnpc___024root____Vdpiimwrap_npc__DOT__ebreak_TOP();

VL_INLINE_OPT void Vnpc___024root___nba_sequent__TOP__0(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0;
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    IData/*31:0*/ __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    CData/*0:0*/ __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32;
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0;
    // Body
    if (vlSelf->npc__DOT__stop_sim) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__ebreak_TOP();
    }
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0 = 0U;
    __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32 = 0U;
    if (vlSelf->rst) {
        vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i = 0x20U;
        __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0 = 1U;
    } else if ((4U != (IData)(vlSelf->npc__DOT__rdregsrc))) {
        __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32 
            = ((0U == (IData)(vlSelf->npc__DOT__rdregsrc))
                ? (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)
                : ((1U == (IData)(vlSelf->npc__DOT__rdregsrc))
                    ? ((0U == (7U & (vlSelf->npc__DOT__inst 
                                     >> 0xcU))) ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->npc__DOT__drdata 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->npc__DOT__drdata))
                        : ((4U == (7U & (vlSelf->npc__DOT__inst 
                                         >> 0xcU)))
                            ? (0xffU & vlSelf->npc__DOT__drdata)
                            : ((1U == (7U & (vlSelf->npc__DOT__inst 
                                             >> 0xcU)))
                                ? (((- (IData)((1U 
                                                & (vlSelf->npc__DOT__drdata 
                                                   >> 0xfU)))) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->npc__DOT__drdata))
                                : ((5U == (7U & (vlSelf->npc__DOT__inst 
                                                 >> 0xcU)))
                                    ? (0xffffU & vlSelf->npc__DOT__drdata)
                                    : vlSelf->npc__DOT__drdata))))
                    : ((2U == (IData)(vlSelf->npc__DOT__rdregsrc))
                        ? ((IData)(4U) + vlSelf->npc__DOT__pc)
                        : ((3U == (IData)(vlSelf->npc__DOT__rdregsrc))
                            ? ((0U == (IData)(vlSelf->npc__DOT__cmp_type))
                                ? (1U & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))
                                : ((1U == (IData)(vlSelf->npc__DOT__cmp_type))
                                    ? (0U != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))
                                    : ((2U == (IData)(vlSelf->npc__DOT__cmp_type))
                                        ? (1U & ((IData)(
                                                         (0x80000000ULL 
                                                          == 
                                                          (0x180000000ULL 
                                                           & vlSelf->npc__DOT__u_ALU__DOT__out))) 
                                                 | (IData)(
                                                           (0x100000000ULL 
                                                            == 
                                                            (0x180000000ULL 
                                                             & vlSelf->npc__DOT__u_ALU__DOT__out)))))
                                        : (1U & (~ 
                                                 ((0U 
                                                   == (IData)(vlSelf->npc__DOT__ALU_op))
                                                   ? (IData)(
                                                             (1ULL 
                                                              & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                  + 
                                                                  ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                                   + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                                 >> 0x20U)))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->npc__DOT__ALU_op)) 
                                                   & (IData)(
                                                             (1ULL 
                                                              & ((1ULL 
                                                                  + 
                                                                  ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                                   + (QData)((IData)(
                                                                                (~ vlSelf->npc__DOT__ALU_B))))) 
                                                                 >> 0x20U))))))))))
                            : 0U))));
        __Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32 = 1U;
        __Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32 
            = ((IData)(vlSelf->npc__DOT__stop_sim) ? 0xaU
                : (0x1fU & (vlSelf->npc__DOT__inst 
                            >> 7U)));
    }
    if (__Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v0) {
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xaU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xbU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xcU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xdU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xeU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0xfU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x10U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x11U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x12U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x13U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x14U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x15U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x16U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x17U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x18U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x19U] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1aU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1bU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1cU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1dU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1eU] = 0U;
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0x1fU] = 0U;
    }
    if (__Vdlyvset__npc__DOT__u_RegisterFile__DOT__rf__v32) {
        vlSelf->npc__DOT__u_RegisterFile__DOT__rf[__Vdlyvdim0__npc__DOT__u_RegisterFile__DOT__rf__v32] 
            = __Vdlyvval__npc__DOT__u_RegisterFile__DOT__rf__v32;
    }
    vlSelf->npc__DOT__pc = ((IData)(vlSelf->rst) ? 0x80000000U
                             : vlSelf->npc__DOT__u_PC__DOT__dnpc);
    if (vlSelf->rst) {
        vlSelf->npc__DOT__inst = 0U;
    } else {
        Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP(vlSelf->npc__DOT__pc, vlSelf->__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout);
        vlSelf->npc__DOT__inst = vlSelf->__Vfunc_npc__DOT__inst_mem__DOT__pmem_read__1__Vfuncout;
    }
    vlSelf->npc__DOT__idu_inst__DOT__immI = (((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->npc__DOT__inst 
                                                >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__immS = (((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 7U))));
    vlSelf->npc__DOT__idu_inst__DOT__immB = (((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->npc__DOT__inst 
                                                         >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__immJ = (((- (IData)(
                                                         (vlSelf->npc__DOT__inst 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->npc__DOT__inst) 
                                                | ((0x800U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->npc__DOT__inst 
                                                         >> 0x14U)))));
    vlSelf->npc__DOT__rf_rdata2 = ((0U == (0x1fU & 
                                           (vlSelf->npc__DOT__inst 
                                            >> 0x14U)))
                                    ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                   [(0x1fU & (vlSelf->npc__DOT__inst 
                                              >> 0x14U))]);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[7U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[8U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[9U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xaU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xbU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xcU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0xdU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__inst 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x10U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x11U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x13U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__inst 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x14U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x15U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x16U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1aU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0x800U & (vlSelf->npc__DOT__inst 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelf->npc__DOT__inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1cU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1dU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | ((0xfe0U & (vlSelf->npc__DOT__inst 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 7U))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1eU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x1fU] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0x14U) | ((0xff000U & vlSelf->npc__DOT__inst) 
                         | ((0x800U & (vlSelf->npc__DOT__inst 
                                       >> 9U)) | (0x7feU 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0x14U)))));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x20U] 
        = (0xfffff000U & vlSelf->npc__DOT__inst);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x21U] 
        = (0xfffff000U & vlSelf->npc__DOT__inst);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list[0x23U] 
        = (((- (IData)((vlSelf->npc__DOT__inst >> 0x1fU))) 
            << 0xcU) | (vlSelf->npc__DOT__inst >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi = (IData)(
                                                            (0x13U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor = (IData)(
                                                           (0x4033U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_or = (IData)(
                                                          (0x6033U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi = (IData)(
                                                            (0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll = (IData)(
                                                           (0x1033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_and = (IData)(
                                                           (0x7033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori = (IData)(
                                                            (0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli = (IData)(
                                                            (0x1013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu = (IData)(
                                                            (0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu 
        = (IData)((0x3013U == (0x707fU & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt = (IData)(
                                                           (0x2033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw = (IData)(
                                                          (0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb = (IData)(
                                                          (0x23U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh = (IData)(
                                                          (0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw = (IData)(
                                                          (0x2003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu = (IData)(
                                                           (0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh = (IData)(
                                                          (0x1003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu = (IData)(
                                                           (0x5003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr = (IData)(
                                                            (0x67U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq = (IData)(
                                                           (0x63U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne = (IData)(
                                                           (0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge = (IData)(
                                                           (0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu = (IData)(
                                                            (0x7063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt = (IData)(
                                                           (0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu = (IData)(
                                                            (0x6063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_he69f398c__0 
        = (IData)((0x33U == (0x707fU & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h873f971e__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd3ddd1c8__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[1U] = 0x24U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[2U] 
        = (0x8c0U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                     << 0xcU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[3U] 
        = (0x22000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                       >> 0x14U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[4U] 
        = (0x840000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                        << 0x18U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[5U] 
        = (0x20000000U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                           << 0x1eU) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                        >> 8U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[6U] 
        = (0xc0000000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                          >> 2U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[7U] = 7U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[8U] 
        = (0x1e0U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                     << 0xaU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[9U] 
        = (0x7400U | ((vlSelf->npc__DOT__idu_inst__DOT__immB 
                       << 0x10U) | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                                    >> 0x16U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xaU] 
        = (0x1c0000U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                         << 0x16U) | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                                      >> 0x10U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xbU] 
        = (0x6c00000U | ((vlSelf->npc__DOT__idu_inst__DOT__immB 
                          << 0x1cU) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                       >> 0xaU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xcU] 
        = (0xa0000000U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                          >> 4U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xdU] 
        = (1U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                 << 2U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xeU] 
        = (0x64U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                     << 8U) | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                               >> 0x1eU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0xfU] 
        = (0x1800U | ((vlSelf->npc__DOT__idu_inst__DOT__immS 
                       << 0xeU) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                   >> 0x18U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x10U] 
        = (0x5c000U | (vlSelf->npc__DOT__idu_inst__DOT__immS 
                       >> 0x12U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x11U] = 0x1600000U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x12U] = 0x54000000U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x13U] 
        = vlSelf->npc__DOT__idu_inst__DOT__immI;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x14U] 
        = (0x14U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                    << 6U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x15U] 
        = (0x4c0U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                     >> 0x1aU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x16U] 
        = (0x12000U | (vlSelf->npc__DOT__idu_inst__DOT__immS 
                       << 0x12U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x17U] 
        = (0x440000U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                         << 0x18U) | (vlSelf->npc__DOT__idu_inst__DOT__immS 
                                      >> 0xeU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x18U] 
        = (0x10000000U | ((vlSelf->npc__DOT__idu_inst__DOT__immB 
                           << 0x1eU) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                        >> 8U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x19U] 
        = (0xc0000000U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                          >> 2U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1aU] 
        = (3U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                 << 4U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1bU] 
        = (0xe0U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                    >> 0x1cU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1cU] = 0x3400U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1dU] = 0xc0000U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1eU] 
        = (0x2c00000U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                         << 0x1cU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x1fU] 
        = (0xa0000000U | (vlSelf->npc__DOT__idu_inst__DOT__immB 
                          >> 4U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x20U] = 0U;
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x21U] 
        = (0x24U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                    << 8U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x22U] 
        = (0x800U | ((vlSelf->npc__DOT__idu_inst__DOT__immS 
                      << 0xeU) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                  >> 0x18U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x23U] 
        = (0x1c000U | ((vlSelf->npc__DOT__idu_inst__DOT__immI 
                        << 0x14U) | (vlSelf->npc__DOT__idu_inst__DOT__immS 
                                     >> 0x12U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x24U] 
        = (0x600000U | ((vlSelf->npc__DOT__idu_inst__DOT__immJ 
                         << 0x1aU) | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                                      >> 0xcU)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x25U] 
        = (0x14000000U | (vlSelf->npc__DOT__idu_inst__DOT__immJ 
                          >> 6U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x26U] 
        = (0xfffff000U & vlSelf->npc__DOT__inst);
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x27U] 
        = (4U | (0xfffc0000U & (vlSelf->npc__DOT__inst 
                                << 6U)));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x28U] 
        = (0xc0U | (vlSelf->npc__DOT__inst >> 0x1aU));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x29U] 
        = (0x2000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                      << 0x12U));
    vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut[0x2aU] 
        = (0x40000U | (vlSelf->npc__DOT__idu_inst__DOT__immI 
                       >> 0xeU));
    vlSelf->npc__DOT__cmp_type = (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu) 
                                   | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu))
                                   ? 3U : ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt)
                                            ? 2U : 0U));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_add = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_he69f398c__0) 
         & (0U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_he69f398c__0) 
         & (0x20U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h873f971e__0) 
         & (0x20U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_h873f971e__0) 
         & (0U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd3ddd1c8__0) 
         & (0U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra = 
        ((IData)(vlSelf->npc__DOT__idu_inst__DOT____VdfgTmp_hd3ddd1c8__0) 
         & (0x20U == (vlSelf->npc__DOT__inst >> 0x19U)));
    vlSelf->npc__DOT__stop_sim = (1U & ((~ ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi) 
                                            | ((0x100073U 
                                                == vlSelf->npc__DOT__inst) 
                                               | ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->npc__DOT__inst)) 
                                                  | ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->npc__DOT__inst)) 
                                                     | ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->npc__DOT__inst)) 
                                                        | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr) 
                                                           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
                                                              | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw) 
                                                                 | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_add) 
                                                                    | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                                                       | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu) 
                                                                          | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor) 
                                                                             | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_or) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_and) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh) 
                                                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu) 
                                                                                | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl) 
                                                                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli)) 
                                                                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra))))))))))))))))))))))))))))))))))) 
                                        | (0x100073U 
                                           == vlSelf->npc__DOT__inst)));
    vlSelf->npc__DOT__idu_inst__DOT__inst_name = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi)
                                                   ? 1U
                                                   : 
                                                  ((0x100073U 
                                                    == vlSelf->npc__DOT__inst)
                                                    ? 2U
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->npc__DOT__inst))
                                                     ? 3U
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->npc__DOT__inst))
                                                      ? 4U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->npc__DOT__inst))
                                                       ? 5U
                                                       : 
                                                      ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr)
                                                        ? 6U
                                                        : 
                                                       ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw)
                                                         ? 7U
                                                         : 
                                                        ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw)
                                                          ? 8U
                                                          : 
                                                         ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_add)
                                                           ? 9U
                                                           : 
                                                          ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq)
                                                            ? 0xaU
                                                            : 
                                                           ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu)
                                                             ? 0xbU
                                                             : 
                                                            ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor)
                                                              ? 0xcU
                                                              : 
                                                             ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_or)
                                                               ? 0xdU
                                                               : 
                                                              ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu)
                                                                ? 0xeU
                                                                : 
                                                               ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne)
                                                                 ? 0xfU
                                                                 : 
                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu)
                                                                  ? 0x10U
                                                                  : 
                                                                 ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb)
                                                                   ? 0x11U
                                                                   : 
                                                                  ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub)
                                                                    ? 0x12U
                                                                    : 
                                                                   ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai)
                                                                     ? 0x13U
                                                                     : 
                                                                    ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi)
                                                                      ? 0x14U
                                                                      : 
                                                                     ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll)
                                                                       ? 0x15U
                                                                       : 
                                                                      ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_and)
                                                                        ? 0x16U
                                                                        : 
                                                                       ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)
                                                                         ? 0x17U
                                                                         : 
                                                                        ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori)
                                                                          ? 0x18U
                                                                          : 
                                                                         ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge)
                                                                           ? 0x19U
                                                                           : 
                                                                          ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu)
                                                                            ? 0x1aU
                                                                            : 
                                                                           ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli)
                                                                             ? 0x1bU
                                                                             : 
                                                                            ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt)
                                                                              ? 0x1cU
                                                                              : 
                                                                             ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)
                                                                               ? 0x1dU
                                                                               : 
                                                                              ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt)
                                                                                ? 0x1eU
                                                                                : 
                                                                               ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh)
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu)
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl)
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli)
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra)
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl)
                                                                                 ? 0x24U
                                                                                 : 0U))))))))))))))))))))))))))))))))))));
    vlSelf->npc__DOT__rs1 = (((IData)(vlSelf->npc__DOT__stop_sim) 
                              | (0x37U == (0x7fU & vlSelf->npc__DOT__inst)))
                              ? 0U : (0x1fU & (vlSelf->npc__DOT__inst 
                                               >> 0xfU)));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__rdregsrc = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit)
                                   ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out)
                                   : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__ALU_op = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit)
                                 ? (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out)
                                 : 0U);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                       == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x10U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x11U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x12U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x13U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x14U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x15U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x16U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x17U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x18U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x19U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1aU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1bU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1cU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1dU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1eU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x1fU]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x20U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x21U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x22U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
                          == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
                          [0x23U]))) & vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__imm = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit)
                              ? vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out
                              : 1U);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
            == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
            [0U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [1U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [2U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [3U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [4U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [5U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [6U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [7U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [8U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [9U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xaU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xbU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xcU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xdU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xeU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0xfU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x10U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x11U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x12U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x13U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x14U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x15U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x16U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x17U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x18U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x19U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1aU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1bU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1cU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1dU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1eU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x1fU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x20U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x21U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x22U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
               [0x23U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__ALUsrc1 = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit) 
                                 & (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
            == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
            [0U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
           == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [1U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [2U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [3U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [4U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [5U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [6U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [7U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [8U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [9U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xaU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xbU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xcU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xdU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xeU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0xfU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x10U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x10U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x11U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x11U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x12U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x12U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x13U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x13U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x14U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x14U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x15U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x15U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x16U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x16U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x17U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x17U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x18U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x18U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x19U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x19U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1aU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1aU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1bU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1bU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1cU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1cU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1dU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1dU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1eU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1eU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x1fU]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x1fU]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x20U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x20U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x21U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x21U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x22U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x22U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
               == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
               [0x23U]) & vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__data_list
              [0x23U]));
    vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_name) 
              == vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__key_list
              [0x23U]));
    vlSelf->npc__DOT__ALUsrc2 = (1U & ((~ (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit)) 
                                       | (IData)(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out)));
    vlSelf->npc__DOT__rf_rdata1 = ((0U == (IData)(vlSelf->npc__DOT__rs1))
                                    ? 0U : vlSelf->npc__DOT__u_RegisterFile__DOT__rf
                                   [vlSelf->npc__DOT__rs1]);
    vlSelf->npc__DOT__ALU_B = ((IData)(vlSelf->npc__DOT__ALUsrc2)
                                ? vlSelf->npc__DOT__imm
                                : vlSelf->npc__DOT__rf_rdata2);
    vlSelf->npc__DOT__ALU_A = ((IData)(vlSelf->npc__DOT__ALUsrc1)
                                ? vlSelf->npc__DOT__pc
                                : vlSelf->npc__DOT__rf_rdata1);
    vlSelf->__VdfgTmp_h88e39ed0__0 = VL_SHIFTRS_III(32,32,5, vlSelf->npc__DOT__ALU_A, 
                                                    (0x1fU 
                                                     & vlSelf->npc__DOT__ALU_B));
    vlSelf->__VdfgTmp_h0b1806e4__0 = (vlSelf->npc__DOT__ALU_A 
                                      & vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h0a443a49__0 = (vlSelf->npc__DOT__ALU_A 
                                      | vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h09752fff__0 = (vlSelf->npc__DOT__ALU_A 
                                      ^ vlSelf->npc__DOT__ALU_B);
    vlSelf->__VdfgTmp_h88f4837e__0 = (vlSelf->npc__DOT__ALU_A 
                                      << (0x1fU & vlSelf->npc__DOT__ALU_B));
    vlSelf->__VdfgTmp_h88cffd0d__0 = (vlSelf->npc__DOT__ALU_A 
                                      >> (0x1fU & vlSelf->npc__DOT__ALU_B));
    vlSelf->npc__DOT__u_ALU__DOT__sub_result = ((IData)(1U) 
                                                + (vlSelf->npc__DOT__ALU_A 
                                                   + 
                                                   (~ vlSelf->npc__DOT__ALU_B)));
    vlSelf->npc__DOT__u_ALU__DOT__add_result = (vlSelf->npc__DOT__ALU_A 
                                                + (vlSelf->npc__DOT__ALU_B 
                                                   + (IData)(vlSelf->npc__DOT__ALU_Cin)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h88e39ed0__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h88e39ed0__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4U] 
        = (0x600000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0b1806e4__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0b1806e4__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h0a443a49__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h0a443a49__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2U] 
        = (0xa00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h09752fff__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h09752fff__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1U] 
        = (0xc00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h88f4837e__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h88f4837e__0));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelf->__VdfgTmp_h88cffd0d__0)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0U] 
        = (QData)((IData)(vlSelf->__VdfgTmp_h88cffd0d__0));
    vlSelf->npc__DOT__u_ALU__DOT__sub_overflow = (1U 
                                                  & (((vlSelf->npc__DOT__ALU_A 
                                                       >> 0x1fU) 
                                                      & ((~ 
                                                          (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                           >> 0x1fU)) 
                                                         & (~ 
                                                            (vlSelf->npc__DOT__ALU_B 
                                                             >> 0x1fU)))) 
                                                     | ((~ 
                                                         (vlSelf->npc__DOT__ALU_A 
                                                          >> 0x1fU)) 
                                                        & ((vlSelf->npc__DOT__ALU_B 
                                                            & vlSelf->npc__DOT__u_ALU__DOT__sub_result) 
                                                           >> 0x1fU))));
    vlSelf->npc__DOT__u_ALU__DOT__add_overflow = (1U 
                                                  & (((vlSelf->npc__DOT__ALU_A 
                                                       >> 0x1fU) 
                                                      & ((~ 
                                                          (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                           >> 0x1fU)) 
                                                         & (vlSelf->npc__DOT__ALU_B 
                                                            >> 0x1fU))) 
                                                     | ((~ 
                                                         (vlSelf->npc__DOT__ALU_A 
                                                          >> 0x1fU)) 
                                                        & ((~ 
                                                            (vlSelf->npc__DOT__ALU_B 
                                                             >> 0x1fU)) 
                                                           & (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                              >> 0x1fU)))));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6U] 
        = (0x200000000ULL | (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow)) 
                              << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_result))));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7U] 
        = (((QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow)) 
            << 0x20U) | (QData)((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_result)));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                               == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__ALU_op) == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [5U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [6U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
        = (vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->npc__DOT__ALU_op) 
                                  == vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
                                  [7U])))) & vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->npc__DOT__ALU_op) == 
              vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->npc__DOT__u_ALU__DOT__out = ((IData)(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit)
                                          ? vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out
                                          : 0ULL);
    if (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
         | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw) 
            | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu) 
               | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                  | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh) 
                     | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh) 
                        | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu)))))))) {
        Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_read_TOP((IData)(vlSelf->npc__DOT__u_ALU__DOT__out), vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout);
        vlSelf->npc__DOT__drdata = vlSelf->__Vfunc_npc__DOT__data_mem__DOT__pmem_read__2__Vfuncout;
        if (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
             | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)))) {
            Vnpc___024root____Vdpiimwrap_npc__DOT__inst_mem__DOT__pmem_write_TOP((IData)(vlSelf->npc__DOT__u_ALU__DOT__out), vlSelf->npc__DOT__rf_rdata2, 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw)
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)
                                                                                 ? 3U
                                                                                 : 0U))));
        }
    } else {
        vlSelf->npc__DOT__drdata = 0U;
    }
    vlSelf->npc__DOT__u_PC__DOT__dnpc = ((((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->npc__DOT__inst)) 
                                           | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr)) 
                                          | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                              | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                                 | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                                    | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                                       | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                          | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                                             & ((0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0xcU)))
                                                 ? 
                                                (vlSelf->npc__DOT__rf_rdata1 
                                                 == vlSelf->npc__DOT__rf_rdata2)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlSelf->npc__DOT__rf_rdata1 
                                                  != vlSelf->npc__DOT__rf_rdata2)
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_GTES_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                                   : 
                                                  ((7U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->npc__DOT__inst 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlSelf->npc__DOT__rf_rdata1 
                                                    >= vlSelf->npc__DOT__rf_rdata2)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->npc__DOT__inst 
                                                         >> 0xcU)))
                                                     ? 
                                                    VL_LTS_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                                     : (IData)(
                                                               ((0x6000U 
                                                                 == 
                                                                 (0x7000U 
                                                                  & vlSelf->npc__DOT__inst)) 
                                                                & (vlSelf->npc__DOT__rf_rdata1 
                                                                   < vlSelf->npc__DOT__rf_rdata2))))))))))
                                          ? ((IData)(
                                                     (vlSelf->npc__DOT__u_ALU__DOT__out 
                                                      >> 1U)) 
                                             << 1U)
                                          : ((IData)(4U) 
                                             + vlSelf->npc__DOT__pc));
}

void Vnpc___024root___eval_nba(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vnpc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vnpc___024root___eval_triggers__ico(Vnpc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__ico(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG
void Vnpc___024root___eval_triggers__act(Vnpc___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__act(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vnpc___024root___dump_triggers__nba(Vnpc___024root* vlSelf);
#endif  // VL_DEBUG

void Vnpc___024root___eval(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vnpc___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vnpc___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/crystc/ysyx-workbench/npc/vsrc/npc.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vnpc___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vnpc___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vnpc___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/crystc/ysyx-workbench/npc/vsrc/npc.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vnpc___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vnpc___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/crystc/ysyx-workbench/npc/vsrc/npc.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vnpc___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vnpc___024root___eval_debug_assertions(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
