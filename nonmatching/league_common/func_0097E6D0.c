/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229380(void);
extern void * func_0022C1E0(void);
extern s32 func_0022C140(s32);
M2C_UNK func_0099E5A0();                            /* extern */
M2C_UNK func_0099EA10(u8);                          /* extern */

void func_0097E6D0(s32 arg0) {
    s32 temp_v0_2;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = func_0022C1E0();
    temp_v0 = func_00229380();
    if ((temp_v0 != NULL) && (temp_s1 != NULL)) {
        if ((arg0 & 0xFF) == 2) {
            M2C_FIELD(temp_s1, u8 *, 1) = 0U;
        }
        temp_v0_2 = func_0022C140((s32) M2C_FIELD(temp_s1, u8 *, 1));
        if (temp_v0_2 != 0) {
            M2C_FIELD(temp_v0_2, u8 *, 1) = (u8) M2C_FIELD(temp_v0, u8 *, 3);
            func_0099E5A0();
            func_0099EA10(M2C_FIELD(temp_s1, u8 *, 1));
        }
    }
}
