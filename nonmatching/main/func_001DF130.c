/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001DF130(void *arg0, s8 arg1, s8 arg2) {
    f32 temp_f1;
    f32 var_f0;
    s32 var_a1;
    s8 var_a2;
    void *var_a0;

    var_a2 = arg2;
    if ((arg0 != NULL) && (M2C_FIELD(arg0, u16 *, 0x44) != 0)) {
        M2C_FIELD(arg0, s8 *, 0x6C) = arg1;
        if (arg1 != 0) {
            if (!(var_a2 & 0xFF)) {
                var_a2 = 1;
            }
            M2C_FIELD(arg0, s8 *, 0x6D) = var_a2;
            M2C_FIELD(arg0, s8 *, 0x6E) = 0;
            M2C_FIELD(arg0, s8 *, 0x6F) = 0;
            if (var_a2 >= 0) {
                var_f0 = (f32) var_a2;
            } else {
                var_f0 = 2.0f * (f32) (((u32) var_a2 >> 1) | (var_a2 & 1));
            }
            temp_f1 = 255.0f / var_f0;
            if (!(temp_f1 >= 2.1474836e9f)) {
                var_a1 = (s32) temp_f1;
            } else {
                var_a1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
            }
            M2C_FIELD(arg0, s8 *, 0x70) = (s8) (var_a1 & 0xFF);
            M2C_FIELD(arg0, s16 *, 0x72) = 1;
            M2C_FIELD(arg0, void **, 0x68) = (void *) M2C_FIELD(arg0, void **, 8);
            M2C_FIELD(arg0, s8 *, 0x71) = 0;
        } else {
            M2C_FIELD(arg0, s8 *, 0x79) = 1;
            var_a0 = M2C_FIELD(arg0, void **, 8);
            if (var_a0 != NULL) {
                do {
                    M2C_FIELD(var_a0, s8 *, 0x93) = 0xFF;
                    var_a0 = M2C_FIELD(var_a0, void **, 0);
                } while (var_a0 != NULL);
            }
        }
    }
}
