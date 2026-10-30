/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002260A0(void);
s8 func_0022F210(M2C_UNK, s32, u8, s32, u8);        /* extern */

void func_00986830(s32 arg0, s32 arg1) {
    M2C_UNK var_s4;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_s2;
    u8 temp_a2;
    u8 temp_a4;
    void *temp_a1_2;
    void *temp_s0;
    void *temp_v0;

    var_s4 = 0x1C;
    temp_v0 = func_002260A0();
    if (temp_v0 != NULL) {
        temp_a0 = arg1 & 0xFFFF;
        if (temp_a0 < 0x400) {
            switch (temp_a0) {                      /* irregular */
            case 0:
                break;
            case 2:
                var_s4 = 0x24;
                break;
            case 1:
                var_s4 = 0x1D;
                break;
            case 3:
                var_s4 = 0x27;
                break;
            }
            temp_s2 = (arg0 & 0xFF) * 4;
            temp_s1 = (arg1 & 0xFFFF) * 0x1A;
            temp_s0 = temp_v0 + temp_s1 + temp_s2;
            if ((temp_s0 + 0x19B2A) != NULL) {
                temp_a3 = (0 & 0xF) * 0x10;
                M2C_FIELD(temp_s0, u8 *, 0x19B2A) = (u8) ((M2C_FIELD(temp_s0, u8 *, 0x19B2A) & ~1) | (0 & 1));
                temp_a4 = M2C_FIELD(temp_s0, u8 *, 0x19B2A);
                temp_a1 = (0 & 7) * 2;
                M2C_FIELD(temp_s0, u8 *, 0x19B2A) = (u8) ((temp_a4 & ~0xF0) | temp_a3);
                temp_a2 = M2C_FIELD(temp_s0, u8 *, 0x19B2A);
                M2C_FIELD(temp_s0, u8 *, 0x19B2A) = (u8) ((temp_a2 & ~0xE) | temp_a1);
                temp_a1_2 = temp_s2 + (temp_s1 + temp_v0);
                M2C_FIELD(temp_a1_2, s8 *, 0x19B2B) = func_0022F210(var_s4, temp_a1, temp_a2, temp_a3, temp_a4);
                M2C_FIELD(temp_a1_2, s8 *, 0x19B2C) = 0;
                M2C_FIELD(temp_s0, u8 *, 0x19B2D) = (u8) ((M2C_FIELD(temp_s0, u8 *, 0x19B2D) & ~0x3F) | (0 & 0x3F));
                M2C_FIELD(temp_s0, u8 *, 0x19B2D) = (u8) ((M2C_FIELD(temp_s0, u8 *, 0x19B2D) & ~0x80) | ((0 & 1) << 7));
            }
        }
    }
}
