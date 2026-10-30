/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s8 func_008C87E0(void *);                           /* extern */
s32 func_008C8DB0(s32);                             /* extern */

void func_008C8C70(void *arg0, s32 arg1, s8 arg2, s8 arg3) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s8 *, 4) = arg2;
        M2C_FIELD(arg0, s8 *, 5) = arg3;
        M2C_FIELD(arg0, s32 *, 0) = func_008C8DB0(arg1);
        M2C_FIELD(arg0, s8 *, 0xF) = 0;
        if (arg1 != 0) {
            func_0026E840(0x8400F803);
        }
        M2C_FIELD(arg0, s8 *, 6) = func_008C87E0(arg0);
    }
}
