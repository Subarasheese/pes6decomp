/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132B0(void *);
s32 func_002C19F0(s32, u32, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_002C6130(s32);                             /* extern */
u32 func_00C13640(s32, M2C_UNK *, M2C_UNK);         /* extern */
s32 func_00C5BAB0(s32);                             /* extern */
extern char D_00CB4A40[];

s32 func_00C5B730(M2C_UNK arg0, u32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    u32 var_a0;

    var_s1 = 0;
    temp_s0 = arg2 & 0xFF;
    temp_s3 = (((temp_s0 >> 5) & 1) ^ 1) & 0xFF;
    temp_v0 = func_00C5BAB0(temp_s3);
    if (temp_v0 != -1) {
        temp_v0_2 = func_002C19F0(temp_v0, arg1, temp_s3, 6, 1);
        if (temp_v0_2 != -1) {
            var_a0 = -1U;
            if (func_002C6130(temp_v0_2) == -1) {
                if ((temp_v0_2 != -1) && (arg1 != -1U)) {
                    var_a0 = func_00C13640(temp_v0_2, ((void *)D_00CB4A40), 3);
                    if (arg1 < var_a0) {
                        var_a0 = -1U;
                    }
                }
                if (var_a0 != -1U) {
                    var_s1 = temp_s0 == (func_00C132B0((void *) var_a0) & 0xFF);
                }
            }
        }
    }
    return var_s1;
}
