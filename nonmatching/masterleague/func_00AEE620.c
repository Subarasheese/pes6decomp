/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AF0980(void);
extern s32 func_00AF0910(s32, s32);
M2C_UNK func_0020E310(M2C_UNK, s8 *);               /* extern */
s32 func_0094C7B0();                                /* extern */
M2C_UNK func_009737A0(s32, s8 *);                   /* extern */
s32 func_00AF0610(s32);                             /* extern */
s32 func_00AF0930(u8);                              /* extern */

void func_00AEE620(s32 arg0) {
    s8 sp68;
    s8 sp69;
    s8 sp6A;
    s8 sp6B;
    s8 sp6C;
    s8 sp6D;
    s8 sp6E;
    s8 sp6F;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s3;
    u32 temp_v0;
    void *temp_s2;
    void *temp_s4;

    temp_v0 = func_00AF0980();
    if (temp_v0 != 0) {
        temp_a0 = func_00AF0930(M2C_FIELD(temp_v0, u8 *, 0x185)) & 0xFF;
        if (M2C_FIELD(temp_v0, s32 *, 0x2D0) != 0) {
            var_s3 = temp_a0 & 0xFF;
            var_s0 = 0;
            if (var_s3 > 0) {
                do {
                    if (func_00AF0610(func_00AF0910((s32) M2C_FIELD(temp_v0, u8 *, 0x185), var_s0)) == 0) {
                        func_0020E310(4, &sp6C);
                        func_0020E310(4, &sp68);
                    } else {
                        func_0020E310(2, &sp6C);
                        sp68 = 0xFF;
                        sp69 = 0xFF;
                        sp6A = 0xFF;
                        sp6B = 0xFF;
                    }
                    temp_s2 = temp_v0 + ((var_s0 & 0xFF) * 4);
                    temp_a0_2 = M2C_FIELD(temp_s2, s32 *, 8);
                    if (temp_a0_2 != 0) {
                        func_009737A0(temp_a0_2, &sp6C);
                        func_009737A0(M2C_FIELD(temp_s2, s32 *, 0x3C), &sp6C);
                    }
                    var_s0 = (var_s0 + 1) & 0xFF;
                } while (var_s0 < var_s3);
            }
        } else {
            var_s3 = temp_a0 & 0xFF;
            var_s2 = 0;
            if (var_s3 > 0) {
                do {
                    if (func_00AF0610(func_00AF0910((s32) M2C_FIELD(temp_v0, u8 *, 0x185), var_s2)) == 0) {
                        func_0020E310(4, &sp6C);
                        func_0020E310(4, &sp68);
                    } else {
                        if ((arg0 & 0xFF) == (var_s2 & 0xFF)) {
                            func_0020E310(3, &sp6C);
                        } else {
                            func_0020E310(2, &sp6C);
                        }
                        sp68 = 0xFF;
                        sp69 = 0xFF;
                        sp6A = 0xFF;
                        sp6B = 0xFF;
                    }
                    temp_s4 = temp_v0 + ((var_s2 & 0xFF) * 4);
                    temp_a0_3 = M2C_FIELD(temp_s4, s32 *, 8);
                    if (temp_a0_3 != 0) {
                        func_009737A0(temp_a0_3, &sp6C);
                        func_009737A0(M2C_FIELD(temp_s4, s32 *, 0x3C), &sp6C);
                    }
                    var_s2 = (var_s2 + 1) & 0xFF;
                } while (var_s2 < var_s3);
            }
        }
        if (func_0094C7B0() == 0xD) {
            var_s0_2 = 0;
            if (var_s3 > 0) {
                do {
                    temp_v0_2 = func_00AF0910((s32) M2C_FIELD(temp_v0, u8 *, 0x185), var_s0_2);
                    if ((temp_v0_2 != 7) && (temp_v0_2 != 5) && (temp_v0_2 != 3) && (temp_v0_2 != 2)) {

                    } else {
                        sp6C = 0x1A;
                        sp6D = 0x4D;
                        sp6E = 0x80;
                        sp6F = 0xFF;
                        func_009737A0(M2C_FIELD((temp_v0 + ((var_s0_2 & 0xFF) * 4)), s32 *, 8), &sp6C);
                    }
                    var_s0_2 = (var_s0_2 + 1) & 0xFF;
                } while (var_s0_2 < var_s3);
            }
        }
    }
}
