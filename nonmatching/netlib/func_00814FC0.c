/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
M2C_UNK func_00D0F680(M2C_UNK, s32, s32);           /* extern */
M2C_UNK func_00D0FBE0(M2C_UNK);                     /* extern */
M2C_UNK func_00D0FD20();                            /* extern */
extern char D_008A35F0[];

s32 func_00814FC0(void) {
    s32 temp_a1;
    s32 var_a2;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_v1;

    if (func_0082C2A0() == 0) {
        goto block_29;
    }
    if (((void *)D_008A35F0) != NULL) {
        if (M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) != 0) {
            return 0;
        }
        if ((M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) < 0) || (M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) >= 0x10)) {
            return 0;
        }
        if (((void *)D_008A35F0) != NULL) {
            M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41F) = 1;
        }
        if (((void *)D_008A35F0) != NULL) {
            var_v1 = M2C_FIELD(((void *)D_008A35F0), s32 *, 0);
        } else {
            var_v1 = 9;
        }
        if (var_v1 == 1) {
            var_a2 = 0;
            do {
                temp_a1 = var_a2 * 8;
                temp_v1 = ((void *)D_008A35F0) + var_a2;
                var_a2 += 1;
                M2C_FIELD((((void *)D_008A35F0) + (M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) << 6) + temp_a1), s32 *, 0x10) = 0;
                M2C_FIELD((((void *)D_008A35F0) + (M2C_FIELD(((void *)D_008A35F0), s32 *, 0xC) << 6) + temp_a1), s32 *, 0x14) = 0;
                M2C_FIELD(temp_v1, s8 *, 0x410) = 0;
            } while (var_a2 < 8);
            if (M2C_FIELD(((void *)D_008A35F0), s8 *, 0x418) == 1) {
                func_00D0F680(0, temp_a1, var_a2);
                func_00D0FBE0(0);
                func_00D0FD20();
            }
            var_v1_2 = 0;
            do {
                M2C_FIELD((((void *)D_008A35F0) + var_v1_2), s8 *, 0x418) = 0;
                var_v1_2 += 1;
            } while (var_v1_2 < 4);
            if (((void *)D_008A35F0) != NULL) {
                M2C_FIELD(((void *)D_008A35F0), s8 *, 0x41D) = 0;
            }
block_29:
            return 1;
        }
        return 0;
    }
    return 0;
}
