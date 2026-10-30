/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229380(void);
extern u8 func_00225820(void);
extern s32 func_00238630(s32, s32);
s32 func_00234580(s32, s32);                        /* extern */
s32 func_0097F4C0(u8, u8, M2C_UNK);                 /* extern */
s32 func_0097F790(u8, u8, M2C_UNK, s32);            /* extern */

s32 func_009B71E0(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    u8 temp_a0;
    void *temp_s0_2;

    temp_s0 = func_00225820() & 0xFF;
    temp_s0_2 = func_00229380();
    temp_s1 = func_00238630(0, temp_s0) & 0xFF;
    temp_s2 = ((func_0097F790(M2C_FIELD(temp_s0_2, u8 *, 0), M2C_FIELD(temp_s0_2, u8 *, 5), 0, arg0) & 0xFF) - 1) & 0xFF;
    if ((func_0097F4C0(M2C_FIELD(temp_s0_2, u8 *, 0), M2C_FIELD(temp_s0_2, u8 *, 5), 0) & 0xFF) >= temp_s2) {
        temp_a0 = M2C_FIELD(temp_s0_2, u8 *, 0);
        if ((temp_a0 == 0xF) && (temp_s2 >= ((func_0097F4C0(temp_a0, M2C_FIELD(temp_s0_2, u8 *, 5), 0) & 0xFF) - 2))) {
            return 0xFF;
        }
        if (temp_s2 != 0xFF) {
            return func_00234580(temp_s2, temp_s1) & 0xFF;
        }
        return 0xFF;
    }
    return 0xFF;
}
