/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001CDAD0();                            /* extern */

void func_00CD6520(s32 *arg0, void **arg1, s32 arg2) {
    s32 temp_a2;
    s32 var_a3;
    s32 var_v1;
    void *var_a4;

    func_001CDAD0();
    var_a4 = *arg1;
    temp_a2 = arg2 & 0xFF;
    var_a3 = 0;
    if (temp_a2 > 0) {
        if (temp_a2 >= 9) {
            var_v1 = 0;
            if ((temp_a2 >= 0) && (temp_a2 < 0x7FFFFFFF)) {
                var_v1 = 1;
            }
            if (var_v1 != 0) {
                do {
                    M2C_FIELD(var_a4, s32 **, 0) = arg0;
                    var_a3 += 8;
                    M2C_FIELD(var_a4, s8 *, 4) = (s8) *arg0;
                    M2C_FIELD(var_a4, s32 **, 8) = arg0;
                    M2C_FIELD(var_a4, s8 *, 0xC) = (s8) *arg0;
                    M2C_FIELD(var_a4, s32 **, 0x10) = arg0;
                    M2C_FIELD(var_a4, s8 *, 0x14) = (s8) *arg0;
                    M2C_FIELD(var_a4, s32 **, 0x18) = arg0;
                    M2C_FIELD(var_a4, s8 *, 0x1C) = (s8) *arg0;
                    M2C_FIELD(var_a4, s32 **, 0x20) = arg0;
                    M2C_FIELD(var_a4, s8 *, 0x24) = (s8) *arg0;
                    M2C_FIELD(var_a4, s32 **, 0x28) = arg0;
                    M2C_FIELD(var_a4, s8 *, 0x2C) = (s8) *arg0;
                    M2C_FIELD(var_a4, s32 **, 0x30) = arg0;
                    M2C_FIELD(var_a4, s8 *, 0x34) = (s8) *arg0;
                    M2C_FIELD(var_a4, s32 **, 0x38) = arg0;
                    M2C_FIELD(var_a4, s8 *, 0x3C) = (s8) *arg0;
                    var_a4 += 0x40;
                } while (var_a3 < (temp_a2 - 8));
            }
        }
        if (var_a3 < temp_a2) {
            do {
                M2C_FIELD(var_a4, s32 **, 0) = arg0;
                var_a3 += 1;
                M2C_FIELD(var_a4, s8 *, 4) = (s8) *arg0;
                var_a4 += 8;
            } while (var_a3 < temp_a2);
        }
    }
}
