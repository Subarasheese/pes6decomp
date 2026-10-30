/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BCF390(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00BA0BB0(s32);                         /* extern */

void func_00BA0A40(void *arg0) {
    s16 var_v0;
    s16 var_v0_2;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_00BCF390();
    var_a0 = 0;
    if (temp_v0 & 0x1000) {
        func_0026E840(0x84028400);
        M2C_FIELD(arg0, s32 *, 4) = 1;
        M2C_FIELD(arg0, s8 *, 2) = 2;
        return;
    }
    if (!(temp_v0 & 0x4000)) {
        if (!(temp_v0 & 0x400)) {
            if (temp_v0 & 0x80) {
                var_a0 = 1;
                var_v1 = M2C_FIELD(arg0, s16 *, 0x18) - 1;
                goto block_12;
            }
        } else {
            var_a0 = 1;
            var_v1 = M2C_FIELD(arg0, s16 *, 0x18) + 1;
block_12:
            M2C_FIELD(arg0, s16 *, 0x18) = var_v1;
        }
        if (!(temp_v0 & 8)) {
            if (temp_v0 & 1) {
                var_a0 = 1;
                var_v1_2 = M2C_FIELD(arg0, s16 *, 0x1A) - 1;
                goto block_19;
            }
        } else {
            var_a0 = 1;
            var_v1_2 = M2C_FIELD(arg0, s16 *, 0x1A) + 1;
block_19:
            M2C_FIELD(arg0, s16 *, 0x1A) = var_v1_2;
        }
        if (var_a0 != 0) {
            var_v0 = M2C_FIELD(arg0, s16 *, 0x18);
            if (var_v0 >= 6) {
                var_v0 = 0;
            } else if (var_v0 < 0) {
                var_v0 = 5;
            }
            M2C_FIELD(arg0, s16 *, 0x18) = var_v0;
            var_v0_2 = M2C_FIELD(arg0, s16 *, 0x1A);
            if (var_v0_2 >= 2) {
                var_v0_2 = 0;
            } else if (var_v0_2 < 0) {
                var_v0_2 = 1;
            }
            M2C_FIELD(arg0, s16 *, 0x1A) = var_v0_2;
            func_00BA0BB0(var_a0);
            func_0026E840(0x8400F802);
        }
        return;
    }
    func_0026E840(0x84008401);
    M2C_FIELD(arg0, s32 *, 4) = 2;
    M2C_FIELD(arg0, s8 *, 2) = 2;
}
