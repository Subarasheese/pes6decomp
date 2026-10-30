/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s32, M2C_UNK);                /* extern */
extern void *D_003E98B8;

void func_001AB960(void *arg0, void *arg1) {
    s8 temp_a1;
    u32 var_a3;
    u8 var_v1;
    void *temp_a0;

    func_001C4730(arg0 + 0x30, 0x2A);
    if ((s32) M2C_FIELD(arg0, u8 *, 0x47) >= 5) {
        var_v1 = (M2C_FIELD(arg0, u8 *, 0x46) * 2) + 1;
    } else {
        var_v1 = M2C_FIELD(arg0, u8 *, 0x46) * 2;
    }
    M2C_FIELD(arg0, u8 *, 0x46) = var_v1;
    if (M2C_FIELD(arg1, u8 *, 0xB) != 0) {
        var_a3 = 0;
        do {
            temp_a0 = arg0 + var_a3;
            temp_a1 = M2C_FIELD((M2C_FIELD(D_003E98B8, s32 *, 0x14) + (M2C_FIELD(arg1, u8 *, 0xB) * 0xA) + var_a3), s8 *, -0xA);
            var_a3 += 1;
            M2C_FIELD(temp_a0, s8 *, 0x1B0) = (s8) (temp_a1 + 7);
        } while (var_a3 < 0xAU);
    }
}
