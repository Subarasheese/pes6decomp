/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
extern s32 func_002260F0(s32);
void func_00B01880(void) {
    s32 temp_v0_2;
    s32 var_s0;
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_s0 = 0;
        M2C_FIELD(temp_v0, u16 *, 0xCE26) = (u16) M2C_FIELD(temp_v0, u16 *, 0xCE1A);
        M2C_FIELD(temp_v0, u16 *, 0xCE1A) = 0U;
        M2C_FIELD(temp_v0, u16 *, 0xCE28) = (u16) M2C_FIELD(temp_v0, u16 *, 0xCE1C);
        M2C_FIELD(temp_v0, u16 *, 0xCE1C) = 0U;
        M2C_FIELD(temp_v0, u16 *, 0xCE2A) = (u16) M2C_FIELD(temp_v0, u16 *, 0xCE1E);
        M2C_FIELD(temp_v0, u16 *, 0xCE1E) = 0U;
        M2C_FIELD(temp_v0, u16 *, 0xCE2C) = (u16) M2C_FIELD(temp_v0, u16 *, 0xCE20);
        M2C_FIELD(temp_v0, u16 *, 0xCE20) = 0U;
loop_2:
        temp_v0_2 = func_002260F0(var_s0 & 0xFF);
        if (temp_v0_2 != 0) {
            var_s0 += 1;
            M2C_FIELD(temp_v0_2, u16 *, 0x4A) = (u16) M2C_FIELD(temp_v0_2, u16 *, 0x48);
            M2C_FIELD(temp_v0_2, u16 *, 0x48) = (u16) M2C_FIELD(temp_v0_2, u16 *, 0x46);
            M2C_FIELD(temp_v0_2, u16 *, 0x46) = (u16) M2C_FIELD(temp_v0_2, u16 *, 0x44);
            M2C_FIELD(temp_v0_2, u16 *, 0x44) = (u16) M2C_FIELD(temp_v0_2, u16 *, 0x42);
            M2C_FIELD(temp_v0_2, u16 *, 0x42) = (u16) M2C_FIELD(temp_v0_2, u16 *, 0x40);
            M2C_FIELD(temp_v0_2, u16 *, 0x40) = (u16) M2C_FIELD(temp_v0_2, u16 *, 0x3E);
            M2C_FIELD(temp_v0_2, u16 *, 0x3E) = (u16) M2C_FIELD(temp_v0_2, u16 *, 0x3C);
            M2C_FIELD(temp_v0_2, u16 *, 0x3C) = 0U;
            if (var_s0 < 0x48) {
                goto loop_2;
            }
        }
    }
}
