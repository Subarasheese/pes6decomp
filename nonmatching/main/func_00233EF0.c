/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
M2C_UNK func_002343F0(s32, s32, M2C_UNK);           /* extern */
s32 func_00234580(s32, s32);                        /* extern */
s32 func_00234E00(s32);                             /* extern */
s32 func_00236680(s32);                             /* extern */

s32 func_00233EF0(s32 arg0, s32 arg1) {
    s32 temp_a4;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s6;
    s32 temp_v0_2;
    s32 var_a3;
    s32 var_v0;
    s32 var_v1;
    void *temp_s4;
    void *temp_v0;
    void *var_a2;

    temp_s4 = func_00229460();
    if (func_00231240() == 1) {
        goto block_17;
    }
    if (temp_s4 != NULL) {
        if ((func_00234580(arg1, arg0) & 0xFF) != 0xFE) {
            temp_s6 = func_00234E00(arg0) & 0xFF;
            temp_s1 = arg1 & 0xFF;
            temp_s3 = temp_s6 * 0xC;
            temp_v0 = temp_s3 + temp_s4;
            temp_s0 = (temp_s1 / (s32) M2C_FIELD(temp_v0, u8 *, 0x4AB9)) & 0xFF;
            temp_a4 = func_00236680(temp_s6) & 0xFF;
            var_a3 = 0;
            var_v1 = 0;
            var_a2 = temp_s4;
loop_12:
            if (var_a3 < (temp_s6 & 0xFF)) {
                if (var_a3 < 0x14) {
                    var_a3 += 1;
                    temp_v0_2 = M2C_FIELD(var_a2, u8 *, 0x4ABD) * M2C_FIELD(var_a2, u8 *, 0x4AB8);
                    var_a2 += 0xC;
                    var_v1 = (var_v1 + (temp_v0_2 & 0xFF)) & 0xFF;
                    goto loop_12;
                }
            }
            var_v0 = 1;
            if (!(M2C_FIELD(((((var_v1 + ((((arg0 & 0xFF) - (temp_a4 & 0xFF)) + ((temp_s0 & 0xFF) * M2C_FIELD((temp_s3 + temp_s4), u8 *, 0x4AB8))) & 0xFF)) & 0xFF) * 4) + temp_s4), s32 *, 0x1368) & (1 << (temp_s1 % (s32) M2C_FIELD(temp_v0, u8 *, 0x4AB9))))) {
                goto block_17;
            }
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return var_v0;
        }
        func_002343F0(arg0, arg1, 1);
        return 1;
    }
block_17:
    var_v0 = 0;
    return var_v0;
}
