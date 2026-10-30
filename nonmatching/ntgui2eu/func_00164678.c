/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00164300(void *, void *, void *, void *, void *, void *, s32, s32, s32);
void func_00164678(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, void *arg5) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;

    sp38 = arg4;
    func_00164300(&sp10, &sp14, &sp18, &sp1C, arg2, arg2 + 4, arg3, 0, arg0);
    func_00164300(&sp20, &sp24, &sp28, &sp2C, arg2 + 8, arg2 + 0xC, arg3, 0, arg0);
    sp30 = (((((((sp30 & ~0xFF) | (((sp10 <= -1) ? 0 : sp10) & 0xFF)) & 0xFFFF00FF) | ((((sp14 <= -1) ? 0 : sp14) & 0xFF) << 8)) & 0xFF00FFFF) | ((((sp18 <= -1) ? 0 : sp18) & 0xFF) << 0x10)) & 0xFFFFFF) | (((sp1C <= -1) ? 0 : sp1C) << 0x18);
    sp34 = (((((((sp34 & ~0xFF) | (((sp20 <= -1) ? 0 : sp20) & 0xFF)) & 0xFFFF00FF) | ((((sp24 <= -1) ? 0 : sp24) & 0xFF) << 8)) & 0xFF00FFFF) | ((((sp28 <= -1) ? 0 : sp28) & 0xFF) << 0x10)) & 0xFFFFFF) | (((sp2C <= -1) ? 0 : sp2C) << 0x18);
    func_00164300(&sp10, &sp14, &sp18, &sp1C, &sp30, &sp34, sp38, 0, arg1);
    M2C_FIELD(arg5, u8 *, 0) = (u8) sp10;
    M2C_FIELD(arg5, u8 *, 3) = (u8) sp1C;
    M2C_FIELD(arg5, u8 *, 1) = (u8) sp14;
    M2C_FIELD(arg5, u8 *, 2) = (u8) sp18;
}
