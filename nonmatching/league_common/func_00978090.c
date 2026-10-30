/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00977F50(s32, s32, s32);
extern char Pes6MatchSquads[];

void func_00978090(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_s1;
    s32 var_a2;
    s32 var_a3;
    s32 var_s2;
    s32 var_s3;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s4;

    temp_a0 = arg1 & 0xFF;
    if ((temp_a0 == 0) || (temp_a0 == 1)) {
        var_a2 = 0;
        temp_s4 = ((void *)Pes6MatchSquads) + ((arg1 & 0xFF) * 0x6900);
        do {
            var_a3 = 0;
loop_4:
            temp_a0_2 = temp_s4 + ((var_a2 & 0xFF) * 0x348) + (var_a3 & 0xFF);
            M2C_FIELD(temp_a0_2, s8 *, 0x48) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x49) = 0;
            var_a3 = (var_a3 + 8) & 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 0x4A) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x4B) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x4C) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x4D) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x4E) = 0;
            M2C_FIELD(temp_a0_2, s8 *, 0x4F) = 0;
            if (var_a3 < 0x20) {
                goto loop_4;
            }
            var_a2 = (var_a2 + 1) & 0xFF;
        } while (var_a2 < 0x20);
        var_s3 = 0;
        do {
            temp_s1 = var_s3 & 0xFF;
            var_s2 = 0;
            temp_s0 = temp_s4 + temp_s1;
loop_8:
            temp_a0_3 = var_s2 & 0xFF;
            if (temp_a0_3 == temp_s1) {
                M2C_FIELD((temp_s0 + (temp_a0_3 * 0x348)), s8 *, 0x48) = 0;
            } else {
                M2C_FIELD((temp_s0 + ((var_s2 & 0xFF) * 0x348)), u8 *, 0x48) = func_00977F50(arg0, var_s2, var_s3);
            }
            var_s2 = (var_s2 + 1) & 0xFF;
            if (var_s2 < 0x20) {
                goto loop_8;
            }
            var_s3 = (var_s3 + 1) & 0xFF;
        } while (var_s3 < 0x20);
    }
}
