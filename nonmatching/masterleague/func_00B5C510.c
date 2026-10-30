/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B5B230(void);
M2C_UNK func_00939220();                            /* extern */
void *func_009946E0(u8, u8);                        /* extern */
M2C_UNK func_00994A70();                            /* extern */
void *func_00994C60(u8, u8);                        /* extern */
M2C_UNK func_00AFA810(void *);                      /* extern */
M2C_UNK func_00B1A760(u8, u16);                     /* extern */
M2C_UNK func_00B1BE60();                            /* extern */
M2C_UNK func_00B1D610();                            /* extern */
void *func_00B5ACA0(u8, u8 *);                      /* extern */
s16 func_00B5AF00(u8);                              /* extern */
M2C_UNK func_00B5B2C0();                            /* extern */
void *func_00B5B540(u8, M2C_UNK);                   /* extern */
M2C_UNK func_00B5C770(u32, u8, u8, M2C_UNK);        /* extern */

s32 func_00B5C510(void) {
    f32 sp50;
    f32 sp54;
    f32 sp58;
    f32 sp5C;
    u8 sp6F;
    s32 temp_v1_2;
    s32 var_a0;
    u32 temp_v0;
    u32 var_v1;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_s0;
    u8 temp_s1;
    u8 temp_v1;
    u8 var_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_v0 = func_00B5B230();
    if (temp_v0 == 0) {
        goto block_44;
    }
    if (M2C_FIELD(temp_v0, u8 *, 0x62A) == 0) {
        temp_v1 = M2C_FIELD(temp_v0, u8 *, 0x62B);
        switch (temp_v1) {                          /* irregular */
        case 0:
            var_a0 = 0;
            var_v1 = temp_v0;
loop_10:
            if (M2C_FIELD(var_v1, u16 *, 0x840) == 0) {
                var_a0 += 1;
                var_v1 += 2;
                if (var_a0 >= 0x2A) {

                } else {
                    goto loop_10;
                }
            }
            if (var_a0 < 0x2A) {
                var_v0 = 7;
block_43:
                M2C_FIELD(temp_v0, u8 *, 0x62A) = var_v0;
                goto block_44;
            }
            M2C_FIELD(temp_v0, u8 *, 0x62A) = 5U;
            return 0;
        case 1:
            if (M2C_FIELD(temp_v0, s16 *, 0x628) != 0) {
                M2C_FIELD(temp_v0, u8 *, 0x62B) = 0U;
                var_v0 = 6;
                goto block_43;
            }
            temp_v0_2 = func_00B5ACA0(M2C_FIELD(temp_v0, u8 *, 0x632), &sp6F);
            if (temp_v0_2 == NULL) {
                M2C_FIELD(temp_v0, u8 *, 0x62B) = 0U;
                M2C_FIELD(temp_v0, u8 *, 0x62A) = 6U;
            } else {
                temp_a0 = (u8) M2C_FIELD(temp_v0_2, f32 *, 0);
                temp_s1 = M2C_FIELD(temp_v0, u8 *, 0x630);
                temp_s0 = M2C_FIELD(temp_v0, u8 *, 0x632);
                sp50 = M2C_FIELD(temp_v0_2, f32 *, 0);
                temp_v1_2 = temp_a0 & 1;
                sp54 = M2C_FIELD(temp_v0_2, f32 *, 4);
                sp58 = M2C_FIELD(temp_v0_2, f32 *, 8);
                sp5C = M2C_FIELD(temp_v0_2, f32 *, 0xC);
                if (temp_v1_2 == 0) {
                    func_00AFA810(temp_v0_2);
                    temp_v0_3 = func_009946E0(M2C_FIELD(temp_v0, u8 *, 0x62E), sp6F);
                    if (temp_v0_3 != NULL) {
                        temp_a0_2 = M2C_FIELD(temp_v0_3, u8 *, 2);
                        if (temp_a0_2 != 0xFF) {
                            func_00AFA810(func_00994C60(temp_a0_2, M2C_FIELD(temp_v0_3, u8 *, 3)));
                        }
                    }
                    if (((u64) ((s64) (u8) sp50 << 0x39) >> 0x3A) != 6) {
                        func_00994A70();
                    }
                    func_00939220();
                    func_00B1BE60();
                    func_00B1D610();
                    goto block_41;
                }
                if (temp_v1_2 == 1) {
                    if (((u64) ((s64) temp_a0 << 0x39) >> 0x3A) != 8) {
                        temp_v0_4 = func_00B5B540(sp6F, 0);
                        if (temp_v0_4 != NULL) {
                            M2C_FIELD(temp_v0_2, u8 *, 1) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 1) & ~0x78) | 0x18);
                            M2C_FIELD(temp_v0_4, u8 *, 1) = (u8) ((M2C_FIELD(temp_v0_4, u8 *, 1) & ~0x78) | 0x18);
                            goto block_41;
                        }
                        M2C_FIELD(temp_v0, u8 *, 0x62B) = 0U;
                        M2C_FIELD(temp_v0, u8 *, 0x62A) = 6U;
                    } else {
                        func_00B1A760(M2C_FIELD(temp_v0, u8 *, 0x62E), (u16) M2C_FIELD(temp_v0_2, f32 *, 4));
                        func_00B5B2C0();
                        goto block_41;
                    }
                } else {
block_41:
                    M2C_FIELD(temp_v0, u8 *, 0x630) = func_00B5AF00(M2C_FIELD(temp_v0, u8 *, 0x62E));
                    func_00B5C770(temp_v0, temp_s1, temp_s0, 1);
                    M2C_FIELD(temp_v0, u8 *, 0x62B) = 0U;
                    var_v0 = 4;
                    goto block_43;
                }
            }
            goto block_44;
        }
    } else {
block_44:
        return 0;
    }
}
