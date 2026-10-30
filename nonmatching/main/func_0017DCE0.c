/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00143300(void *, void *, s32, u8);
void func_0017DCE0(void *arg0, s32 arg1, u8 arg2) {
    s32 var_s3;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_s4_4;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1;

    var_s4 = 0;
    if (M2C_FIELD(arg0, s8 *, 4) > 0) {
        var_s3 = 0;
        do {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x14) + var_s3;
            func_00143300(M2C_FIELD(temp_v0, void **, 0), M2C_FIELD(temp_v0, void **, 4), arg1, arg2);
            var_s4 += 1;
            var_s3 += 8;
        } while (var_s4 < M2C_FIELD(arg0, s8 *, 4));
    }
    var_s3_2 = 0;
    if (M2C_FIELD(arg0, s8 *, 5) > 0) {
        var_s4_2 = 0;
        do {
            temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x18) + var_s4_2;
            func_00143300(M2C_FIELD(temp_v0_2, void **, 4), M2C_FIELD(temp_v0_2, void **, 8), arg1, arg2);
            var_s3_2 += 1;
            var_s4_2 += 0x1C;
        } while (var_s3_2 < M2C_FIELD(arg0, s8 *, 5));
    }
    var_s3_3 = 0;
    if (M2C_FIELD(arg0, s8 *, 6) > 0) {
        var_s4_3 = 0;
        do {
            temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x1C) + var_s4_3;
            func_00143300(M2C_FIELD(temp_v0_3, void **, 4), M2C_FIELD(temp_v0_3, void **, 8), arg1, arg2);
            var_s3_3 += 1;
            var_s4_3 += 0x14;
        } while (var_s3_3 < M2C_FIELD(arg0, s8 *, 6));
    }
    var_s3_4 = 0;
    if (M2C_FIELD(arg0, s8 *, 7) > 0) {
        var_s4_4 = 0;
        do {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x20) + var_s4_4;
            temp_a0 = M2C_FIELD(temp_v1, void **, 8);
            if (temp_a0 != NULL) {
                func_00143300(temp_a0, M2C_FIELD(temp_v1, void **, 0), arg1, arg2);
            }
            var_s3_4 += 1;
            var_s4_4 += 0x14;
        } while (var_s3_4 < M2C_FIELD(arg0, s8 *, 7));
    }
}
