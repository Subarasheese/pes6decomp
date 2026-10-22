#include "pes6/m2c.h"

extern u8 D_0050D780[];
extern u8 D_0050D7C0[];
extern u8 D_003C7308[];
s32 sceSifCallRpc(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8);
void func_00154C30(u8 *msg);

s32 func_00154E48(s32 arg0) {
    s32 *p;

    p = (s32 *)D_0050D7C0;
    *p = arg0;
    if (sceSifCallRpc((s32)D_0050D780, 2, 0, (s32)p, 0x80, (s32)p, 0x80, 0, 0) < 0) {
        func_00154C30(D_003C7308);
        return 0;
    }
    return p[1];
}
