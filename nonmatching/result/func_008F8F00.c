/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C1FD0(s32, s32, s32, M2C_UNK);          /* extern */
s32 func_00C137F0();                                /* extern */
s32 func_00C13840(s32, s32);                        /* extern */
s32 func_00C17E10(s32, s32);                        /* extern */
extern char D_00CB3300[];

s32 func_008F8F00(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    void *temp_v1_3;

    temp_v1 = arg0 & 0xFF;
    temp_s3 = (temp_v1 >> 5) & 1;
    var_s0 = 1;
    temp_a0 = func_00C17E10(temp_s3, temp_v1 & 0x1F) & 0xFF;
    if ((temp_a0 != 0xFF) && (arg1 < 0xA)) {
        temp_v1_2 = temp_s3 & 0xFF;
        temp_a1 = temp_a0 * 0x28;
        temp_v1_3 = temp_a1 + ((temp_v1_2 * 0x2F4) + (*(s32 *)D_00CB3300));
        if ((M2C_FIELD(temp_v1_3, s8 *, 0x40) == 0) && (M2C_FIELD(temp_v1_3, u8 *, 0x41) == 0) && (M2C_FIELD(temp_v1_3, s16 *, 0x2C) == 0)) {
            temp_s3_2 = func_00C13840(temp_v1_2 * 0x3F, temp_a1);
            temp_v0 = func_00C137F0();
            if ((func_002C1FD0(temp_s3_2, temp_v0, arg0, 0x12) == 0) && (func_002C1FD0(temp_s3_2, temp_v0, arg0, 3) == 0)) {
                var_s0 = 0;
            }
        }
    }
    return var_s0;
}
