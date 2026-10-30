/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009A8FB0(s32, s32, s32, s64, s64);
M2C_UNK func_002DBC20(s32, s32, M2C_UNK);           /* extern */
s64 func_0095F540(s64);                             /* extern */
s32 func_00960150(s64);                             /* extern */
s32 func_009602B0();                                /* extern */
M2C_UNK func_00960370();                            /* extern */
s32 func_009605A0(s32);                             /* extern */
M2C_UNK func_009A8F10(s32, s64);                    /* extern */

void func_009A73B0(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_v1;
    s64 temp_s2;
    s64 var_s4;

    if (arg0 != NULL) {
        temp_s0 = arg1 & 0xFFFF;
        if (temp_s0 > 0) {
            temp_s6 = func_009602B0();
            func_00960370();
            var_s4 = 0;
            if (temp_s0 > 0) {
loop_3:
                temp_v0 = func_00960150(var_s4);
                temp_s3 = func_009605A0(temp_v0);
                temp_s2 = (s64) (func_0095F540(var_s4) << 0x38) >> 0x38;
                func_009A8F10(temp_s3, temp_s2);
                temp_v0_2 = func_009A8FB0(temp_v0, temp_s6, temp_s3, temp_s2, (s64) (var_s4 << 0x30) >> 0x30);
                if ((temp_v0_2 != 0) && (temp_v0_2 < 3)) {
                    M2C_FIELD(arg0, s32 *, 0x37C) = (s32) (var_s4 & 0xFFFF);
                } else {
                    var_s4 = (var_s4 + 1) & 0xFFFF;
                    if (var_s4 >= temp_s0) {

                    } else {
                        goto loop_3;
                    }
                }
            }
            if (temp_s0 >= 3) {
                var_v1 = temp_s0 - 3;
                if (var_v1 < 0) {
                    var_v1 = 0;
                }
                temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x37C) - 2;
                M2C_FIELD(arg0, s32 *, 0x380) = temp_v0_3;
                if (temp_v0_3 < 0) {
                    M2C_FIELD(arg0, s32 *, 0x380) = 0;
                }
                if (var_v1 < M2C_FIELD(arg0, s32 *, 0x380)) {
                    M2C_FIELD(arg0, s32 *, 0x380) = var_v1;
                }
                func_002DBC20(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x37C), 0);
            }
        }
    }
}
