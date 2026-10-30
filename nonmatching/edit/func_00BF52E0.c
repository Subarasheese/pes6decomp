/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00C042D0(void);
u16 func_00BC5DF0(s32, s32, s32);                   /* extern */
s32 func_00BC6100(s32, s32);                        /* extern */
s32 func_00BF3A10(u16);                             /* extern */
M2C_UNK func_00BF5660(void *, s32);                 /* extern */
u16 func_00C04300(s32, s32);                        /* extern */

void func_00BF52E0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a1;
    s32 temp_s3;
    s32 var_s4_2;
    s32 var_s5;
    s32 var_s7;
    s32 var_v1;
    u16 temp_v0;
    u16 var_v0;
    void *var_s4;
    void *var_s5_2;

    var_s7 = 0;
    M2C_FIELD(arg0, s32 *, 0x144C) = func_00BC6100(arg1, arg3);
    temp_s3 = arg1 & 0xFFFF;
    if (temp_s3 == 0x11C) {
        var_s7 = arg2 * 0x17;
    }
    var_s5 = 0;
    var_s4 = arg0;
    do {
        M2C_FIELD(var_s4, s16 *, 0x80) = 0;
        M2C_FIELD(var_s4, s32 *, 0x7C) = 1;
        func_00BF5660(var_s4, 0xFFFF);
        var_s5 += 1;
        var_s4 += 0x88;
    } while (var_s5 < 0x25);
    var_s5_2 = arg0;
    var_s4_2 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x144C) > 0) {
        do {
            if (temp_s3 == 0x11A) {
                var_v0 = func_00C04300(arg2 & 0xFF, var_s4_2 & 0xFF);
            } else {
                var_v0 = func_00BC5DF0(arg1, (var_s4_2 + var_s7) & 0xFF, arg3);
            }
            M2C_FIELD(var_s5_2, u16 *, 0x80) = var_v0;
            if (func_00BF3A10(M2C_FIELD(var_s5_2, u16 *, 0x80)) == 0) {
                M2C_FIELD(var_s5_2, u16 *, 0x80) = 0U;
                func_00BF5660(var_s5_2, 0);
            } else {
                func_00BF5660(var_s5_2, arg1);
            }
            var_s4_2 += 1;
            var_s5_2 += 0x88;
        } while (var_s4_2 < M2C_FIELD(arg0, s32 *, 0x144C));
    }
    switch (temp_s3) {                              /* irregular */
    case 0x11A:
        temp_v0 = func_00C042D0();
        temp_a1 = temp_v0 & 0xFFFF;
        if ((temp_a1 % 13) != 0) {
            var_v1 = ((temp_v0 & 0xFFFF) / 13) + ((u32) temp_a1 >> 0x1F) + 1;
        } else {
            var_v1 = ((temp_v0 & 0xFFFF) / 13) + ((u32) temp_a1 >> 0x1F);
        }
block_24:
        M2C_FIELD(arg0, s32 *, 0x1458) = var_v1;
        break;
    case 0x11C:
        var_v1 = 7;
        goto block_24;
    }
    M2C_FIELD(arg0, s32 *, 0x1454) = arg2;
}
