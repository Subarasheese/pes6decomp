/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00173B38(void *);                      /* extern */
M2C_UNK func_00173BE8(void *);                      /* extern */
M2C_UNK func_00173CF0(void *);                      /* extern */
M2C_UNK func_00173E10(void *);                      /* extern */
M2C_UNK func_00174380(void *);                      /* extern */
s32 func_001744D0(s32, s32);                        /* extern */
s32 func_001745A0(void *, s32);                     /* extern */

void func_00173718(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;

    temp_v0 = func_001744D0(M2C_FIELD(arg0, s32 *, 0x4F4), M2C_FIELD(arg0, s32 *, 0x4F8));
    if (temp_v0 >= 0) {
        M2C_FIELD(arg0, s32 *, 0xD10) = 1;
        temp_v0_2 = func_001745A0(arg0, temp_v0);
        if ((temp_v0_2 != 0) && (arg1 != 0)) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0xBF4);
            temp_v0_3 = M2C_FIELD(arg0, s32 *, 0xD08);
            if (temp_v0_2 < 0) {
                M2C_FIELD(arg0, s32 *, 0xBF4) = (s32) (temp_v1 + temp_v0_3);
            } else {
                temp_v0_4 = temp_v1 - temp_v0_3;
                M2C_FIELD(arg0, s32 *, 0xBF4) = temp_v0_4;
                if (temp_v0_4 < 0) {
                    M2C_FIELD(arg0, s32 *, 0xBF4) = 0;
                }
            }
        }
        M2C_FIELD(arg0, s32 *, 0xB8C) = temp_v0;
        func_00173B38(arg0);
        func_00173BE8(arg0);
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
        func_00174380(arg0);
        func_00173E10(arg0);
        func_00173CF0(arg0);
    }
}
