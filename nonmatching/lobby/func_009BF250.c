/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_0099C7C0(void *);                      /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */

void *func_009BF250(s32 arg0) {
    s32 var_v1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_v0;

    temp_v0 = func_0099C7E0(0x34);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, void **, 4) = NULL;
        M2C_FIELD(temp_v0, void **, 8) = NULL;
        M2C_FIELD(temp_v0, void **, 0xC) = NULL;
        M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x33) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x30) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x31) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x32) = -1;
        M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x20) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x24) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x28) = 0;
        if (temp_v0 != NULL) {
            if (arg0 != 0) {
                var_v1 = 0;
            } else {
                goto block_8;
            }
        } else {
block_8:
            var_v1 = 4;
        }
        if (var_v1 == 4) {
            if (temp_v0 == NULL) {
                return NULL;
            }
            temp_a0 = M2C_FIELD(temp_v0, void **, 4);
            if (temp_a0 != NULL) {
                func_001D7F10(temp_a0);
                M2C_FIELD(temp_v0, void **, 4) = NULL;
            }
            temp_a0_2 = M2C_FIELD(temp_v0, void **, 8);
            if (temp_a0_2 != NULL) {
                func_001D7F10(temp_a0_2);
                M2C_FIELD(temp_v0, void **, 8) = NULL;
            }
            temp_a0_3 = M2C_FIELD(temp_v0, void **, 0xC);
            if (temp_a0_3 != NULL) {
                func_001D7F10(temp_a0_3);
                M2C_FIELD(temp_v0, void **, 0xC) = NULL;
            }
            func_0099C7C0(temp_v0);
            return NULL;
        }
        if (temp_v0 != NULL) {
            if (M2C_FIELD(temp_v0, s32 *, 0) != 1) {
                M2C_FIELD(temp_v0, s8 *, 0x33) = 1;
            }
            M2C_FIELD(temp_v0, s32 *, 0) = 1;
        }
        if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, s8 *, 0x30) != 0)) {
            M2C_FIELD(temp_v0, s8 *, 0x30) = 0;
            M2C_FIELD(temp_v0, s8 *, 0x33) = 1;
        }
        if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, s8 *, 0x31) != 0)) {
            M2C_FIELD(temp_v0, s8 *, 0x31) = 0;
            M2C_FIELD(temp_v0, s8 *, 0x33) = 1;
        }
        M2C_FIELD(temp_v0, s8 *, 0x33) = 1;
        return temp_v0;
    }
    return NULL;
}
