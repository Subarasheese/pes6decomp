/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00221210(int, int, int, int);
s32 func_00246550(M2C_UNK, u8);                     /* extern */
extern void *D_003EA4D0;

void func_008CC840(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 temp_a1;
    void *temp_s0;

    temp_s0 = D_003EA4D0;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s32 *, 0xA8) = 0;
        temp_a1 = M2C_FIELD(func_00221210(arg0, arg1, arg2, arg3), u8 *, 1);
        M2C_FIELD(temp_s0, s32 *, 0xAC) = (s32) temp_a1;
        M2C_FIELD(temp_s0, s32 *, 0xB0) = 2;
        M2C_FIELD(temp_s0, s32 *, 0xB4) = 0;
        M2C_FIELD(temp_s0, s32 *, 0xB8) = 0;
        M2C_FIELD(temp_s0, s32 *, 0xC0) = 1;
        M2C_FIELD(temp_s0, s32 *, 0xBC) = 0;
        M2C_FIELD(temp_s0, s32 *, 0xC4) = 0;
        M2C_FIELD(temp_s0, s8 *, 0xA4) = 0;
        if (func_00246550(0xAA, temp_a1) != 0) {
            M2C_FIELD(temp_s0, u8 *, 0xD6) = 1U;
        } else {
            M2C_FIELD(temp_s0, u8 *, 0xD6) = 0U;
        }
        M2C_FIELD(temp_s0, s32 *, 0xE0) = 1;
        if (M2C_FIELD(temp_s0, u8 *, 0xD6) != 1) {
            M2C_FIELD(temp_s0, s8 *, 0xC8) = 1;
            M2C_FIELD(temp_s0, s8 *, 0xC9) = 1;
            M2C_FIELD(temp_s0, s8 *, 0xCF) = 0;
        } else {
            M2C_FIELD(temp_s0, s8 *, 0xC8) = 0;
            M2C_FIELD(temp_s0, s8 *, 0xC9) = 0;
            M2C_FIELD(temp_s0, s8 *, 0xCF) = 0;
        }
        M2C_FIELD(temp_s0, s8 *, 0xD0) = 1;
        M2C_FIELD(temp_s0, s8 *, 0xCA) = 2;
        M2C_FIELD(temp_s0, s8 *, 0xCB) = 2;
        M2C_FIELD(temp_s0, s8 *, 0xCC) = 3;
        M2C_FIELD(temp_s0, s8 *, 0xCD) = 2;
        M2C_FIELD(temp_s0, s8 *, 0xCE) = 3;
        M2C_FIELD(temp_s0, s8 *, 0xD1) = 2;
        M2C_FIELD(temp_s0, s8 *, 0xD2) = 3;
        M2C_FIELD(temp_s0, s8 *, 0xD3) = 4;
        M2C_FIELD(temp_s0, s8 *, 0xD4) = 5;
        M2C_FIELD(temp_s0, s8 *, 0xD5) = 6;
        M2C_FIELD(temp_s0, s8 *, 0xD7) = 0;
        M2C_FIELD(temp_s0, s8 *, 0xD8) = 1;
        M2C_FIELD(temp_s0, s8 *, 0xD9) = 2;
        M2C_FIELD(temp_s0, s8 *, 0xDA) = 3;
        M2C_FIELD(temp_s0, s8 *, 0xDB) = 4;
        M2C_FIELD(temp_s0, s8 *, 0xDC) = 5;
        M2C_FIELD(temp_s0, s8 *, 0xDD) = 6;
        M2C_FIELD(temp_s0, s8 *, 0x20C) = 1;
    }
}
