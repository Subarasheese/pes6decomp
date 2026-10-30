/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00225940(s32);                             /* extern */
s32 func_00226710();                                /* extern */
s32 func_0022BC60(u8);                              /* extern */
void *func_0022BFF0(u8, u8);                        /* extern */
void *func_0022C140(u8);                            /* extern */
void *func_0022C1E0();                              /* extern */
s32 func_00309420();                                /* extern */

s32 func_00230AA0(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v0;
    u8 temp_s4;
    u8 temp_v1;
    u8 var_s5;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;

    if ((func_00309420() != 0) == 1) {
        goto block_59;
    }
    temp_v0 = func_00226710() & 0xFF;
    if ((temp_v0 != 0x39) && (temp_v0 != 0x2D) && (temp_v0 != 0x27) && (temp_v0 != 0x26) && (temp_v0 != 0x21) && (temp_v0 != 0x1D) && (temp_v0 != 0x1B) && (temp_v0 != 0x19) && (temp_v0 != 0x17) && (temp_v0 != 0x15) && (temp_v0 != 0x13) && (temp_v0 != 0x11) && (temp_v0 != 0xE) && (temp_v0 != 0xC) && (temp_v0 != 0x3A) && (temp_v0 != 0xA) && (temp_v0 != 9) && (temp_v0 != 8) && (temp_v0 != 7) && (temp_v0 != 5) && (temp_v0 != 4) && (temp_v0 != 3) && (temp_v0 != 2)) {
        goto block_59;
    }
    temp_v0_2 = func_0022C1E0();
    if (temp_v0_2 != NULL) {
        temp_s4 = M2C_FIELD(temp_v0_2, u8 *, 1);
        temp_v0_3 = func_0022C140(temp_s4);
        if (temp_v0_3 != NULL) {
            temp_v0_4 = func_0022BFF0(temp_s4, M2C_FIELD(temp_v0_3, u8 *, 3));
            if (temp_v0_4 != NULL) {
                temp_s1 = func_0022BC60(M2C_FIELD(temp_v0_4, u8 *, 5)) & 0xFF;
                temp_s0 = func_0022BC60(M2C_FIELD(temp_v0_4, u8 *, 6)) & 0xFF;
                temp_s2 = func_00225940(temp_s1) & 0xFF;
                temp_v1 = M2C_FIELD(temp_v0_3, u8 *, 1);
                temp_a0 = func_00225940(temp_s0) & 0xFF;
                switch (temp_v1) {                  /* irregular */
                case 1:
                    return 1;
                case 2:
                    var_s5 = 0;
                    if ((s32) M2C_FIELD(temp_v0_3, u8 *, 5) > 0) {
                        temp_s2_2 = temp_s1 & 0xFF;
                        temp_s1_2 = temp_s0 & 0xFF;
loop_45:
                        temp_v0_5 = func_0022BFF0(temp_s4, var_s5);
                        if (temp_v0_5 != NULL) {
                            if ((temp_s2 & 0xFF) && ((temp_s2_2 == (func_0022BC60(M2C_FIELD(temp_v0_5, u8 *, 5)) & 0xFF)) || (temp_s2_2 == (func_0022BC60(M2C_FIELD(temp_v0_5, u8 *, 6)) & 0xFF))) && ((M2C_FIELD(temp_v0_5, u8 *, 0x16) & 1) == 1)) {
                                return 1;
                            }
                            if (temp_a0 & 0xFF) {
                                if (temp_s1_2 != (func_0022BC60(M2C_FIELD(temp_v0_5, u8 *, 5)) & 0xFF)) {
                                    if (temp_s1_2 == (func_0022BC60(M2C_FIELD(temp_v0_5, u8 *, 6)) & 0xFF)) {
                                        goto block_55;
                                    }
                                    goto block_57;
                                }
block_55:
                                if ((M2C_FIELD(temp_v0_5, u8 *, 0x16) & 1) == 1) {
                                    return 1;
                                }
                                goto block_57;
                            }
                            goto block_57;
                        }
block_57:
                        var_s5 = (var_s5 + 1) & 0xFF;
                        if ((s32) var_s5 >= (s32) M2C_FIELD(temp_v0_3, u8 *, 5)) {
                            goto block_59;
                        }
                        goto loop_45;
                    }
                    goto block_59;
                }
            } else {
                goto block_59;
            }
        } else {
            goto block_59;
        }
    } else {
block_59:
        return 0;
    }
}
