/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00994C60(u8, u8);                        /* extern */
s8 func_00B04FA0(u8, u16);                          /* extern */
s16 func_00B05210(u16, M2C_UNK, u8, M2C_UNK, u16, M2C_UNK, u8, M2C_UNK); /* extern */
s16 func_00B05280(u16);                             /* extern */

void func_00B18860(void *arg0, void *arg1) {
    u16 temp_a4;
    u8 temp_a0;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_a6;
    void *temp_v0;

    if ((arg1 != NULL) && (arg0 != NULL)) {
        temp_a0 = M2C_FIELD(arg0, u8 *, 0);
        if ((s32) temp_a0 < 0x48) {
            temp_a1 = M2C_FIELD(arg0, u8 *, 1);
            if ((s32) temp_a1 < 0x25) {
                temp_v0 = func_00994C60(temp_a0, temp_a1);
                if (temp_v0 != NULL) {
                    M2C_FIELD(arg1, u16 *, 4) = (u16) M2C_FIELD(temp_v0, u16 *, 4);
                    M2C_FIELD(arg1, u8 *, 0) = (u8) ((M2C_FIELD(arg1, u8 *, 0) & ~1) | 1);
                    temp_a6 = M2C_FIELD(arg1, u8 *, 0);
                    M2C_FIELD(arg1, u8 *, 0) = (u8) ((temp_a6 & ~0x7E) | 0x12);
                    temp_a4 = (u16) M2C_FIELD(arg1, u8 *, 0);
                    M2C_FIELD(arg1, u8 *, 0) = (s16) ((temp_a4 & ~0x780) | 0x100);
                    temp_a2 = M2C_FIELD(arg1, u8 *, 1);
                    M2C_FIELD(arg1, u8 *, 1) = (u8) ((temp_a2 & ~0x78) | 8);
                    M2C_FIELD(arg1, u8 *, 1) = (u8) ((M2C_FIELD(arg1, u8 *, 1) & ~0x80) | ((0 & 1) << 7));
                    M2C_FIELD(arg1, s16 *, 6) = func_00B05210(M2C_FIELD(temp_v0, u16 *, 4), 8, temp_a2, 0x100, temp_a4, 0x12, temp_a6, 1);
                    M2C_FIELD(arg1, s16 *, 8) = func_00B05280(M2C_FIELD(temp_v0, u16 *, 4));
                    M2C_FIELD(arg1, s8 *, 0xE) = func_00B04FA0(M2C_FIELD(arg0, u8 *, 0), M2C_FIELD(temp_v0, u16 *, 4));
                    M2C_FIELD(arg1, s16 *, 0xA) = 0;
                    M2C_FIELD(arg1, s16 *, 0xC) = 0;
                }
            }
        }
    }
}
