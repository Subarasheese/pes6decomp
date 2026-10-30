/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00131D40(void *);
M2C_UNK func_0012BE80(void *, void *);              /* extern */
M2C_UNK func_001314F0(void *, M2C_UNK);             /* extern */
M2C_UNK func_001326D0(void *);                      /* extern */

void func_00132500(void *arg0) {
    s8 temp_a0;
    void *var_s1;
    void *var_v1;
    void *var_v1_2;
    void *var_v1_3;
    void *var_v1_4;

    func_00131D40(arg0);
    temp_a0 = M2C_FIELD(arg0, s8 *, 0x1D);
    if (!(temp_a0 & 4)) {
        if (!(temp_a0 & 2)) {
            if (temp_a0 & 1) {
                func_001326D0(arg0);
                var_v1 = M2C_FIELD(arg0, void **, 0);
                if (var_v1 != NULL) {
                    do {
                        M2C_FIELD(var_v1, f32 *, 0xD0) = (f32) M2C_FIELD(var_v1, f32 *, 0x50);
                        M2C_FIELD(var_v1, f32 *, 0xD4) = (f32) M2C_FIELD(var_v1, f32 *, 0x54);
                        M2C_FIELD(var_v1, f32 *, 0xD8) = (f32) M2C_FIELD(var_v1, f32 *, 0x58);
                        M2C_FIELD(var_v1, f32 *, 0xDC) = (f32) M2C_FIELD(var_v1, f32 *, 0x5C);
                        var_v1 = M2C_FIELD(var_v1, void **, 0x104);
                    } while (var_v1 != NULL);
                }
            } else {
                M2C_FIELD(arg0, s8 *, 0x1C) = 0;
                func_001314F0(arg0, 0);
                func_001326D0(arg0);
                var_v1_2 = M2C_FIELD(arg0, void **, 0);
                if (var_v1_2 != NULL) {
                    do {
                        M2C_FIELD(var_v1_2, f32 *, 0xD0) = (f32) M2C_FIELD(var_v1_2, f32 *, 0x50);
                        M2C_FIELD(var_v1_2, f32 *, 0xD4) = (f32) M2C_FIELD(var_v1_2, f32 *, 0x54);
                        M2C_FIELD(var_v1_2, f32 *, 0xD8) = (f32) M2C_FIELD(var_v1_2, f32 *, 0x58);
                        M2C_FIELD(var_v1_2, f32 *, 0xDC) = (f32) M2C_FIELD(var_v1_2, f32 *, 0x5C);
                        var_v1_2 = M2C_FIELD(var_v1_2, void **, 0x104);
                    } while (var_v1_2 != NULL);
                }
            }
        } else {
            M2C_FIELD(arg0, s8 *, 0x1D) = (s8) (temp_a0 | 4);
            var_s1 = M2C_FIELD(arg0, void **, 0);
            if (var_s1 != NULL) {
                do {
                    func_0012BE80(var_s1, var_s1 + 0x60);
                    M2C_FIELD(var_s1, f32 *, 0x30) = (f32) M2C_FIELD(var_s1, f32 *, 0x70);
                    M2C_FIELD(var_s1, f32 *, 0x34) = (f32) M2C_FIELD(var_s1, f32 *, 0x74);
                    M2C_FIELD(var_s1, f32 *, 0x38) = (f32) M2C_FIELD(var_s1, f32 *, 0x78);
                    M2C_FIELD(var_s1, s32 *, 0x3C) = 0x3F800000;
                    var_s1 = M2C_FIELD(var_s1, void **, 0x104);
                } while (var_s1 != NULL);
            }
            var_v1_3 = M2C_FIELD(arg0, void **, 0);
            if (var_v1_3 != NULL) {
                do {
                    M2C_FIELD(var_v1_3, f32 *, 0xD0) = (f32) M2C_FIELD(var_v1_3, f32 *, 0x50);
                    M2C_FIELD(var_v1_3, f32 *, 0xD4) = (f32) M2C_FIELD(var_v1_3, f32 *, 0x54);
                    M2C_FIELD(var_v1_3, f32 *, 0xD8) = (f32) M2C_FIELD(var_v1_3, f32 *, 0x58);
                    M2C_FIELD(var_v1_3, f32 *, 0xDC) = (f32) M2C_FIELD(var_v1_3, f32 *, 0x5C);
                    var_v1_3 = M2C_FIELD(var_v1_3, void **, 0x104);
                } while (var_v1_3 != NULL);
            }
        }
    } else {
        var_v1_4 = M2C_FIELD(arg0, void **, 0);
        if (var_v1_4 != NULL) {
            do {
                M2C_FIELD(var_v1_4, f32 *, 0xD0) = (f32) M2C_FIELD(var_v1_4, f32 *, 0x50);
                M2C_FIELD(var_v1_4, f32 *, 0xD4) = (f32) M2C_FIELD(var_v1_4, f32 *, 0x54);
                M2C_FIELD(var_v1_4, f32 *, 0xD8) = (f32) M2C_FIELD(var_v1_4, f32 *, 0x58);
                M2C_FIELD(var_v1_4, f32 *, 0xDC) = (f32) M2C_FIELD(var_v1_4, f32 *, 0x5C);
                var_v1_4 = M2C_FIELD(var_v1_4, void **, 0x104);
            } while (var_v1_4 != NULL);
        }
    }
}
