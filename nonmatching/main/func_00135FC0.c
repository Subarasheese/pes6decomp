/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00135340(void);
extern void func_00138650(void);
extern void func_00138640(void);
s32 func_001344D0(s32, s32, s32, s32, s32, u32, void *, s32); /* extern */
s32 func_001385A0(s32, s64, s64, s32, s32);         /* extern */
extern s32 D_003E97A0;

s32 func_00135FC0(M2C_UNK arg0, void *arg1, void *arg2) {
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 temp_s2;
    s32 temp_v0;
    u32 temp_s0;
    u32 var_s1;

    temp_s2 = M2C_FIELD(arg1, s32 *, 8);
    temp_s0 = M2C_FIELD(arg1, u32 *, 0xC);
    var_s1 = (arg2 + M2C_FIELD(arg2, s32 *, 0x50008)) - temp_s2;
    if (temp_s0 < var_s1) {
        var_s1 = temp_s0;
    }
    func_00138650();
    temp_v0 = func_001344D0(((u64) ((s64) sp6C << 0x24) >> 0x24) | 0x20000000, sp64, ((u64) ((s64) sp68 << 0x24) >> 0x24) | 0x20000000, sp60, temp_s2, var_s1, arg2, temp_s0 - var_s1);
    if ((temp_v0 > 0) && (func_001385A0(D_003E97A0 + 0x53CDC0, M2C_FIELD(arg1, s64 *, 0x10), M2C_FIELD(arg1, s64 *, 0x18), sp6C, temp_v0) == 0)) {
        func_00135340();
    }
    func_00138640();
    return temp_v0 > 0;
}
