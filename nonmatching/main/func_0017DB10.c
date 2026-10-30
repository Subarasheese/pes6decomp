/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001432B0(void *, void *, s32);
void func_0017DB10(void *arg0, s32 arg1, f32 fparg0, f32 fparg1) {
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v1;

    var_s3 = 0;
    if (M2C_FIELD(arg0, s8 *, 4) > 0) {
        var_s2 = 0;
        do {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) + var_s2;
            temp_v0_2 = func_001432B0(M2C_FIELD(temp_v0, void **, 0), M2C_FIELD(temp_v0, void **, 4), arg1);
            if (temp_v0_2 != NULL) {
                M2C_FIELD(temp_v0_2, f32 *, 0x30) = fparg0;
                M2C_FIELD(temp_v0_2, f32 *, 0x34) = fparg1;
            }
            var_s3 += 1;
            var_s2 += 8;
        } while (var_s3 < M2C_FIELD(arg0, s8 *, 4));
    }
    var_s2_2 = 0;
    if (M2C_FIELD(arg0, s8 *, 5) > 0) {
        var_s3_2 = 0;
        do {
            temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x18) + var_s3_2;
            temp_v0_4 = func_001432B0(M2C_FIELD(temp_v0_3, void **, 4), M2C_FIELD(temp_v0_3, void **, 8), arg1);
            if (temp_v0_4 != NULL) {
                M2C_FIELD(temp_v0_4, f32 *, 0x30) = fparg0;
                M2C_FIELD(temp_v0_4, f32 *, 0x34) = fparg1;
            }
            var_s2_2 += 1;
            var_s3_2 += 0x1C;
        } while (var_s2_2 < M2C_FIELD(arg0, s8 *, 5));
    }
    var_s2_3 = 0;
    if (M2C_FIELD(arg0, s8 *, 6) > 0) {
        var_s3_3 = 0;
        do {
            temp_v0_5 = M2C_FIELD(arg0, s32 *, 0x1C) + var_s3_3;
            temp_v0_6 = func_001432B0(M2C_FIELD(temp_v0_5, void **, 4), M2C_FIELD(temp_v0_5, void **, 8), arg1);
            if (temp_v0_6 != NULL) {
                M2C_FIELD(temp_v0_6, f32 *, 0x30) = fparg0;
                M2C_FIELD(temp_v0_6, f32 *, 0x34) = fparg1;
            }
            var_s2_3 += 1;
            var_s3_3 += 0x14;
        } while (var_s2_3 < M2C_FIELD(arg0, s8 *, 6));
    }
    var_s2_4 = 0;
    if (M2C_FIELD(arg0, s8 *, 7) > 0) {
        var_s3_4 = 0;
        do {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x20) + var_s3_4;
            temp_a0 = M2C_FIELD(temp_v1, void **, 8);
            if (temp_a0 != NULL) {
                temp_v0_7 = func_001432B0(temp_a0, M2C_FIELD(temp_v1, void **, 0), arg1);
                if (temp_v0_7 != NULL) {
                    M2C_FIELD(temp_v0_7, f32 *, 0x30) = fparg0;
                    M2C_FIELD(temp_v0_7, f32 *, 0x34) = fparg1;
                }
            }
            var_s2_4 += 1;
            var_s3_4 += 0x14;
        } while (var_s2_4 < M2C_FIELD(arg0, s8 *, 7));
    }
}
