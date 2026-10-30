/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C4840(u32, s8, s32);                    /* extern */
s32 func_002C4A80(u32, s8);                         /* extern */
u32 func_00C12FD0(s32, u32, s32, M2C_UNK);          /* extern */
u32 func_00C137F0();                                /* extern */
s32 func_00C13840();                                /* extern */
s32 func_00C17E10(s32, s32);                        /* extern */
extern char D_003DA428[];
extern s8 D_003E9D50;
extern s8 D_003E9D52;
extern s8 D_003E9D53;

s32 func_002C4960(u32 arg0, s8 arg1) {
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v1;
    s32 var_s0;
    u32 temp_s3_2;
    u32 var_v0;

    temp_v1 = arg1 & 0xFF;
    var_s0 = 4;
    temp_s3 = temp_v1 & 0x1F;
    temp_s4 = (temp_v1 >> 5) & 1;
    if ((func_00C17E10(temp_s4, temp_s3) & 0xFF) != 0xFF) {
        if ((func_00C17E10(temp_s4 & 0xFF, temp_s3 & 0xFF) & 0xFF) == 0xFF) {
            var_v0 = -1U;
        } else {
            temp_s3_2 = func_00C137F0();
            temp_a0 = func_00C13840();
            D_003E9D53 = 0xFF;
            D_003E9D50 = arg1;
            D_003E9D52 = 0;
            var_v0 = func_00C12FD0(temp_a0, temp_s3_2, (*(s32 *)D_003DA428), 1);
            if (var_v0 == -1U) {
                var_v0 = temp_s3_2;
            }
        }
        if (var_v0 >= arg0) {
            temp_a2 = func_002C4A80(arg0, arg1) & 0xFF;
            if (temp_a2 != 0xFF) {
                var_s0 = func_002C4840(arg0, arg1, temp_a2);
            }
        }
    }
    return var_s0;
}
