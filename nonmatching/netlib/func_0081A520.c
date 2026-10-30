/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(void *);                      /* extern */
void *func_00154060(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_001D7F10(s32);                         /* extern */
s32 func_0081A340(void *, s32);                     /* extern */

void *func_0081A520(s32 arg0) {
    s32 temp_a0_2;
    s32 temp_v0_2;
    s32 var_a1;
    void *temp_a0;
    void *temp_v0;

    temp_v0 = func_00154060(1, 0x48);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        var_a1 = 0;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x45) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x46) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
        do {
            temp_v0_2 = var_a1 * 4;
            temp_a0 = temp_v0 + (var_a1 * 8);
            var_a1 += 1;
            M2C_FIELD(temp_a0, s32 *, 0x20) = 0;
            M2C_FIELD(temp_a0, s32 *, 0x24) = 0;
            M2C_FIELD((temp_v0 + temp_v0_2), s32 *, 0x30) = 0;
        } while (var_a1 < 2);
        M2C_FIELD(temp_v0, f32 *, 0x38) = 0.0f;
        M2C_FIELD(temp_v0, s8 *, 0x3C) = 0;
        M2C_FIELD(temp_v0, f32 *, 0x40) = 0.0f;
        M2C_FIELD(temp_v0, s8 *, 0x44) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x47) = 1;
        if (func_0081A340(temp_v0, arg0) != 0) {
            return temp_v0;
        }
        if (temp_v0 != NULL) {
            if (temp_v0 != NULL) {
                if (temp_v0 != NULL) {
                    M2C_FIELD(temp_v0, s8 *, 0x45) = 0;
                    M2C_FIELD(temp_v0, s8 *, 0x46) = 0;
                    M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
                    M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
                }
                if (temp_v0 != NULL) {
                    M2C_FIELD(temp_v0, s32 *, 0) = 0;
                }
                temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 8);
                if (temp_a0_2 != 0) {
                    func_001D7F10(temp_a0_2);
                    M2C_FIELD(temp_v0, s32 *, 8) = 0;
                }
            }
            func_00153FA0(temp_v0);
        }
        goto block_18;
    }
block_18:
    return NULL;
}
