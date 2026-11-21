/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_0020D080(s32, s32);
s32 func_002D57E0(s32, s32, s32 *, s32);
s32 func_002F96F0(s32, s32);
s32 func_002FA170(s32, s32, s32, s32, s32, s32);
extern s32 D_003EA548;
extern u8 *D_003EA54C[2];
extern char D_00929E50[];

void func_0091AF90(s32 arg0, s32 unused1, s32 arg2, s32 arg3) {
    s32 value;
    void *entry;

    entry = D_003EA54C[D_003EA548];
    value = func_0020D080(M2C_FIELD(entry, s32 *, 0x28), M2C_FIELD(entry, s32 *, 0x2C));
    func_002FA170(arg0, value, func_002F96F0(M2C_FIELD(entry, s32 *, 0), 0), arg2, arg3, 1);
    func_002D57E0(arg0, M2C_FIELD(D_003EA54C[D_003EA548], s32 *, 0x14), ((void *)D_00929E50), 8);
}
