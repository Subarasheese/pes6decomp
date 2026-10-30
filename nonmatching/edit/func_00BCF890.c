/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002E4EA0(void *, s32);
M2C_UNK func_002E56A0(s32, s32, s32);               /* extern */
extern void *D_003EAFC0;

void func_00BCF890(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    if (D_003EAFC0 != NULL) {
        temp_v0 = func_002E4EA0(D_003EAFC0, arg0);
        if (temp_v0 != 0) {
            func_002E56A0(temp_v0, arg1, arg2);
        }
    }
}
