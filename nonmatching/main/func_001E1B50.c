/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001E1B50(void *arg0) {
    s32 var_a3;
    s32 var_a4;
    void *var_a1;

    var_a3 = 0;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x37) > 0) {
        do {
            var_a4 = 0;
            var_a1 = arg0 + ((M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8), u8 *, 0xA) * var_a3) << 6);
            if ((s32) M2C_FIELD(arg0, u8 *, 0x36) > 0) {
                do {
                    if (var_a1 != arg0) {
                        M2C_FIELD(var_a1, s32 *, 0x30) = 0;
                        M2C_FIELD(var_a1, s8 *, 0x36) = 0;
                        M2C_FIELD(var_a1, s8 *, 0x37) = 0;
                    }
                    var_a4 += 1;
                    var_a1 += 0x40;
                } while (var_a4 < (s32) M2C_FIELD(arg0, u8 *, 0x36));
            }
            var_a3 += 1;
        } while (var_a3 < (s32) M2C_FIELD(arg0, u8 *, 0x37));
    }
}
