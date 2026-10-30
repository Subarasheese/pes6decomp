/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
extern s32 func_002DB830(void *);
M2C_UNK func_001D7A20(s32, f32 *, M2C_UNK);         /* extern */
M2C_UNK func_008B9D60(s32, f32 *, void *, s32);     /* extern */
s32 func_008B9F20(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_008C1490(M2C_UNK, f32 *);                  /* extern */
s32 func_008C4F50(u8, u8);                          /* extern */

void func_008CF8D0(void *arg0, s32 arg1) {
    f32 sp90;
    f32 sp94;
    f32 spA0;
    f32 spA4;
    f32 *var_a0;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_v1;
    s32 var_s4;
    s32 var_s6;
    s32 var_v1;
    u8 temp_a0;
    u8 temp_v1_2;
    void *temp_a0_2;
    void *temp_s2;
    void *temp_s7;
    void *var_s3;

    var_v1 = 0x10;
    var_a0 = &sp90;
    if (var_a0 != NULL) {
        do {
            *var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 1;
        } while (var_v1 != 0);
    }
    if (arg1 != 0) {
        temp_s2 = M2C_FIELD(arg0, void **, 0x34);
        if (temp_s2 != NULL) {
            if (M2C_FIELD(arg0, s32 *, 0x1FC) == 0) {
                func_001D7A20(M2C_FIELD(arg0, s32 *, 0x1F4), &spA0, 0x71);
                sp90 = spA0;
                sp94 = spA4;
                M2C_FIELD(arg0, s32 *, 0x1FC) = func_008C1490(0x19, &sp90);
            }
            func_001D7A20(M2C_FIELD(arg0, s32 *, 0x1FC), &spA0, 0x77);
            temp_s3 = func_002DB830(M2C_FIELD(arg0, void **, 0x1D4)) & 0xFF;
            temp_s7 = func_001E6E10(0x4EDC);
            temp_a0 = M2C_FIELD(arg0, u8 *, 5);
            var_s6 = -(s32) temp_a0;
            temp_s5 = func_008B9F20(arg1, 1, 0);
            if (var_s6 < (M2C_FIELD(arg0, u8 *, 4) + temp_a0)) {
                temp_v1 = temp_s3 & 0xFF;
                var_s4 = var_s6 + temp_v1;
                var_s3 = temp_s2 + temp_v1 + var_s6;
                do {
                    if ((var_s4 >= 0) && (var_s4 < (s32) M2C_FIELD(temp_s2, u8 *, 0x21))) {
                        temp_v1_2 = M2C_FIELD(var_s3, u8 *, 1);
                        if ((s32) temp_v1_2 < 0x20) {
                            temp_a0_2 = temp_s2 + temp_v1_2;
                            if (M2C_FIELD(temp_a0_2, u8 *, 0x1F0) == 0) {
                                spA4 = (f32) ((s32) spA4 + (M2C_FIELD(arg0, u8 *, 6) * var_s6));
                                func_008B9D60(temp_s5, &spA0, temp_s7, func_008C4F50(M2C_FIELD(temp_a0_2, u8 *, 0x130), M2C_FIELD(arg0, u8 *, 0)));
                            }
                        }
                    }
                    var_s6 += 1;
                    var_s4 += 1;
                    var_s3 += 1;
                } while (var_s6 < (M2C_FIELD(arg0, u8 *, 4) + M2C_FIELD(arg0, u8 *, 5)));
            }
        }
    }
}
