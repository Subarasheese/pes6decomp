/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_001B6670();                            /* extern */
M2C_UNK func_001B66C0(M2C_UNK);                     /* extern */
M2C_UNK func_002136B0(s32, s32);                    /* extern */
M2C_UNK SD_call(M2C_UNK);                     /* extern */
s32 func_00BCF390();                                /* extern */

s32 func_00BA25B0(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;

    temp_v0 = func_00BCF390();
    var_s1 = 0;
    if ((temp_v0 & 1) && (M2C_FIELD(arg0, s32 *, 0) == 1)) {
        M2C_FIELD(arg0, s32 *, 0) = 0;
        SD_call(0x8400F802);
        func_002136B0(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0));
        temp_v1 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v1 == 0) {
            func_001B66C0(0xF00097);
        } else if (temp_v1 == 1) {
            func_001B66C0(0xF0009B);
        } else {
            func_001B6670();
        }
    }
    if ((temp_v0 & 8) && (M2C_FIELD(arg0, s32 *, 0) == 0)) {
        M2C_FIELD(arg0, s32 *, 0) = 1;
        SD_call(0x8400F802);
        func_002136B0(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0));
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_v1_2 == 0) {
            func_001B66C0(0xF00097);
        } else if (temp_v1_2 == 1) {
            func_001B66C0(0xF0009B);
        } else {
            func_001B6670();
        }
    }
    if (temp_v0 & 0x1000) {
        var_s1 = 1;
        M2C_FIELD(arg0, s8 *, 5) = 2;
        SD_call(0x84028400);
    }
    if (temp_v0 & 0x4000) {
        var_s1 = 1;
        M2C_FIELD(arg0, s8 *, 5) = 3;
        M2C_FIELD(arg0, s8 *, 6) = 1;
        SD_call(0x84008401);
    }
    return var_s1;
}
