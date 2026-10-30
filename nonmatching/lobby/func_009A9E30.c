/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00151EA0(s32);
extern s64 func_0093D710(void);
M2C_UNK func_002DF8E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_002EC060(s32, M2C_UNK);                /* extern */
M2C_UNK func_009ABB70(void *, s32);                 /* extern */
M2C_UNK func_009ABFA0(void *);                      /* extern */

void func_009A9E30(void *arg0) {
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    void *temp_s5;
    void *var_a0;

    var_a0 = arg0;
    var_a1 = 0;
    temp_s5 = var_a0;
    var_s0 = 0;
    do {
        if (M2C_FIELD(var_a0, u16 *, 0x8E) == 0xFFFF) {
            var_s0 += 1;
        }
        var_a1 += 1;
        var_a0 += 2;
    } while (var_a1 < 3);
    var_s4 = (s32) (func_0093D710() - M2C_FIELD(temp_s5, s32 *, 0x9C)) / var_s0;
    var_s3 = (s32) (func_0093D710() - M2C_FIELD(temp_s5, s32 *, 0x9C)) % var_s0;
    if (var_s4 >= 5) {
        var_s4 = 5;
    }
    var_s1 = 0;
    if (var_s0 > 0) {
        do {
            var_s2 = var_s4;
            if (var_s4 != 5) {
                if ((var_s3 > 0) && (((s32) (func_00151EA0(0x64) & 0xFFFF) % 2) != 0)) {
                    var_s2 += 1;
                    var_s3 -= 1;
                }
            } else if (((s32) (func_00151EA0(0x64) & 0xFFFF) % 2) != 0) {
                var_s2 -= 1;
            }
            func_009ABB70(temp_s5, var_s2);
            var_s1 += 1;
        } while (var_s1 < var_s0);
    }
    M2C_FIELD(temp_s5, s8 *, 0x74) = 1;
    M2C_FIELD(temp_s5, s32 *, 0x94) = 3;
    M2C_FIELD(temp_s5, s32 *, 0xA0) = 1;
    func_002EC060(M2C_FIELD(temp_s5, s32 *, 4), 0);
    func_002DF8E0(M2C_FIELD(temp_s5, s32 *, 0x50), 0);
    func_002DF8E0(M2C_FIELD(temp_s5, s32 *, 0x54), 1);
    func_009ABFA0(temp_s5);
}
