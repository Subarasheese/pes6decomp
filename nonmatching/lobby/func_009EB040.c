/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009F5AB0(void);
extern s32 func_009F5AC0(void);
M2C_UNK func_009F5AD0();                            /* extern */
M2C_UNK func_009F5B40();                            /* extern */

s32 func_009EB040(void *arg0, void *arg1) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;

    var_v0 = 0;
    var_s4 = 0;
    var_s3 = 0;
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x10);
    var_s1 = 0;
    if (M2C_FIELD(arg1, s32 *, 0x3C) > 0) {
        func_009F5B40();
        var_s4 = func_009F5AC0();
        var_s3 = func_009F5AB0();
        func_009F5AD0();
        var_s1 = func_009F5AC0();
        var_v0 = func_009F5AB0();
    }
    if (var_s4 == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    } else if ((var_s3 != 0) && (var_s1 != 0)) {
        if (var_v0 != 0) {
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (var_v0 + ((var_s1 << 8) + ((var_s4 << 0x18) + (var_s3 << 0x10))));
        } else {
            goto block_10;
        }
    } else {
block_10:
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    return temp_s0 != M2C_FIELD(arg0, s32 *, 0x10);
}
