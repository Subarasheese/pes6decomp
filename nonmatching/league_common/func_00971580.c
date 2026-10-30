/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001D5A10(M2C_UNK);                         /* extern */
M2C_UNK Pes6Sprite_SetPositionZ(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7C20(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D60(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7D80(s32, M2C_UNK);                /* extern */
M2C_UNK func_001D7E40(s32, M2C_UNK);                /* extern */
s32 func_001D7F90(s32);                             /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
s32 func_00971E80(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void *func_00971580(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s5;
    s32 var_v0;
    void *temp_v0;

    temp_v0 = func_0096DB90(0x14);
    if (temp_v0 != NULL) {
        temp_v0_2 = func_001D5A10(0x102A1);
        M2C_FIELD(temp_v0, s32 *, 0) = temp_v0_2;
        if (temp_v0_2 == 0) {
            return NULL;
        }
        switch (arg0) {                             /* irregular */
        case 2:
            temp_a0 = M2C_FIELD(temp_v0, s32 *, 0);
            if (temp_a0 == 0) {
                var_s5 = 0;
            } else {
                var_s5 = func_001D7F90(temp_a0);
                func_001D7E40(var_s5, 0);
                func_001D7D80(var_s5, 0);
                func_001D7C20(var_s5, 0);
                Pes6Sprite_SetPositionZ(var_s5, 0);
                func_001D7D60(var_s5, 1);
            }
            M2C_FIELD(temp_v0, s32 *, 4) = var_s5;
            M2C_FIELD(temp_v0, s32 *, 0xC) = func_00971E80(var_s5, 0, 0, 0, arg1, arg3);
            temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 0);
            if (temp_a0_2 == 0) {
                var_s2 = 0;
            } else {
                var_s2 = func_001D7F90(temp_a0_2);
                func_001D7E40(var_s2, 1);
                func_001D7D80(var_s2, 0);
                func_001D7C20(var_s2, 0);
                Pes6Sprite_SetPositionZ(var_s2, 0);
                func_001D7D60(var_s2, 1);
            }
            M2C_FIELD(temp_v0, s32 *, 8) = var_s2;
            var_v0 = func_00971E80(var_s2, 1, 1, 0, arg2, arg4);
block_31:
            M2C_FIELD(temp_v0, s32 *, 0x10) = var_v0;
            break;
        case 1:
            M2C_FIELD(temp_v0, s32 *, 4) = 0;
            M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
            temp_a0_3 = M2C_FIELD(temp_v0, s32 *, 0);
            if (temp_a0_3 == 0) {
                var_s2_2 = 0;
            } else {
                var_s2_2 = func_001D7F90(temp_a0_3);
                func_001D7E40(var_s2_2, 1);
                func_001D7D80(var_s2_2, 0);
                func_001D7C20(var_s2_2, 0);
                Pes6Sprite_SetPositionZ(var_s2_2, 0);
                func_001D7D60(var_s2_2, 1);
            }
            M2C_FIELD(temp_v0, s32 *, 8) = var_s2_2;
            var_v0 = func_00971E80(var_s2_2, 1, 1, 0, arg2, arg4);
            goto block_31;
        case 0:
            temp_a0_4 = M2C_FIELD(temp_v0, s32 *, 0);
            if (temp_a0_4 == 0) {
                var_s1 = 0;
            } else {
                var_s1 = func_001D7F90(temp_a0_4);
                func_001D7E40(var_s1, 0);
                func_001D7D80(var_s1, 0);
                func_001D7C20(var_s1, 0);
                Pes6Sprite_SetPositionZ(var_s1, 0);
                func_001D7D60(var_s1, 1);
            }
            M2C_FIELD(temp_v0, s32 *, 4) = var_s1;
            M2C_FIELD(temp_v0, s32 *, 0xC) = func_00971E80(var_s1, 0, 0, 0, arg1, arg3);
            M2C_FIELD(temp_v0, s32 *, 8) = 0;
            M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
            break;
        }
        return temp_v0;
    }
    return NULL;
}
