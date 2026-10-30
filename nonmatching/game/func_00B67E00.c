/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_00B2A420(M2C_UNK);                       /* extern */

s32 func_00B67E00(s32 arg0, s32 arg1) {
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a1_3;
    s32 var_s0;
    void *var_v0;
    void *var_v0_2;
    void *var_v0_3;

    var_s0 = 0;
    if (arg1 != 0) {
        if (arg1 >= 0xD) {
            var_v0 = func_00B2A420(0xD);
            var_a1 = 0xD;
            do {
                if ((M2C_FIELD(M2C_FIELD(var_v0, void **, 0), u8 *, 0x16) == 0x47) && (M2C_FIELD(M2C_FIELD(var_v0, void **, 4), u8 *, 0x4C) == arg0)) {
                    var_s0 += 1;
                }
                var_a1 += 1;
                var_v0 += 8;
            } while (var_a1 < 0x17);
        } else {
            var_v0_2 = func_00B2A420(2);
            var_a1_2 = 2;
            do {
                if ((M2C_FIELD(M2C_FIELD(var_v0_2, void **, 0), u8 *, 0x16) == 0x47) && (M2C_FIELD(M2C_FIELD(var_v0_2, void **, 4), u8 *, 0x4C) == arg0)) {
                    var_s0 += 1;
                }
                var_a1_2 += 1;
                var_v0_2 += 8;
            } while (var_a1_2 < 0xC);
        }
    } else {
        var_v0_3 = func_00B2A420(1);
        var_a1_3 = 0;
        do {
            if ((M2C_FIELD(M2C_FIELD(var_v0_3, void **, 0), u8 *, 0x16) == 0x47) && (M2C_FIELD(M2C_FIELD(var_v0_3, void **, 4), u8 *, 0x4C) == arg0)) {
                var_s0 += 1;
            }
            var_a1_3 += 1;
            var_v0_3 += 8;
        } while (var_a1_3 < 0x16);
    }
    return var_s0;
}
