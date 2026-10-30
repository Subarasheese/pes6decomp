/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00809FE0(s32, s32);                      /* extern */
M2C_UNK func_0080A280(s32, s32);                    /* extern */
s32 func_0080A360();                                /* extern */

void *func_00D07350(s32 arg0) {
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0_2 = func_0080A360();
    if (temp_v0_2 != -1) {
        temp_v0 = func_00809FE0(arg0, temp_v0_2);
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s32 *, 4) = temp_v0_2;
            M2C_FIELD(temp_v0, s32 *, 0x150) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x154) = 0;
            return temp_v0;
        }
        func_0080A280(arg0, temp_v0_2);
        return NULL;
    }
    return NULL;
}
