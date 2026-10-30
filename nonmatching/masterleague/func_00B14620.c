/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern void * func_00228A80(void);
s32 func_00938F10(s32);                             /* extern */
s32 func_00939950(s32);                             /* extern */
s32 func_00939F40(s32);                             /* extern */
s32 func_0093ACB0(s32);                             /* extern */
s32 func_0094C7B0(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK, s32); /* extern */

void func_00B14620(s32 arg0, void *arg1, s32 arg2) {
    s32 temp_a3;
    s32 temp_v1;
    s32 var_a5;
    void *var_v0;

    var_v0 = func_00228A80();
    if (var_v0 != NULL) {
        M2C_FIELD(arg1, s8 *, 0) = 0;
        M2C_FIELD(arg1, s8 *, 1) = 0;
        var_a5 = 0;
        M2C_FIELD(arg1, s8 *, 2) = 0;
        temp_a3 = arg0 & 0xFFFF;
        M2C_FIELD(arg1, s8 *, 3) = 0xFF;
        do {
            if (temp_a3 == M2C_FIELD(var_v0, u16 *, 0x32EAE)) {
                M2C_FIELD(arg1, s8 *, 0) = 0x3C;
                M2C_FIELD(arg1, s8 *, 1) = 0x1E;
                M2C_FIELD(arg1, s8 *, 2) = 0x64;
                M2C_FIELD(arg1, s8 *, 3) = 0xFF;
            }
            var_a5 += 1;
            var_v0 += 2;
        } while (var_a5 < 0x20);
        if (func_0094C7B0(0x64, 0x1E, 0x3C, temp_a3, 0xFF, var_a5) != 0x12) {
            temp_v1 = func_00225820() & 0xFF;
            if (arg2 & 0xFF) {
                if (func_00939F40(arg0) == 0) {
                    M2C_FIELD(arg1, s8 *, 0) = 0x50;
                    M2C_FIELD(arg1, s8 *, 1) = 0x50;
                    M2C_FIELD(arg1, s8 *, 2) = 0x50;
                    goto block_19;
                }
            } else if ((temp_v1 & 0xFF) != (func_00938F10(arg0) & 0xFF)) {
                if ((func_0093ACB0(arg0) != 1) && (func_00939F40(arg0) != 1)) {
                    M2C_FIELD(arg1, s8 *, 0) = 0x50;
                    M2C_FIELD(arg1, s8 *, 1) = 0x50;
                    M2C_FIELD(arg1, s8 *, 2) = 0x50;
                    goto block_19;
                }
            } else if (func_00939950(arg0) != 1) {
                M2C_FIELD(arg1, s8 *, 0) = 0x50;
                M2C_FIELD(arg1, s8 *, 1) = 0x50;
                M2C_FIELD(arg1, s8 *, 2) = 0x50;
block_19:
                M2C_FIELD(arg1, s8 *, 3) = 0xFF;
            }
        }
    }
}
