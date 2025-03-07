// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpc__Syms.h"


void Vnpc___024root__trace_chg_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vnpc___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_chg_top_0\n"); );
    // Init
    Vnpc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vnpc___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vnpc___024root__trace_chg_sub_0(Vnpc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<9>/*287:0*/ __Vtemp_h8e568a81__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+1,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+2,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+3,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+4,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[4]),3);
        bufp->chgCData(oldp+5,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[5]),3);
        bufp->chgCData(oldp+6,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[6]),3);
        bufp->chgCData(oldp+7,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__key_list[7]),3);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+8,(vlSelf->npc__DOT__rs1),5);
        bufp->chgCData(oldp+9,((0x1fU & (vlSelf->npc__DOT__inst 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+10,(((IData)(vlSelf->npc__DOT__stop_sim)
                                  ? 0xaU : (0x1fU & 
                                            (vlSelf->npc__DOT__inst 
                                             >> 7U)))),5);
        bufp->chgIData(oldp+11,(vlSelf->npc__DOT__imm),32);
        bufp->chgCData(oldp+12,((7U & (vlSelf->npc__DOT__inst 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+13,((vlSelf->npc__DOT__inst 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+14,((0x7fU & vlSelf->npc__DOT__inst)),7);
        bufp->chgCData(oldp+15,(vlSelf->npc__DOT__ALU_op),3);
        bufp->chgCData(oldp+16,(vlSelf->npc__DOT__rdregsrc),3);
        bufp->chgCData(oldp+17,(vlSelf->npc__DOT__cmp_type),2);
        bufp->chgBit(oldp+18,(vlSelf->npc__DOT__ALUsrc1));
        bufp->chgBit(oldp+19,(vlSelf->npc__DOT__ALUsrc2));
        bufp->chgBit(oldp+20,(((0x6fU == (0x7fU & vlSelf->npc__DOT__inst)) 
                               | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr))));
        bufp->chgBit(oldp+21,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                               | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                  | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                     | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                        | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                           | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu))))))));
        bufp->chgBit(oldp+22,((4U != (IData)(vlSelf->npc__DOT__rdregsrc))));
        bufp->chgIData(oldp+23,(((0U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                  ? (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)
                                  : ((1U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                      ? ((0U == (7U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0xcU)))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->npc__DOT__drdata 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->npc__DOT__drdata))
                                          : ((4U == 
                                              (7U & 
                                               (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                              ? (0xffU 
                                                 & vlSelf->npc__DOT__drdata)
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->npc__DOT__inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->npc__DOT__drdata 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->npc__DOT__drdata))
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->npc__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->npc__DOT__drdata)
                                                   : vlSelf->npc__DOT__drdata))))
                                      : ((2U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                          ? ((IData)(4U) 
                                             + vlSelf->npc__DOT__pc)
                                          : ((3U == (IData)(vlSelf->npc__DOT__rdregsrc))
                                              ? ((0U 
                                                  == (IData)(vlSelf->npc__DOT__cmp_type))
                                                  ? 
                                                 (1U 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->npc__DOT__cmp_type))
                                                   ? 
                                                  (0U 
                                                   != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->npc__DOT__cmp_type))
                                                    ? 
                                                   (1U 
                                                    & ((IData)(
                                                               (0x80000000ULL 
                                                                == 
                                                                (0x180000000ULL 
                                                                 & vlSelf->npc__DOT__u_ALU__DOT__out))) 
                                                       | (IData)(
                                                                 (0x100000000ULL 
                                                                  == 
                                                                  (0x180000000ULL 
                                                                   & vlSelf->npc__DOT__u_ALU__DOT__out)))))
                                                    : 
                                                   (1U 
                                                    & (~ 
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
                                              : 0U))))),32);
        bufp->chgIData(oldp+24,(vlSelf->npc__DOT__rf_rdata1),32);
        bufp->chgIData(oldp+25,(vlSelf->npc__DOT__rf_rdata2),32);
        bufp->chgIData(oldp+26,((IData)(vlSelf->npc__DOT__u_ALU__DOT__out)),32);
        bufp->chgIData(oldp+27,(vlSelf->npc__DOT__ALU_A),32);
        bufp->chgIData(oldp+28,(vlSelf->npc__DOT__ALU_B),32);
        bufp->chgBit(oldp+29,((1U & (~ (IData)((0U 
                                                != (IData)(vlSelf->npc__DOT__u_ALU__DOT__out)))))));
        bufp->chgBit(oldp+30,((1U & (IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+31,((1U & ((0U == (IData)(vlSelf->npc__DOT__ALU_op))
                                      ? (IData)((1ULL 
                                                 & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                     + 
                                                     ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                      + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                    >> 0x20U)))
                                      : ((1U == (IData)(vlSelf->npc__DOT__ALU_op)) 
                                         & (IData)(
                                                   (1ULL 
                                                    & ((1ULL 
                                                        + 
                                                        ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                         + (QData)((IData)(
                                                                           (~ vlSelf->npc__DOT__ALU_B))))) 
                                                       >> 0x20U))))))));
        bufp->chgBit(oldp+32,((1U & ((IData)((0x80000000ULL 
                                              == (0x180000000ULL 
                                                  & vlSelf->npc__DOT__u_ALU__DOT__out))) 
                                     | (IData)((0x100000000ULL 
                                                == 
                                                (0x180000000ULL 
                                                 & vlSelf->npc__DOT__u_ALU__DOT__out)))))));
        bufp->chgBit(oldp+33,((1U & (~ ((0U == (IData)(vlSelf->npc__DOT__ALU_op))
                                         ? (IData)(
                                                   (1ULL 
                                                    & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                        + 
                                                        ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                         + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                       >> 0x20U)))
                                         : ((1U == (IData)(vlSelf->npc__DOT__ALU_op)) 
                                            & (IData)(
                                                      (1ULL 
                                                       & ((1ULL 
                                                           + 
                                                           ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                            + (QData)((IData)(
                                                                              (~ vlSelf->npc__DOT__ALU_B))))) 
                                                          >> 0x20U)))))))));
        bufp->chgBit(oldp+34,(vlSelf->npc__DOT__stop_sim));
        bufp->chgBit(oldp+35,((((0x6fU == (0x7fU & vlSelf->npc__DOT__inst)) 
                                | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr)) 
                               | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                   | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                      | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                         | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                            | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                               | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                                  & ((0U == (7U & (vlSelf->npc__DOT__inst 
                                                   >> 0xcU)))
                                      ? (vlSelf->npc__DOT__rf_rdata1 
                                         == vlSelf->npc__DOT__rf_rdata2)
                                      : ((1U == (7U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0xcU)))
                                          ? (vlSelf->npc__DOT__rf_rdata1 
                                             != vlSelf->npc__DOT__rf_rdata2)
                                          : ((5U == 
                                              (7U & 
                                               (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                              ? VL_GTES_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                              : ((7U 
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
                                                                 < vlSelf->npc__DOT__rf_rdata2))))))))))));
        bufp->chgBit(oldp+36,((((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                   | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                      | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                         | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                            | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                               & ((0U == (7U & (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                   ? (vlSelf->npc__DOT__rf_rdata1 
                                      == vlSelf->npc__DOT__rf_rdata2)
                                   : ((1U == (7U & 
                                              (vlSelf->npc__DOT__inst 
                                               >> 0xcU)))
                                       ? (vlSelf->npc__DOT__rf_rdata1 
                                          != vlSelf->npc__DOT__rf_rdata2)
                                       : ((5U == (7U 
                                                  & (vlSelf->npc__DOT__inst 
                                                     >> 0xcU)))
                                           ? VL_GTES_III(32, vlSelf->npc__DOT__rf_rdata1, vlSelf->npc__DOT__rf_rdata2)
                                           : ((7U == 
                                               (7U 
                                                & (vlSelf->npc__DOT__inst 
                                                   >> 0xcU)))
                                               ? (vlSelf->npc__DOT__rf_rdata1 
                                                  >= vlSelf->npc__DOT__rf_rdata2)
                                               : ((4U 
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
                                                                 < vlSelf->npc__DOT__rf_rdata2)))))))))));
        bufp->chgIData(oldp+37,(vlSelf->npc__DOT__inst),32);
        bufp->chgCData(oldp+38,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw)
                                  ? 0xfU : ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb)
                                             ? 1U : 
                                            ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)
                                              ? 3U : 0U)))),8);
        bufp->chgIData(oldp+39,(vlSelf->npc__DOT__drdata),32);
        bufp->chgBit(oldp+40,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
                               | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw) 
                                  | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu) 
                                     | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                                        | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh) 
                                           | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh) 
                                              | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu)))))))));
        bufp->chgBit(oldp+41,(((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw) 
                               | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb) 
                                  | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh)))));
        bufp->chgIData(oldp+42,(((0U == (7U & (vlSelf->npc__DOT__inst 
                                               >> 0xcU)))
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->npc__DOT__drdata 
                                                     >> 7U)))) 
                                      << 8U) | (0xffU 
                                                & vlSelf->npc__DOT__drdata))
                                  : ((4U == (7U & (vlSelf->npc__DOT__inst 
                                                   >> 0xcU)))
                                      ? (0xffU & vlSelf->npc__DOT__drdata)
                                      : ((1U == (7U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0xcU)))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->npc__DOT__drdata 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->npc__DOT__drdata))
                                          : ((5U == 
                                              (7U & 
                                               (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                              ? (0xffffU 
                                                 & vlSelf->npc__DOT__drdata)
                                              : vlSelf->npc__DOT__drdata))))),32);
        bufp->chgIData(oldp+43,(((0U == (IData)(vlSelf->npc__DOT__cmp_type))
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
                                                                   >> 0x20U))))))))))),32);
        bufp->chgCData(oldp+44,(vlSelf->npc__DOT__idu_inst__DOT__inst_name),6);
        bufp->chgBit(oldp+45,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_addi));
        bufp->chgBit(oldp+46,((0x100073U == vlSelf->npc__DOT__inst)));
        bufp->chgBit(oldp+47,((0x17U == (0x7fU & vlSelf->npc__DOT__inst))));
        bufp->chgBit(oldp+48,((0x37U == (0x7fU & vlSelf->npc__DOT__inst))));
        bufp->chgBit(oldp+49,((0x6fU == (0x7fU & vlSelf->npc__DOT__inst))));
        bufp->chgBit(oldp+50,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr));
        bufp->chgBit(oldp+51,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sw));
        bufp->chgBit(oldp+52,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lw));
        bufp->chgBit(oldp+53,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_add));
        bufp->chgBit(oldp+54,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq));
        bufp->chgBit(oldp+55,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltu));
        bufp->chgBit(oldp+56,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xor));
        bufp->chgBit(oldp+57,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_or));
        bufp->chgBit(oldp+58,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sltiu));
        bufp->chgBit(oldp+59,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne));
        bufp->chgBit(oldp+60,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lbu));
        bufp->chgBit(oldp+61,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sb));
        bufp->chgBit(oldp+62,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sub));
        bufp->chgBit(oldp+63,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srai));
        bufp->chgBit(oldp+64,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_andi));
        bufp->chgBit(oldp+65,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sll));
        bufp->chgBit(oldp+66,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_and));
        bufp->chgBit(oldp+67,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sh));
        bufp->chgBit(oldp+68,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_xori));
        bufp->chgBit(oldp+69,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge));
        bufp->chgBit(oldp+70,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu));
        bufp->chgBit(oldp+71,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slli));
        bufp->chgBit(oldp+72,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt));
        bufp->chgBit(oldp+73,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu));
        bufp->chgBit(oldp+74,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_slt));
        bufp->chgBit(oldp+75,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lh));
        bufp->chgBit(oldp+76,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_lhu));
        bufp->chgBit(oldp+77,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srl));
        bufp->chgBit(oldp+78,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_srli));
        bufp->chgBit(oldp+79,(vlSelf->npc__DOT__idu_inst__DOT__inst_is_sra));
        bufp->chgIData(oldp+80,(vlSelf->npc__DOT__idu_inst__DOT__immI),32);
        bufp->chgIData(oldp+81,((0xfffff000U & vlSelf->npc__DOT__inst)),32);
        bufp->chgIData(oldp+82,(vlSelf->npc__DOT__idu_inst__DOT__immS),32);
        bufp->chgIData(oldp+83,(vlSelf->npc__DOT__idu_inst__DOT__immB),32);
        bufp->chgIData(oldp+84,(vlSelf->npc__DOT__idu_inst__DOT__immJ),32);
        bufp->chgCData(oldp+85,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+86,(vlSelf->npc__DOT__idu_inst__DOT__getALU_mode__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+87,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+88,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc1__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+89,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+90,(vlSelf->npc__DOT__idu_inst__DOT__getALUsrc2__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+91,(vlSelf->npc__DOT__idu_inst__DOT____Vcellinp__getimm__lut),1368);
        bufp->chgIData(oldp+134,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+135,(vlSelf->npc__DOT__idu_inst__DOT__getimm__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+136,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__lut_out),3);
        bufp->chgBit(oldp+137,(vlSelf->npc__DOT__idu_inst__DOT__getrdregsrc__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+138,(vlSelf->npc__DOT__u_ALU__DOT__add_overflow));
        bufp->chgBit(oldp+139,(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow));
        bufp->chgBit(oldp+140,((1U & (IData)((1ULL 
                                              & (((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                  + 
                                                  ((QData)((IData)(vlSelf->npc__DOT__ALU_B)) 
                                                   + (QData)((IData)(vlSelf->npc__DOT__ALU_Cin)))) 
                                                 >> 0x20U))))));
        bufp->chgBit(oldp+141,((1U & (IData)((1ULL 
                                              & ((1ULL 
                                                  + 
                                                  ((QData)((IData)(vlSelf->npc__DOT__ALU_A)) 
                                                   + (QData)((IData)(
                                                                     (~ vlSelf->npc__DOT__ALU_B))))) 
                                                 >> 0x20U))))));
        bufp->chgIData(oldp+142,(vlSelf->npc__DOT__u_ALU__DOT__add_result),32);
        bufp->chgIData(oldp+143,(vlSelf->npc__DOT__u_ALU__DOT__sub_result),32);
        bufp->chgQData(oldp+144,(vlSelf->npc__DOT__u_ALU__DOT__out),33);
        bufp->chgIData(oldp+146,((~ vlSelf->npc__DOT__ALU_B)),32);
        __Vtemp_h8e568a81__0[0U] = (IData)((0xe00000000ULL 
                                            | (QData)((IData)(vlSelf->__VdfgTmp_h88cffd0d__0))));
        __Vtemp_h8e568a81__0[1U] = ((vlSelf->__VdfgTmp_h88f4837e__0 
                                     << 4U) | (IData)(
                                                      ((0xe00000000ULL 
                                                        | (QData)((IData)(vlSelf->__VdfgTmp_h88cffd0d__0))) 
                                                       >> 0x20U)));
        __Vtemp_h8e568a81__0[2U] = (0xc0U | ((vlSelf->__VdfgTmp_h09752fff__0 
                                              << 8U) 
                                             | (vlSelf->__VdfgTmp_h88f4837e__0 
                                                >> 0x1cU)));
        __Vtemp_h8e568a81__0[3U] = (0xa00U | ((vlSelf->__VdfgTmp_h0a443a49__0 
                                               << 0xcU) 
                                              | (vlSelf->__VdfgTmp_h09752fff__0 
                                                 >> 0x18U)));
        __Vtemp_h8e568a81__0[4U] = (0x8000U | ((vlSelf->__VdfgTmp_h0b1806e4__0 
                                                << 0x10U) 
                                               | (vlSelf->__VdfgTmp_h0a443a49__0 
                                                  >> 0x14U)));
        __Vtemp_h8e568a81__0[5U] = (0x60000U | ((vlSelf->__VdfgTmp_h88e39ed0__0 
                                                 << 0x14U) 
                                                | (vlSelf->__VdfgTmp_h0b1806e4__0 
                                                   >> 0x10U)));
        __Vtemp_h8e568a81__0[6U] = (0x400000U | ((vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                  << 0x18U) 
                                                 | (vlSelf->__VdfgTmp_h88e39ed0__0 
                                                    >> 0xcU)));
        __Vtemp_h8e568a81__0[7U] = (0x2000000U | ((vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->npc__DOT__u_ALU__DOT__sub_overflow) 
                                                      << 0x18U) 
                                                     | (vlSelf->npc__DOT__u_ALU__DOT__sub_result 
                                                        >> 8U))));
        __Vtemp_h8e568a81__0[8U] = (((IData)(vlSelf->npc__DOT__u_ALU__DOT__add_overflow) 
                                     << 0x1cU) | (vlSelf->npc__DOT__u_ALU__DOT__add_result 
                                                  >> 4U));
        bufp->chgWData(oldp+147,(__Vtemp_h8e568a81__0),288);
        bufp->chgQData(oldp+156,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+158,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+160,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+162,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+164,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+166,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+168,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+170,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+172,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[0]),33);
        bufp->chgQData(oldp+174,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[1]),33);
        bufp->chgQData(oldp+176,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[2]),33);
        bufp->chgQData(oldp+178,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[3]),33);
        bufp->chgQData(oldp+180,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[4]),33);
        bufp->chgQData(oldp+182,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[5]),33);
        bufp->chgQData(oldp+184,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[6]),33);
        bufp->chgQData(oldp+186,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__data_list[7]),33);
        bufp->chgQData(oldp+188,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__lut_out),33);
        bufp->chgBit(oldp+190,(vlSelf->npc__DOT__u_ALU__DOT__u_MuxKeyWithDefault__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+191,(((((0x6fU == (0x7fU 
                                               & vlSelf->npc__DOT__inst)) 
                                    | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_jalr)) 
                                   | (((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_beq) 
                                       | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bne) 
                                          | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bge) 
                                             | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bgeu) 
                                                | ((IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_blt) 
                                                   | (IData)(vlSelf->npc__DOT__idu_inst__DOT__inst_is_bltu)))))) 
                                      & ((0U == (7U 
                                                 & (vlSelf->npc__DOT__inst 
                                                    >> 0xcU)))
                                          ? (vlSelf->npc__DOT__rf_rdata1 
                                             == vlSelf->npc__DOT__rf_rdata2)
                                          : ((1U == 
                                              (7U & 
                                               (vlSelf->npc__DOT__inst 
                                                >> 0xcU)))
                                              ? (vlSelf->npc__DOT__rf_rdata1 
                                                 != vlSelf->npc__DOT__rf_rdata2)
                                              : ((5U 
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
                                   ? ((IData)((vlSelf->npc__DOT__u_ALU__DOT__out 
                                               >> 1U)) 
                                      << 1U) : ((IData)(4U) 
                                                + vlSelf->npc__DOT__pc))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+192,(vlSelf->npc__DOT__pc),32);
        bufp->chgIData(oldp+193,(((IData)(4U) + vlSelf->npc__DOT__pc)),32);
        bufp->chgIData(oldp+194,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[0]),32);
        bufp->chgIData(oldp+195,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[1]),32);
        bufp->chgIData(oldp+196,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[2]),32);
        bufp->chgIData(oldp+197,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[3]),32);
        bufp->chgIData(oldp+198,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[4]),32);
        bufp->chgIData(oldp+199,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[5]),32);
        bufp->chgIData(oldp+200,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[6]),32);
        bufp->chgIData(oldp+201,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[7]),32);
        bufp->chgIData(oldp+202,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[8]),32);
        bufp->chgIData(oldp+203,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[9]),32);
        bufp->chgIData(oldp+204,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[10]),32);
        bufp->chgIData(oldp+205,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[11]),32);
        bufp->chgIData(oldp+206,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[12]),32);
        bufp->chgIData(oldp+207,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[13]),32);
        bufp->chgIData(oldp+208,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[14]),32);
        bufp->chgIData(oldp+209,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[15]),32);
        bufp->chgIData(oldp+210,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[16]),32);
        bufp->chgIData(oldp+211,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[17]),32);
        bufp->chgIData(oldp+212,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[18]),32);
        bufp->chgIData(oldp+213,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[19]),32);
        bufp->chgIData(oldp+214,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[20]),32);
        bufp->chgIData(oldp+215,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[21]),32);
        bufp->chgIData(oldp+216,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[22]),32);
        bufp->chgIData(oldp+217,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[23]),32);
        bufp->chgIData(oldp+218,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[24]),32);
        bufp->chgIData(oldp+219,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[25]),32);
        bufp->chgIData(oldp+220,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[26]),32);
        bufp->chgIData(oldp+221,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[27]),32);
        bufp->chgIData(oldp+222,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[28]),32);
        bufp->chgIData(oldp+223,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[29]),32);
        bufp->chgIData(oldp+224,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[30]),32);
        bufp->chgIData(oldp+225,(vlSelf->npc__DOT__u_RegisterFile__DOT__rf[31]),32);
        bufp->chgIData(oldp+226,(vlSelf->npc__DOT__u_RegisterFile__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+227,(vlSelf->clk));
    bufp->chgBit(oldp+228,(vlSelf->rst));
    bufp->chgBit(oldp+229,((1U & (~ (IData)(vlSelf->rst)))));
}

void Vnpc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root__trace_cleanup\n"); );
    // Init
    Vnpc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
