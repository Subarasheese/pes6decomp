/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0016AB80(void *, M2C_UNK);               /* extern */

void func_0016A240(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK var_a1;
    s32 temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0xFE0);
    if (temp_v0 == 0) {
        var_a1 = 1;
        goto block_10;
    }
    if (temp_v0 & 1) {
        temp_v0_2 = func_0016AB80(arg0, 2);
        if (temp_v0_2 != NULL) {
            M2C_FIELD(arg0, s32 *, 0xFD4) = arg1;
            M2C_FIELD(temp_v0_2, s32 *, 0x14) = arg1;
            M2C_FIELD(arg0, s32 *, 0xFD8) = arg2;
            M2C_FIELD(temp_v0_2, s32 *, 0x18) = arg2;
            M2C_FIELD(arg0, s32 *, 0xFDC) = arg3;
            M2C_FIELD(temp_v0_2, s32 *, 0x1C) = arg3;
            goto block_5;
        }
    } else {
block_5:
        if (M2C_FIELD(arg0, s32 *, 0xFE0) & 2) {
            temp_v0_3 = func_0016AB80(arg0, 3);
            if (temp_v0_3 != NULL) {
                M2C_FIELD(arg0, s32 *, 0xFD4) = arg1;
                M2C_FIELD(temp_v0_3, s32 *, 0x14) = arg1;
                M2C_FIELD(arg0, s32 *, 0xFD8) = arg2;
                M2C_FIELD(temp_v0_3, s32 *, 0x18) = arg2;
                M2C_FIELD(arg0, s32 *, 0xFDC) = arg3;
                M2C_FIELD(temp_v0_3, s32 *, 0x1C) = arg3;
                goto block_8;
            }
        } else {
block_8:
            if (M2C_FIELD(arg0, s32 *, 0xFE0) & 4) {
                var_a1 = 4;
block_10:
                temp_v0_4 = func_0016AB80(arg0, var_a1);
                if (temp_v0_4 != NULL) {
                    M2C_FIELD(arg0, s32 *, 0xFD4) = arg1;
                    M2C_FIELD(temp_v0_4, s32 *, 0x14) = arg1;
                    M2C_FIELD(arg0, s32 *, 0xFD8) = arg2;
                    M2C_FIELD(temp_v0_4, s32 *, 0x18) = arg2;
                    M2C_FIELD(arg0, s32 *, 0xFDC) = arg3;
                    M2C_FIELD(temp_v0_4, s32 *, 0x1C) = arg3;
                }
            }
        }
    }
}
