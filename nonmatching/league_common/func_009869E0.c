/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002260A0(void);
extern s32 func_00226710(void);
s8 func_0022F210(s32, void *, M2C_UNK, s32, u8, u8); /* extern */

void func_009869E0(void) {
    s32 temp_a0;
    s32 temp_a3;
    s32 var_s4;
    s32 var_s5;
    s8 *var_s0;
    s8 *var_s1;
    u8 temp_a4;
    u8 temp_a5;
    void *var_s2;
    void *var_s3;

    var_s3 = func_002260A0();
    if (var_s3 != NULL) {
        var_s5 = 0;
        do {
            var_s4 = 0;
            var_s2 = var_s3;
            var_s1 = var_s3 + 0x19B2B;
            var_s0 = var_s3 + 0x19B2C;
loop_3:
            temp_a0 = func_00226710() & 0xFF;
            if ((var_s2 + 0x19B2A) != NULL) {
                M2C_FIELD(var_s2, u8 *, 0x19B2A) = (u8) ((M2C_FIELD(var_s2, u8 *, 0x19B2A) & ~1) | (0 & 1));
                temp_a5 = M2C_FIELD(var_s2, u8 *, 0x19B2A);
                temp_a3 = (0 & 7) * 2;
                temp_a4 = (temp_a5 & ~0xF0) | ((0 & 0xF) * 0x10);
                M2C_FIELD(var_s2, u8 *, 0x19B2A) = temp_a4;
                M2C_FIELD(var_s2, u8 *, 0x19B2A) = (u8) ((M2C_FIELD(var_s2, u8 *, 0x19B2A) & ~0xE) | temp_a3);
                *var_s1 = func_0022F210(temp_a0, var_s2 + 0x20000, -0xF, temp_a3, temp_a4, temp_a5);
                *var_s0 = 0;
                M2C_FIELD(var_s2, u8 *, 0x19B2D) = (u8) ((M2C_FIELD(var_s2, u8 *, 0x19B2D) & ~0x3F) | (0 & 0x3F));
                M2C_FIELD(var_s2, u8 *, 0x19B2D) = (u8) ((M2C_FIELD(var_s2, u8 *, 0x19B2D) & ~0x80) | ((0 & 1) << 7));
            }
            var_s4 += 1;
            var_s2 += 4;
            var_s1 += 4;
            var_s0 += 4;
            if (var_s4 < 4) {
                goto loop_3;
            }
            var_s5 += 1;
            var_s3 += 0x1A;
        } while (var_s5 < 0x400);
    }
}
