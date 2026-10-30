/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0081B8B0(void *, u8 *);                /* extern */
M2C_UNK func_0081BD90(void *, M2C_UNK, u8 *);       /* extern */
M2C_UNK func_00CD6300(s32, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK, M2C_UNK, s8 *, s64); /* extern */
extern u8 D_003E783C;

void func_0081BA70(void *arg0, u8 *arg1) {
    s8 sp60;
    u8 sp64;
    s8 sp68;
    u8 sp6C;
    s8 sp6D;
    s32 temp_a3;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s3_2;
    s32 var_v0;
    u8 *var_v1;
    u8 temp_v0;

    var_v0 = 2;
    var_v1 = &sp6C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_v0 = *arg1;
    sp6C = temp_v0;
    sp6D = temp_v0 - 1;
    func_0081BD90(arg0, 2, &sp6C);
    sp68 = 0;
    sp64 = D_003E783C;
    var_s3 = 0;
    if ((s32) *arg1 > 0) {
        var_s2 = 0;
        do {
            temp_a3 = M2C_FIELD(arg0, s32 *, 0x10);
            func_00CD6300(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0) + var_s2, 0, 2, temp_a3, temp_a3 + 8, 1, 1, &sp68, (s64) &sp64);
            var_s3 += 1;
            var_s2 += 0x130;
        } while (var_s3 < (s32) *arg1);
    }
    sp60 = 0;
    var_s2_2 = 0;
    if ((*arg1 - 1) > 0) {
        var_s3_2 = 0;
        do {
            func_00CD6300(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 4) + var_s3_2, 0, 0, M2C_FIELD(arg0, s32 *, 0x10) + 0x10, 0, 1, 0, &sp60, 0);
            var_s2_2 += 1;
            var_s3_2 += 0x130;
        } while (var_s2_2 < (*arg1 - 1));
    }
    func_0081B8B0(arg0, arg1);
}
