#ifndef MEMORY_H
#define MEMORY_H
#include <common.h>

#define MSIZE 0x10000000 // 256MB
#define RESET_VECTOR 0x80000000
#define MBASE 0x80000000

long load_img();
uint8_t pmem_read(uint32_t addr);
uint32_t paddr_read(uint32_t addr, int len);
uint32_t vaddr_read(uint32_t addr, int len);
uint8_t* guest_to_host(uint32_t addr);



#endif