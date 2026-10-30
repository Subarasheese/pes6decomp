/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002260A0(void);
s32 func_00230100();                                /* extern */
s32 func_0094B600(s32, s32);                        /* extern */

void func_0094AB10(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a4;
    s32 temp_s1;
    s8 var_a0;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_v0;
    void *var_v1;

    temp_s1 = func_00230100();
    temp_v0 = func_002260A0();
    if (temp_v0 != NULL) {
        temp_a4 = func_0094B600(arg1, arg2) & 0xFFFF;
        if (temp_a4 < 0x400) {
            if (arg3 & 0xFF) {
                temp_a3 = temp_v0 + (temp_a4 * 0x1A) + (temp_s1 * 4);
                var_v1 = temp_a3 + 0x20000;
                var_a0 = (M2C_FIELD(temp_a3, u8 *, 0x19B2D) & ~0x80) | 0x80;
            } else {
                temp_a3_2 = temp_v0 + (temp_a4 * 0x1A) + (temp_s1 * 4);
                var_v1 = temp_a3_2 + 0x20000;
                var_a0 = (M2C_FIELD(temp_a3_2, u8 *, 0x19B2D) & ~0x80) | ((0 & 1) << 7);
            }
            M2C_FIELD(var_v1, s8 *, -0x64D3) = var_a0;
        }
    }
}
