/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK, void *, s32); /* extern */
s32 func_009B3070(u16, s16);                        /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
void **func_00B2A420(M2C_UNK);                      /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B35120(void **);                     /* extern */

void func_00C339D0(void **arg0) {
    M2C_UNK var_a1;
    f32 var_f1;
    s16 temp_s0;
    s32 temp_a4;
    u16 temp_a2;
    void *temp_a3;
    void *temp_v0;
    void *temp_v1;

    func_00B2ACF0();
    temp_v1 = M2C_FIELD(*arg0, void **, 4);
    if (!(M2C_FIELD(temp_v1, f32 *, 0x38) < (f32) (M2C_FIELD(M2C_FIELD(temp_v1, void **, 4), u16 *, 8) * 2))) {
        func_00B35120(arg0);
    }
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
        temp_v0 = *func_00B2A420(0);
        temp_s0 = func_009B3480(*arg0, M2C_FIELD(temp_v0, f32 *, 0xE0), M2C_FIELD(temp_v0, f32 *, 0xE8)) & 0xFFFF;
        temp_a3 = *arg0;
        temp_a4 = func_009B3070(M2C_FIELD(*arg0, u16 *, 0x26), temp_s0) & 0xFFFF;
        temp_a2 = M2C_FIELD(temp_a3, u16 *, 0x26);
        if (M2C_FIELD(M2C_FIELD(temp_a3, void **, 4), u8 *, 0x2D) != ((((temp_a2 - (temp_s0 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001)) {
            var_a1 = 0x44F;
            M2C_FIELD(temp_a3, s16 *, 0x2C) = (s16) (temp_a2 + 0x7FFF + 1);
        } else {
            if (temp_a4 < 0) {
                var_f1 = 2.0f * (f32) (((u32) temp_a4 >> 1) | (temp_a4 & 1));
            } else {
                var_f1 = (f32) temp_a4;
            }
            if (!(var_f1 < 20024.889f)) {
                var_a1 = 0x44F;
            } else {
                var_a1 = 0x481;
            }
            M2C_FIELD(temp_a3, s16 *, 0x2C) = temp_s0;
        }
        func_00209A00(M2C_FIELD(*arg0, void **, 4), var_a1, 0, temp_a3, temp_a4);
        M2C_FIELD(*arg0, s16 *, 0x18) = 0x13;
    }
}
