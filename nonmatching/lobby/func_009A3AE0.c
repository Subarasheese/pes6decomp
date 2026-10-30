/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB830(void *);
extern s32 func_002DB940(void *);
extern s16 func_002DB400(void *, s16, s32, s32);
s32 func_009A3AE0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 temp_a0;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_s1;

    temp_s4 = arg1 & 0xFFFF;
    var_s1 = 0;
    if (temp_s4 < 2) {
        return 0;
    }
    temp_s3 = func_002DB830(M2C_FIELD(arg0, void **, 0x25C));
    temp_v0 = func_002DB940(M2C_FIELD(arg0, void **, 0x25C));
    temp_v0_2 = func_002DB400(M2C_FIELD(arg0, void **, 0x25C), temp_v0, arg2, arg3);
    temp_v1 = temp_v0_2 - temp_s3;
    M2C_FIELD(arg0, s32 *, 0x26C) = temp_v1;
    if (temp_v1 < 0) {
        M2C_FIELD(arg0, s32 *, 0x26C) = 0;
    }
    temp_a0 = temp_s4 - 1;
    if (temp_a0 < M2C_FIELD(arg0, s32 *, 0x26C)) {
        M2C_FIELD(arg0, s32 *, 0x26C) = temp_a0;
    }
    if (temp_v0 != temp_v0_2) {
        var_s1 = 3;
    }
    return var_s1;
}
