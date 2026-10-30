/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00226000(void);
s8 func_00975B50(M2C_UNK);                          /* extern */
extern void *D_003EA9B8;

void func_009B7FA0(void) {
    s8 var_s1;
    void *temp_s0;

    temp_s0 = D_003EA9B8;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s32 *, 0x400) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x40C) = 0x40;
        M2C_FIELD(temp_s0, s16 *, 0x404) = 0x200;
        M2C_FIELD(temp_s0, s16 *, 0x3F6) = 8;
        M2C_FIELD(temp_s0, s8 *, 0x40E) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x40F) = func_00975B50(0);
        var_s1 = 0;
        M2C_FIELD(temp_s0, s8 *, 0x410) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x411) = 0;
loop_2:
        if (M2C_FIELD((func_00226000() + ((var_s1 % 15) * 0xE0)), u8 *, 0xC4) & 1) {
            var_s1 += 1;
            M2C_FIELD(temp_s0, s8 *, 0x411) = var_s1;
            if (var_s1 < 0xF) {
                goto loop_2;
            }
        }
    }
}
