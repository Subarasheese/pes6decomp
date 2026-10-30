/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0099C7E0(M2C_UNK);                       /* extern */
M2C_UNK func_0099F000(void *);                      /* extern */
s32 func_0099F0C0(void *, s32);                     /* extern */

void *func_0099F310(s32 arg0, s32 arg1) {
    void *temp_v0;

    temp_v0 = func_0099C7E0(0x98);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0) = 0;
        M2C_FIELD(temp_v0, s32 *, 4) = 0;
        M2C_FIELD(temp_v0, s32 *, 8) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x24) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x28) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x2C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x30) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x34) = 0;
        M2C_FIELD(temp_v0, s8 *, 0x97) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x94) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x95) = 1;
        M2C_FIELD(temp_v0, s8 *, 0x96) = -1;
        M2C_FIELD(temp_v0, s32 *, 0x38) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x3C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x40) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x44) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x68) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x48) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x50) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x54) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x6C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x58) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x5C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x60) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x64) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x70) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x74) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x78) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x7C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x80) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x84) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x88) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x8C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x90) = 0;
        if (func_0099F0C0(temp_v0, arg0) == 5) {
            func_0099F000(temp_v0);
            return NULL;
        }
        if (temp_v0 != NULL) {
            if (M2C_FIELD(temp_v0, s32 *, 0x34) != arg1) {
                M2C_FIELD(temp_v0, s8 *, 0x97) = 1;
            }
            if (arg1 >= 0) {
                if (arg1 < 3) {
                    M2C_FIELD(temp_v0, s32 *, 0x34) = arg1;
                } else {
                    M2C_FIELD(temp_v0, s32 *, 0x34) = 2;
                }
            } else {
                M2C_FIELD(temp_v0, s32 *, 0x34) = 0;
            }
        }
        if (temp_v0 != NULL) {
            if (M2C_FIELD(temp_v0, s32 *, 0) != 1) {
                M2C_FIELD(temp_v0, s8 *, 0x97) = 1;
            }
            M2C_FIELD(temp_v0, s32 *, 0) = 1;
        }
        if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, s8 *, 0x94) != 0)) {
            M2C_FIELD(temp_v0, s8 *, 0x94) = 0;
            M2C_FIELD(temp_v0, s8 *, 0x97) = 1;
        }
        if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, s8 *, 0x95) != 0)) {
            M2C_FIELD(temp_v0, s8 *, 0x95) = 0;
            M2C_FIELD(temp_v0, s8 *, 0x97) = 1;
        }
        M2C_FIELD(temp_v0, s8 *, 0x97) = 1;
        return temp_v0;
    }
    return NULL;
}
