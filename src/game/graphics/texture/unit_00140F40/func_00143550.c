/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 D_004FDF08[];

void *func_00143550(void *arg0) {
    *(u64 *)arg0 = 0x10000002;
    *(u32 *)((int)arg0 + 8) = 0x11000000;
    *(u32 *)((int)arg0 + 0xc) = 0x50000002;
    *(u64 *)((int)arg0 + 0x10) = 0x1000000000008001;
    *(u64 *)((int)arg0 + 0x18) = 0xe;
    *(u64 *)((int)arg0 + 0x28) = 0x3d;
    *(u64 *)((int)arg0 + 0x20) = (u64)D_004FDF08[0];
    return (void *)((int)arg0 + 0x30);
}
