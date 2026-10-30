/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0018A148(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_00163B40(void *arg0) {
    s16 temp_s4;
    s16 temp_s5;
    s32 var_s3;
    s64 temp_v0;
    void *var_s0;
    void *var_s2;

    var_s3 = 0;
    var_s0 = M2C_FIELD(arg0, s32 *, 0x910) + 0x70;
    var_s2 = M2C_FIELD(arg0, s32 *, 0x914) + 0x70;
    temp_s5 = M2C_FIELD(arg0, s32 *, 0x4DC) + M2C_FIELD(arg0, s32 *, 0x5A0);
    temp_s4 = M2C_FIELD(arg0, s32 *, 0x4E0) + M2C_FIELD(arg0, s32 *, 0x4D4);
    if (M2C_FIELD(arg0, s32 *, 0x940) > 0) {
        do {
            var_s3 += 1;
            func_0018A148(var_s0, 1, 0);
            func_0018A148(var_s0 + 0x10, 5, 0);
            M2C_FIELD(var_s0, s8 *, 0) = 0;
            M2C_FIELD(var_s0, s8 *, 3) = 0x80;
            M2C_FIELD(var_s0, s8 *, 1) = 0;
            M2C_FIELD(var_s0, s8 *, 2) = 0;
            M2C_FIELD(var_s0, s16 *, 0x10) = temp_s5;
            M2C_FIELD(var_s0, s16 *, 0x12) = temp_s4;
            M2C_FIELD(var_s2, s64 *, 0) = (s64) M2C_FIELD(var_s0, s8 *, 0);
            M2C_FIELD(var_s2, s64 *, 8) = (s64) M2C_FIELD(var_s0, s64 *, 8);
            M2C_FIELD(var_s2, s64 *, 0x10) = (s64) M2C_FIELD(var_s0, s16 *, 0x10);
            temp_v0 = M2C_FIELD(var_s0, s64 *, 0x18);
            var_s0 += 0x20;
            M2C_FIELD(var_s2, s64 *, 0x18) = temp_v0;
            var_s2 += 0x20;
        } while (var_s3 < M2C_FIELD(arg0, s32 *, 0x940));
    }
}
