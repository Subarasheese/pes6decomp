/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002293F0(void);
extern void * func_00229380(void);
M2C_UNK func_0097D730(s32);                         /* extern */
s32 func_0097F420(u8, u8);                          /* extern */

void func_0097D7D0(void) {
    s32 temp_a0;
    s32 temp_s1;
    void *temp_v0;

    temp_s1 = func_002293F0();
    temp_v0 = func_00229380();
    if ((temp_v0 != NULL) && (temp_s1 != 0)) {
        temp_a0 = func_0097F420(M2C_FIELD(temp_v0, u8 *, 0), M2C_FIELD(temp_s1, u8 *, 0x1364)) & 0xFF;
        M2C_FIELD(temp_v0, u8 *, 1) = (u8) (M2C_FIELD(temp_v0, u8 *, 1) + 1);
        if ((s32) M2C_FIELD(temp_v0, u8 *, 1) >= temp_a0) {
            M2C_FIELD(temp_v0, u8 *, 1) = 0U;
            func_0097D730(temp_a0);
        }
    }
}
