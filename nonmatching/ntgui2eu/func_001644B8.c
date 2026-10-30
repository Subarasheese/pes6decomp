/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00164300(u8 *, u8 *, u8 *, u8 *, s32 *, s32 *, s32, M2C_UNK, s32); /* extern */

void func_001644B8(s32 arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4, void *arg5) {
    u8 sp10;
    u8 sp14;
    u8 sp18;
    u8 sp1C;
    u8 sp20;
    u8 sp24;
    u8 sp28;
    u8 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;

    sp38 = arg4;
    func_00164300(&sp10, &sp14, &sp18, &sp1C, arg2, arg2 + 4, arg3, 0, arg0);
    func_00164300(&sp20, &sp24, &sp28, &sp2C, arg2 + 8, arg2 + 0xC, arg3, 0, arg0);
    sp30 = (((((((sp30 & ~0xFF) | sp10) & 0xFFFF00FF) | (sp14 << 8)) & 0xFF00FFFF) | (sp18 << 0x10)) & 0xFFFFFF) | (sp1C << 0x18);
    sp34 = (((((((sp34 & ~0xFF) | sp20) & 0xFFFF00FF) | (sp24 << 8)) & 0xFF00FFFF) | (sp28 << 0x10)) & 0xFFFFFF) | (sp2C << 0x18);
    func_00164300(&sp10, &sp14, &sp18, &sp1C, &sp30, &sp34, sp38, 0, arg1);
    M2C_FIELD(arg5, u8 *, 0) = sp10;
    M2C_FIELD(arg5, u8 *, 3) = sp1C;
    M2C_FIELD(arg5, u8 *, 1) = sp14;
    M2C_FIELD(arg5, u8 *, 2) = sp18;
}
