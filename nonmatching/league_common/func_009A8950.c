/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022C140(s32);
extern s32 func_0022BAC0(s32);
extern u8 func_0022BC60(s32);
s32 func_00229010(s8);                              /* extern */
s32 func_002290D0(s8);                              /* extern */
s32 func_00236680(s32);                             /* extern */

void func_009A8950(s32 arg0, s32 arg1, s32 arg2, s16 *arg3, s8 *arg4, s8 *arg5) {
    s16 var_s3;
    s32 temp_a0;
    s32 var_s4;
    s8 var_v1;

    temp_a0 = arg0 & 0xFF;
    if (temp_a0 == 0) {
        var_s4 = ((arg2 & 0xFF) + M2C_FIELD(func_0022C140(arg1), u8 *, 8)) & 0xFF;
        var_s3 = func_0022BAC0(var_s4) & 0xFFFF;
        var_v1 = func_0022BC60(var_s4) & 0xFF;
    } else if (temp_a0 != 1) {
        var_s3 = 0;
        var_v1 = 0;
        var_s4 = 0;
    } else {
        var_s4 = ((arg2 & 0xFF) + (func_00236680(arg1) & 0xFF)) & 0xFF;
        var_s3 = func_002290D0((s8) var_s4) & 0xFFFF;
        var_v1 = func_00229010((s8) var_s4) & 0xFF;
    }
    if (arg3 != NULL) {
        *arg3 = var_s3;
    }
    if (arg4 != NULL) {
        *arg4 = var_v1;
    }
    if (arg5 != NULL) {
        *arg5 = (s8) var_s4;
    }
}
