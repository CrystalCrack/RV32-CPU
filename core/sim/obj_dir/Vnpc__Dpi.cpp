// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vnpc::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vnpc__Dpi.h"
#include "Vnpc.h"

#ifndef VL_DPIDECL_get_pc_inst_
#define VL_DPIDECL_get_pc_inst_
void get_pc_inst(int* cpu_pc, int* cpu_inst) {
    // DPI export at /home/azureuser/RV32-CPU/core/vsrc/npc.sv:180:19
    return Vnpc::get_pc_inst(cpu_pc, cpu_inst);
}
#endif

#ifndef VL_DPIDECL_get_reg_
#define VL_DPIDECL_get_reg_
void get_reg(int addr, int* reg_data) {
    // DPI export at /home/azureuser/RV32-CPU/core/vsrc/RegisterFile.v:29:19
    return Vnpc::get_reg(addr, reg_data);
}
#endif

