/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D7F10(s32);                         /* extern */
M2C_UNK func_0099C7C0(void *);                      /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
s32 func_009BD020(void *, s32, s32);                /* extern */

void *func_009BD1A0(s32 arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    void *temp_v0;

    temp_v0 = func_0099C7E0(0x1F0);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x1E8) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x1E2) = 1;
        M2C_FIELD(temp_v0, s32 *, 0x20) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x24) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x28) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x2C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x30) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x34) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x38) = 0;
        func_001C48E8(temp_v0 + 0x148, 0, 0x93);
        M2C_FIELD(temp_v0, s32 *, 0x1DC) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x1E0) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x1E1) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x1E3) = -1;
        M2C_FIELD(temp_v0, s8 *, 0x1E9) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x1E4) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x1E5) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x1E6) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x1E7) = 0;
        if (func_009BD020(temp_v0, arg0, arg1) == 1) {
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
                M2C_FIELD(temp_v0, s8 *, 0x1E8) = 1;
            }
            M2C_FIELD(temp_v0, s32 *, 0) = 0;
        }
        if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, s8 *, 0x1E2) != 0)) {
            M2C_FIELD(temp_v0, s8 *, 0x1E2) = 0;
            M2C_FIELD(temp_v0, s8 *, 0x1E8) = 1;
        }
        M2C_FIELD(temp_v0, s8 *, 0x1E8) = 1;
        return temp_v0;
    }
    return NULL;
}
