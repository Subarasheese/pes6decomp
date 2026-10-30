/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0022BB90(u8);                              /* extern */
void *func_0022BFF0(u8, s32);                       /* extern */
void *func_0022C140(u8);                            /* extern */
void *func_0022C1E0();                              /* extern */
s32 func_00239DA0(u8, s32);                         /* extern */
M2C_UNK func_0099E380(u64, u8);                     /* extern */
s32 func_0099E4C0();                                /* extern */

s32 func_0099C350(void) {
    s32 temp_s1_2;
    s32 temp_v0_3;
    s32 var_s5;
    u64 temp_a0;
    u8 temp_a1;
    u8 temp_s0;
    u8 temp_s1;
    u8 temp_s2;
    u8 temp_s2_2;
    u8 temp_s3;
    u8 temp_s4;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_4;

    temp_v0 = func_0022C1E0();
    if (temp_v0 != NULL) {
        temp_s4 = M2C_FIELD(temp_v0, u8 *, 1);
        temp_v0_2 = func_0022C140(temp_s4);
        if (temp_v0_2 != NULL) {
            temp_s0 = M2C_FIELD(temp_v0_2, u8 *, 1);
            temp_s1 = M2C_FIELD(temp_v0_2, u8 *, 7);
            temp_s2 = M2C_FIELD(temp_v0_2, u8 *, 0);
            var_s5 = temp_s2 & 0xFF;
            temp_s1_2 = temp_s1 & 0xFF;
            temp_v0_3 = func_0099E4C0() != 1;
            if (var_s5 < temp_s1_2) {
loop_10:
                temp_v0_4 = func_0022BFF0(temp_s4, func_00239DA0(temp_s4, var_s5 & 0xFF) & 0xFF);
                if ((temp_v0_4 != NULL) && ((temp_s0 & 0xFF) == M2C_FIELD(temp_v0_4, u8 *, 0))) {
                    temp_a1 = M2C_FIELD(temp_v0_4, u8 *, 0x16);
                    if ((((u64) ((s64) temp_a1 << 0x3A) >> 0x3F) != 1) && ((temp_v0_3 & 0xFF) || (((u64) ((s64) temp_a1 << 0x39) >> 0x3F) != 1))) {
                        temp_a0 = (u64) ((s64) M2C_FIELD(temp_v0_4, u8 *, 0x16) << 0x3E) >> 0x3F;
                        if (temp_a0 != 1) {
                            temp_s3 = M2C_FIELD(temp_v0_4, u8 *, 6);
                            temp_s2_2 = M2C_FIELD(temp_v0_4, u8 *, 5);
                            func_0099E380(temp_a0, temp_a1);
                            if (!(func_0022BB90(temp_s2_2) & 0xFF)) {
                                if (func_0022BB90(temp_s3) & 0xFF) {
                                    return 1;
                                }
                                goto block_22;
                            }
                            return 1;
                        }
                    }
                }
block_22:
                var_s5 += 1;
                if (var_s5 >= temp_s1_2) {
                    goto block_24;
                }
                goto loop_10;
            }
            goto block_24;
        }
        goto block_24;
    }
block_24:
    return 0;
}
