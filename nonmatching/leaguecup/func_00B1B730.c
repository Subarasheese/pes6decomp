/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B1AF30(void);
M2C_UNK func_00973C70(s32, f32 *);                  /* extern */
M2C_UNK func_00B1B400();                            /* extern */
extern s32 D_003EAD84;

void func_00B1B730(void) {
    f32 sp20;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f1;
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00B1AF30();
    if (temp_v0 != 0) {
        if ((M2C_FIELD(temp_v0, s32 *, 0x2B4) == 0) && (D_003EAD84 == 0)) {
            func_00B1B400();
        }
        sp20 = M2C_FIELD(temp_v0, f32 *, 0x2D4);
        temp_f1 = M2C_FIELD(temp_v0, f32 *, 0x2D8) - (f32) D_003EAD84;
        sp24 = temp_f1;
        temp_f0 = M2C_FIELD(temp_v0, f32 *, 0x2E8);
        if (temp_f1 <= temp_f0) {
            sp24 = temp_f0;
        }
        func_00973C70(M2C_FIELD(temp_v0, s32 *, 0x2BC), &sp20);
        D_003EAD84 += 1;
        if (sp24 <= M2C_FIELD(temp_v0, f32 *, 0x2E8)) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x2B4) + 1;
            M2C_FIELD(temp_v0, s32 *, 0x2B4) = temp_v1;
            if (temp_v1 >= 7) {
                M2C_FIELD(temp_v0, s8 *, 0x36A) = 1;
            } else {
                func_00B1B400();
            }
            D_003EAD84 = 0;
        }
    }
}
