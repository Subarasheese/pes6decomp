/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00235B60(void);
s32 func_00233EF0(s32, s32);                        /* extern */
s32 func_00235800(s32);                             /* extern */
s32 func_0094C730();                                /* extern */
M2C_UNK func_00AE51E0(u8);                          /* extern */
extern void *D_003EAD3C;

void func_00AE71B0(void) {
    s32 temp_s3;
    s32 var_s2;
    s32 var_s4;
    s32 var_v0;
    u8 temp_s1;
    u8 var_v0_2;
    void *temp_s0;

    temp_s0 = D_003EAD3C;
    var_s2 = 1;
    if ((temp_s0 != NULL) && ((func_0094C730() & 0xFF) == 2)) {
        temp_s1 = M2C_FIELD(temp_s0, u8 *, 0x588);
        if (D_003EAD3C == NULL) {
            var_v0 = 0;
        } else {
            var_v0 = ((temp_s1 & 0xFF) + (func_00235800(func_00235B60() & 0xFF) & 0xFF)) & 0xFF;
        }
        if (M2C_FIELD(temp_s0, u8 *, 0x4DC) != 1) {
            var_v0_2 = M2C_FIELD(temp_s0, u8 *, 0x58C);
        } else {
            var_v0_2 = ((u8) M2C_FIELD(temp_s0, u8 *, 0x58C) >> 1) & 0xFF;
        }
        temp_s3 = var_v0_2 & 0xFF;
        var_s4 = 0;
        if (temp_s3 > 0) {
            do {
                if (func_00233EF0(var_v0 & 0xFF, var_s4) == 0) {
                    var_s2 = 0;
                }
                var_s4 = (var_s4 + 1) & 0xFF;
            } while (var_s4 < temp_s3);
        }
        if (((var_s2 & 0xFF) == 1) && (M2C_FIELD(temp_s0, u8 *, 0x4DC) == 1)) {
            M2C_FIELD(temp_s0, u8 *, 0x58A) = 1U;
        } else {
            M2C_FIELD(temp_s0, u8 *, 0x58A) = 0U;
        }
        func_00AE51E0(M2C_FIELD(temp_s0, u8 *, 0x58A));
    }
}
