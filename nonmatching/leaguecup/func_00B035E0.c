/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern s32 func_00226710(void);
extern s32 func_002260F0(s32);
s32 func_00226240(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_00939730();                            /* extern */
M2C_UNK func_009398F0();                            /* extern */
M2C_UNK func_00B00700();                            /* extern */
M2C_UNK func_00B01FE0();                            /* extern */
M2C_UNK func_00B02930();                            /* extern */
M2C_UNK func_00B02FA0();                            /* extern */
extern void *D_003EAD54;

void func_00B035E0(void) {
    s16 temp_v1;
    s32 temp_s1;
    s32 var_a1;
    s32 var_a1_2;
    s8 var_v1;
    void *temp_s0;
    void *var_a2;
    void *var_a3;
    void *var_v0;

    temp_s0 = D_003EAD54;
    temp_s1 = func_00225820() & 0xFF;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s32 *, 0x5E8) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x5E4) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x5EC) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x5C4) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x5D2) = 6;
        M2C_FIELD(temp_s0, s16 *, 0x29DE6) = 3;
        M2C_FIELD(temp_s0, s8 *, 0x5C6) = 6;
        M2C_FIELD(temp_s0, s32 *, 0x5D4) = -1;
        M2C_FIELD(temp_s0, s8 *, 0x5F4) = 1;
        M2C_FIELD(temp_s0, s32 *, 0x29DE8) = 0;
        if ((func_00226240(-1, 6) & 0xFF) != 4) {
            M2C_FIELD(temp_s0, s32 *, 0x29DF0) = 1;
            M2C_FIELD(temp_s0, s32 *, 0x80C) = 0;
        } else {
            M2C_FIELD(temp_s0, s32 *, 0x29DF0) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x80C) = 1;
        }
        M2C_FIELD(temp_s0, s32 *, 0x810) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x814) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x898) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x89C) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x29DEC) = 0;
        func_00B00700();
        func_009398F0();
        func_00939730();
        func_00B02FA0();
        func_00B02930();
        func_00B01FE0();
        if ((func_00226710() & 0xFF) != 0x2C) {
            if ((func_00226710() & 0xFF) != 0x38) {
                var_a1 = M2C_FIELD(temp_s0, s32 *, 0x29A4C) + 5;
            } else {
                goto block_10;
            }
        } else {
block_10:
            var_a1 = M2C_FIELD(temp_s0, s32 *, 0x29A4C);
        }
        if ((var_a1 % 23) != 0) {
            var_v0 = temp_s0 + 0x30000;
            var_v1 = (var_a1 / 23) + ((u32) var_a1 >> 0x1F) + 1;
        } else {
            var_v0 = temp_s0 + 0x30000;
            var_v1 = (var_a1 / 23) + ((u32) var_a1 >> 0x1F);
        }
        M2C_FIELD(var_v0, s8 *, -0x65B0) = var_v1;
        var_a3 = func_002260F0(temp_s1) + 0x4C;
        var_a2 = temp_s0 + 0x8A0;
        var_a1_2 = 0x5B;
        do {
            var_a1_2 -= 1;
            temp_v1 = M2C_FIELD(var_a3, s16 *, 2);
            M2C_FIELD(var_a2, s16 *, 0) = (s16) M2C_FIELD(var_a3, s16 *, 0);
            var_a3 += 4;
            M2C_FIELD(var_a2, s16 *, 2) = temp_v1;
            var_a2 += 4;
        } while (var_a1_2 > 0);
        M2C_FIELD(temp_s0, s8 *, 0x29F7C) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x29F98) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x29F84) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x29F9C) = 0;
    }
}
