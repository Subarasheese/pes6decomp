/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001E1AD0(void *arg0) {
    s32 var_a4;
    s32 var_a5;
    void *temp_a3;
    void *var_a1;

    temp_a3 = M2C_FIELD(arg0, void **, 0);
    var_a4 = 0;
    if ((s32) M2C_FIELD(arg0, u8 *, 0x37) > 0) {
        do {
            var_a5 = 0;
            var_a1 = arg0 + ((M2C_FIELD(M2C_FIELD(temp_a3, void **, 8), u8 *, 0xA) * var_a4) << 6);
            if ((s32) M2C_FIELD(arg0, u8 *, 0x36) > 0) {
                do {
                    var_a5 += 1;
                    M2C_FIELD(var_a1, u16 *, 0x34) = (u16) (M2C_FIELD(var_a1, u16 *, 0x34) - 1);
                    var_a1 += 0x40;
                } while (var_a5 < (s32) M2C_FIELD(arg0, u8 *, 0x36));
            }
            var_a4 += 1;
        } while (var_a4 < (s32) M2C_FIELD(arg0, u8 *, 0x37));
    }
    M2C_FIELD(temp_a3, u16 *, 0x28) = (u16) (M2C_FIELD(temp_a3, u16 *, 0x28) - 1);
}
