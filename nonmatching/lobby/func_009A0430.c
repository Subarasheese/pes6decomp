/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001D7F10(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
s32 func_009A01E0(void *, s32);                     /* extern */

void *func_009A0430(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    void *temp_v0;

    temp_v0 = func_0099C7E0(0x104);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x28) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x20) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x2C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x24) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x38) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x100) = 1;
        M2C_FIELD(temp_v0, s8 *, 0xFE) = 1;
        M2C_FIELD(temp_v0, s32 *, 0xE8) = 0;
        M2C_FIELD(temp_v0, s32 *, 0xEC) = 0;
        M2C_FIELD(temp_v0, s32 *, 0xF0) = 0;
        M2C_FIELD(temp_v0, s32 *, 0xF4) = 0;
        M2C_FIELD(temp_v0, s8 *, 0xFF) = -1;
        M2C_FIELD(temp_v0, s32 *, 0x3C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x44) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x48) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x50) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x40) = 0;
        if (func_009A01E0(temp_v0, arg0) == 1) {
            if (temp_v0 == NULL) {
                return NULL;
            }
            temp_a0 = M2C_FIELD(temp_v0, s32 *, 4);
            if (temp_a0 != 0) {
                func_001D7F10(temp_a0);
                M2C_FIELD(temp_v0, s32 *, 4) = 0;
            }
            temp_a0_2 = M2C_FIELD(temp_v0, s32 *, 8);
            if (temp_a0_2 != 0) {
                func_001D7F10(temp_a0_2);
                M2C_FIELD(temp_v0, s32 *, 8) = 0;
            }
            func_0099C7C0(temp_v0);
            return NULL;
        }
        if (temp_v0 != NULL) {
            if (M2C_FIELD(temp_v0, s32 *, 0) != 0) {
                M2C_FIELD(temp_v0, s8 *, 0x100) = 1;
            }
            M2C_FIELD(temp_v0, s32 *, 0) = 0;
        }
        if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, s8 *, 0xFE) != 0)) {
            M2C_FIELD(temp_v0, s8 *, 0xFE) = 0;
            M2C_FIELD(temp_v0, s8 *, 0x100) = 1;
        }
        M2C_FIELD(temp_v0, s8 *, 0x100) = 1;
        return temp_v0;
    }
    return NULL;
}
