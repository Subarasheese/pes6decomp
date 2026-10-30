/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002E5A90(void *, s32);                 /* extern */

void func_002E58D0(void *arg0, u8 arg1) {
    s32 var_s2;
    void *var_s0;
    void *var_s1;

    if (M2C_FIELD(arg0, u8 *, 0x14) != (arg1 & 0xFF)) {
        M2C_FIELD(arg0, u8 *, 0x14) = arg1;
        var_s2 = 0;
        var_s1 = arg0;
        var_s0 = arg0;
        do {
            if (arg0 != NULL) {
                if (*M2C_FIELD(arg0, s32 **, 0) == 2) {
                    if (var_s2 != 1) {
                        goto block_6;
                    }
                } else {
block_6:
                    M2C_FIELD(var_s0, s32 *, 0x30) = (s32) M2C_FIELD(var_s1, s32 *, 0x30);
                    func_002E5A90(arg0, var_s2);
                }
            }
            var_s2 += 1;
            var_s1 += 0x10;
            var_s0 += 0x10;
        } while (var_s2 < 2);
    }
}
