/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00229010(s8);                              /* extern */
s32 func_002290D0(s8);                              /* extern */
s32 func_00236680();                                /* extern */

void func_009AC430(M2C_UNK arg0, s32 arg1, s16 *arg2, s8 *arg3, s8 *arg4) {
    s16 temp_v1;
    s8 temp_s3;
    s8 temp_s4;

    temp_s4 = ((arg1 & 0xFF) + (func_00236680() & 0xFF)) & 0xFF;
    temp_s3 = func_00229010(temp_s4) & 0xFF;
    temp_v1 = func_002290D0(temp_s4) & 0xFFFF;
    if (arg2 != NULL) {
        *arg2 = temp_v1;
    }
    if (arg3 != NULL) {
        *arg3 = temp_s3;
    }
    if (arg4 != NULL) {
        *arg4 = temp_s4;
    }
}
