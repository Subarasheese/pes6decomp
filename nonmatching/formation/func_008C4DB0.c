/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008B3090(void *, M2C_UNK);             /* extern */
s32 func_008BC3B0();                                /* extern */
M2C_UNK func_008C9B00(void *, M2C_UNK);             /* extern */

s32 func_008C4DB0(void *arg0) {
    s32 var_a1;
    s32 var_a1_2;
    u8 temp_v1;
    u8 temp_v1_2;
    void *temp_a0;
    void *temp_a0_2;

    if ((func_008BC3B0() != 0) && (M2C_FIELD(arg0, u8 *, 0) == 1)) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 0) {
        var_a1 = 0;
        do {
            temp_a0 = arg0 + var_a1;
            temp_v1 = M2C_FIELD(temp_a0, u8 *, 0x96E);
            var_a1 += 8;
            M2C_FIELD(temp_a0, u8 *, 0x2D) = temp_v1;
            M2C_FIELD(temp_a0, u8 *, 0x2E) = (u8) M2C_FIELD(temp_a0, u8 *, 0x96F);
            M2C_FIELD(temp_a0, u8 *, 0x2F) = (u8) M2C_FIELD(temp_a0, u8 *, 0x970);
            M2C_FIELD(temp_a0, u8 *, 0x30) = (u8) M2C_FIELD(temp_a0, u8 *, 0x971);
            M2C_FIELD(temp_a0, u8 *, 0x31) = (u8) M2C_FIELD(temp_a0, u8 *, 0x972);
            M2C_FIELD(temp_a0, u8 *, 0x32) = (u8) M2C_FIELD(temp_a0, u8 *, 0x973);
            M2C_FIELD(temp_a0, u8 *, 0x33) = (u8) M2C_FIELD(temp_a0, u8 *, 0x974);
            M2C_FIELD(temp_a0, u8 *, 0x34) = (u8) M2C_FIELD(temp_a0, u8 *, 0x975);
        } while (var_a1 < 0x20);
        M2C_FIELD(arg0, u8 *, 0x4D) = (u8) M2C_FIELD(arg0, u8 *, 0x9D7);
        M2C_FIELD(arg0, u8 *, 0x4E) = (u8) M2C_FIELD(arg0, u8 *, 0x9D8);
        M2C_FIELD(arg0, u8 *, 0x4F) = (u8) M2C_FIELD(arg0, u8 *, 0x9D9);
        M2C_FIELD(arg0, u8 *, 0x50) = (u8) M2C_FIELD(arg0, u8 *, 0x9DA);
        M2C_FIELD(arg0, u8 *, 0x51) = (u8) M2C_FIELD(arg0, u8 *, 0x9DB);
        M2C_FIELD(arg0, u8 *, 0x52) = (u8) M2C_FIELD(arg0, u8 *, 0x9DC);
        M2C_FIELD(arg0, u8 *, 0x2C) = 1U;
        func_008B3090(arg0, 0);
        func_008C9B00(arg0 + 0xB0C, 0x3F002B);
    } else {
        M2C_FIELD(arg0, u8 *, 0x2C) = 0U;
        var_a1_2 = 0;
        do {
            temp_a0_2 = arg0 + var_a1_2;
            temp_v1_2 = M2C_FIELD(temp_a0_2, u8 *, 0x2D);
            var_a1_2 += 8;
            M2C_FIELD(temp_a0_2, u8 *, 0x96E) = temp_v1_2;
            M2C_FIELD(temp_a0_2, u8 *, 0x96F) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x2E);
            M2C_FIELD(temp_a0_2, u8 *, 0x970) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x2F);
            M2C_FIELD(temp_a0_2, u8 *, 0x971) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x30);
            M2C_FIELD(temp_a0_2, u8 *, 0x972) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x31);
            M2C_FIELD(temp_a0_2, u8 *, 0x973) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x32);
            M2C_FIELD(temp_a0_2, u8 *, 0x974) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x33);
            M2C_FIELD(temp_a0_2, u8 *, 0x975) = (u8) M2C_FIELD(temp_a0_2, u8 *, 0x34);
        } while (var_a1_2 < 0x20);
        M2C_FIELD(arg0, u8 *, 0x9D7) = (u8) M2C_FIELD(arg0, u8 *, 0x4D);
        M2C_FIELD(arg0, u8 *, 0x9D8) = (u8) M2C_FIELD(arg0, u8 *, 0x4E);
        M2C_FIELD(arg0, u8 *, 0x9D9) = (u8) M2C_FIELD(arg0, u8 *, 0x4F);
        M2C_FIELD(arg0, u8 *, 0x9DA) = (u8) M2C_FIELD(arg0, u8 *, 0x50);
        M2C_FIELD(arg0, u8 *, 0x9DB) = (u8) M2C_FIELD(arg0, u8 *, 0x51);
        M2C_FIELD(arg0, u8 *, 0x9DC) = (u8) M2C_FIELD(arg0, u8 *, 0x52);
        func_008C9B00(arg0 + 0xB0C, 0x3F002A);
    }
    return 1;
}
