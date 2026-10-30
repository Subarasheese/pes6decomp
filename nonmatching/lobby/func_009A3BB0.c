/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB830(void *);
extern s32 func_002DB940(void *);
M2C_UNK func_002DBC20(void *, s32, s32);            /* extern */

s32 func_009A3BB0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_s4;

    var_s4 = 0;
    temp_s3 = arg2 & 0xFFFF;
    if (temp_s3 < 2) {
        return 0;
    }
    temp_s2 = func_002DB830(M2C_FIELD(arg0, void **, 0x25C));
    M2C_FIELD(arg0, s32 *, 0x26C) = (s32) (M2C_FIELD(arg0, s32 *, 0x26C) + arg1);
    temp_s1 = func_002DB940(M2C_FIELD(arg0, void **, 0x25C));
    func_002DBC20(M2C_FIELD(arg0, void **, 0x25C), M2C_FIELD(arg0, s32 *, 0x26C) + temp_s2, arg3);
    temp_v0 = func_002DB940(M2C_FIELD(arg0, void **, 0x25C));
    if (M2C_FIELD(arg0, s32 *, 0x26C) < 0) {
        M2C_FIELD(arg0, s32 *, 0x26C) = 0;
    }
    temp_a0 = temp_s3 - 1;
    if (temp_a0 < M2C_FIELD(arg0, s32 *, 0x26C)) {
        M2C_FIELD(arg0, s32 *, 0x26C) = temp_a0;
    }
    if (temp_s1 != temp_v0) {
        var_s4 = 3;
    }
    return var_s4;
}
