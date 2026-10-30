/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
extern char D_004FDC78[];

void func_00140A10(void *arg0, s64 arg1, s64 arg2, s64 arg3, s64 arg4, s64 arg5, s8 arg6, s8 arg7, u8 arg_sp0, u8 arg_sp8, u32 arg_sp10) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a3;
    s32 var_a2;
    s32 var_s0;
    s32 var_v1;
    s64 temp_a4;
    s64 temp_a7;
    s64 temp_v1;
    s64 var_a1;
    void *var_a0;

    var_s0 = 0;
    func_001C48E8(0, 0x350);
    temp_v1 = (s64) (arg4 << 0x30) >> 0x30;
    var_a2 = 0;
    M2C_FIELD(arg0, u8 *, 0x12) = (u8) ((M2C_FIELD(arg0, u8 *, 0x12) & ~1) | 1);
    M2C_FIELD(arg0, u8 *, 0x12) = (u8) ((M2C_FIELD(arg0, u8 *, 0x12) & ~6) | 2);
    M2C_FIELD(arg0, s64 *, 0x18) = 0x47;
    M2C_FIELD(arg0, u8 *, 0x20) = (u8) ((M2C_FIELD(arg0, u8 *, 0x20) & ~7) | 6);
    M2C_FIELD(arg0, s64 *, 0x28) = 0;
    M2C_FIELD(arg0, s8 *, 0x30) = arg6;
    M2C_FIELD(arg0, s8 *, 0x31) = arg7;
    M2C_FIELD(arg0, u8 *, 0x32) = arg_sp0;
    M2C_FIELD(arg0, u8 *, 0x33) = arg_sp8;
    M2C_FIELD(arg0, s32 *, 0x34) = 0x3F800000;
    M2C_FIELD(arg0, s64 *, 0x38) = 1;
    if (temp_v1 > 0) {
        temp_a4 = (s64) (arg3 << 0x30) >> 0x30;
        var_a1 = (s64) (arg2 << 0x30) >> 0x30;
        var_a0 = arg0;
        temp_a7 = (s64) arg_sp10 << 0x20;
        do {
            var_a2 += 0x20;
            temp_a3 = ((temp_a4 * 0x10) << 0x10) | (var_a1 * 0x10);
            var_a1 += 0x20;
            var_s0 += 4;
            M2C_FIELD(var_a0, s64 *, 0x40) = (s64) (temp_a7 | temp_a3);
            M2C_FIELD(var_a0, s64 *, 0x48) = 5;
            M2C_FIELD(var_a0, s64 *, 0x50) = (s64) (temp_a7 | ((var_a1 * 0x10) | (((temp_a4 + ((s64) (arg5 << 0x30) >> 0x30)) * 0x10) << 0x10)));
            M2C_FIELD(var_a0, s64 *, 0x58) = 5;
            var_a0 += 0x20;
        } while (var_a2 < temp_v1);
    }
    M2C_FIELD(((var_s0 * 8) + arg0), s64 *, 0x40) = (s64) ((((s64) ((((s64) (arg1 << 0x30) >> 0x30) & 3) << 0x20) >> 0x20) << 0x11) | 0x10000);
    temp_a0 = var_s0 + 2;
    var_v1 = temp_a0 >> 1;
    M2C_FIELD((((var_s0 + 1) * 8) + arg0), s64 *, 0x40) = 0x47;
    if (temp_a0 < 0) {
        var_v1 = (s32) (temp_a0 + 1) >> 1;
    }
    temp_a0_2 = var_v1 + 4;
    (*(s32 *)D_004FDC78) = temp_a0_2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) ((M2C_FIELD(arg0, u16 *, 0) & ~0x7FFF) | ((temp_a0_2 - 1) & 0x7FFF));
    M2C_FIELD(arg0, u8 *, 1) = (u8) ((M2C_FIELD(arg0, u8 *, 1) & ~0x80) | 0x80);
    M2C_FIELD(arg0, u8 *, 7) = (u8) ((M2C_FIELD(arg0, u8 *, 7) & ~0xC) | ((0 & 3) * 4));
    M2C_FIELD(arg0, u8 *, 7) = (u8) ((M2C_FIELD(arg0, u8 *, 7) & ~0xF0) | 0x10);
    M2C_FIELD(arg0, u8 *, 8) = (u8) ((M2C_FIELD(arg0, u8 *, 8) & ~0xF) | 0xE);
}
