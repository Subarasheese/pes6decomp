/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_009EF3F0(void *, s32);                 /* extern */
M2C_UNK func_009EF600(void *);                      /* extern */

void func_009EF160(void *arg0, void *arg1, s32 arg2, void *arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_a7;
    s32 temp_s0;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;
    s32 var_a3;
    s32 var_v0;
    void *var_a2;
    void *var_a2_2;

    temp_s0 = M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(arg0, void **, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = temp_s0;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, void **, 0x10) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC) = arg4;
    func_001C4730(arg0 + 0x18, arg5, 0x18);
    var_a3 = 0;
    if (temp_s0 > 0) {
        if (temp_s0 >= 9) {
            var_v0 = 0;
            if ((temp_s0 >= 0) && (temp_s0 < 0x7FFFFFFF)) {
                var_v0 = 1;
            }
            if (var_v0 != 0) {
                var_a2 = arg1;
                do {
                    M2C_FIELD(var_a2, s32 *, 4) = -1;
                    temp_t3 = var_a3 + 1;
                    temp_t2 = var_a3 + 2;
                    temp_t1 = var_a3 + 3;
                    temp_t0 = var_a3 + 4;
                    temp_a7 = var_a3 + 5;
                    temp_a6 = var_a3 + 6;
                    temp_a5 = var_a3 + 7;
                    M2C_FIELD(var_a2, u8 *, 0) = (u8) ((M2C_FIELD(var_a2, u8 *, 0) & ~1) | 1);
                    M2C_FIELD(var_a2, s32 *, 8) = var_a3;
                    M2C_FIELD(var_a2, s32 *, 0x10) = -1;
                    var_a3 += 8;
                    M2C_FIELD(var_a2, u8 *, 0xC) = (u8) ((M2C_FIELD(var_a2, u8 *, 0xC) & ~1) | 1);
                    M2C_FIELD(var_a2, s32 *, 0x14) = temp_t3;
                    M2C_FIELD(var_a2, s32 *, 0x1C) = -1;
                    M2C_FIELD(var_a2, u8 *, 0x18) = (u8) ((M2C_FIELD(var_a2, u8 *, 0x18) & ~1) | 1);
                    M2C_FIELD(var_a2, s32 *, 0x20) = temp_t2;
                    M2C_FIELD(var_a2, s32 *, 0x28) = -1;
                    M2C_FIELD(var_a2, u8 *, 0x24) = (u8) ((M2C_FIELD(var_a2, u8 *, 0x24) & ~1) | 1);
                    M2C_FIELD(var_a2, s32 *, 0x2C) = temp_t1;
                    M2C_FIELD(var_a2, s32 *, 0x34) = -1;
                    M2C_FIELD(var_a2, u8 *, 0x30) = (u8) ((M2C_FIELD(var_a2, u8 *, 0x30) & ~1) | 1);
                    M2C_FIELD(var_a2, s32 *, 0x38) = temp_t0;
                    M2C_FIELD(var_a2, s32 *, 0x40) = -1;
                    M2C_FIELD(var_a2, u8 *, 0x3C) = (u8) ((M2C_FIELD(var_a2, u8 *, 0x3C) & ~1) | 1);
                    M2C_FIELD(var_a2, s32 *, 0x44) = temp_a7;
                    M2C_FIELD(var_a2, s32 *, 0x4C) = -1;
                    M2C_FIELD(var_a2, u8 *, 0x48) = (u8) ((M2C_FIELD(var_a2, u8 *, 0x48) & ~1) | 1);
                    M2C_FIELD(var_a2, s32 *, 0x50) = temp_a6;
                    M2C_FIELD(var_a2, s32 *, 0x58) = -1;
                    M2C_FIELD(var_a2, u8 *, 0x54) = (u8) ((M2C_FIELD(var_a2, u8 *, 0x54) & ~1) | 1);
                    M2C_FIELD(var_a2, s32 *, 0x5C) = temp_a5;
                    var_a2 += 0x60;
                } while (var_a3 < (temp_s0 - 8));
            }
        }
        if (var_a3 < temp_s0) {
            var_a2_2 = arg1 + (var_a3 * 0xC);
            do {
                M2C_FIELD(var_a2_2, s32 *, 4) = -1;
                M2C_FIELD(var_a2_2, u8 *, 0) = (u8) ((M2C_FIELD(var_a2_2, u8 *, 0) & ~1) | 1);
                M2C_FIELD(var_a2_2, s32 *, 8) = var_a3;
                var_a3 += 1;
                var_a2_2 += 0xC;
            } while (var_a3 < temp_s0);
        }
    }
    func_009EF600(arg0);
    func_009EF3F0(arg0, arg6);
}
