/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D09EC0(s32);                             /* extern */
M2C_UNK func_00D09F30(s32);                         /* extern */
M2C_UNK func_00D10E80(s32, s8);                     /* extern */
M2C_UNK func_00D10F90(s32, s32);                    /* extern */

s32 func_00D09C10(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s8 temp_s0;

    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB8) != M2C_FIELD(arg0, s32 *, 0xBC)) {
        if ((arg0 != NULL) && (arg0 != NULL)) {
loop_7:
            temp_a0 = M2C_FIELD(arg0, s32 *, 0x5C);
            if ((temp_a0 != 0) && (temp_a0 != (arg0 + 0x60)) && (temp_a0 != (arg0 + 8)) && (M2C_FIELD(arg0, s32 *, 0) > 0)) {
                func_00D09F30(temp_a0);
                M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) - 1);
                goto loop_7;
            }
        }
        M2C_FIELD(arg0, s32 *, 0xBC) = (s32) M2C_FIELD(arg0, s32 *, 0xB8);
    }
    if (M2C_FIELD(arg0, s8 *, 0xC2) != 0) {
        M2C_FIELD(arg0, s8 *, 0xC2) = 0;
    }
    temp_s0 = M2C_FIELD(arg0, s8 *, 0xC0);
    if (temp_s0 != M2C_FIELD(arg0, s8 *, 0xC1)) {
        if (arg0 != NULL) {
loop_18:
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x5C);
            if ((temp_a0_2 != 0) && (temp_a0_2 != (arg0 + 0x60)) && (temp_a0_2 != (arg0 + 8)) && (M2C_FIELD(arg0, s32 *, 0) > 0)) {
                func_00D10E80(func_00D09EC0(temp_a0_2), temp_s0);
                goto loop_18;
            }
        }
        M2C_FIELD(arg0, s8 *, 0xC1) = (s8) M2C_FIELD(arg0, s8 *, 0xC0);
    }
    if (M2C_FIELD(arg0, s8 *, 0xC3) != 0) {
        M2C_FIELD(arg0, s8 *, 0xC3) = 0;
    }
    if (arg0 != NULL) {
loop_28:
        temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x5C);
        if ((temp_a0_3 != 0) && (temp_a0_3 != (arg0 + 0x60)) && (temp_a0_3 != (arg0 + 8)) && (M2C_FIELD(arg0, s32 *, 0) > 0)) {
            func_00D10F90(func_00D09EC0(temp_a0_3), arg1);
            goto loop_28;
        }
    }
    return 1;
}
