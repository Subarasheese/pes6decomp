/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_008BF130(void *arg0, void *arg1) {
    s16 *var_a1;
    s16 *var_a2;
    s32 var_a0;
    s8 var_a2_2;
    void *temp_a0;

    func_001C48E8(arg1, 0, 0x17A);
    var_a2 = arg0 + 0x766;
    var_a1 = arg1 + 0x14;
    var_a0 = 0xB3;
    do {
        var_a0 -= 1;
        *var_a1 = *var_a2;
        var_a2 += 2;
        var_a1 += 2;
    } while (var_a0 > 0);
    var_a2_2 = 0;
    M2C_FIELD(arg1, s8 *, 0) = -1;
    M2C_FIELD(arg1, s8 *, 1) = -1;
    do {
        temp_a0 = arg0 + var_a2_2;
        if (M2C_FIELD(temp_a0, u8 *, 0x766) == M2C_FIELD(arg0, u8 *, 0x74A)) {
            M2C_FIELD(arg1, s8 *, 0) = var_a2_2;
        }
        if (M2C_FIELD(temp_a0, u8 *, 0x766) == M2C_FIELD(arg0, u8 *, 0x74B)) {
            M2C_FIELD(arg1, s8 *, 1) = var_a2_2;
        }
        var_a2_2 += 1;
    } while (var_a2_2 < 0xB);
    M2C_FIELD(arg1, u8 *, 0x12) = (u8) M2C_FIELD(arg0, u8 *, 0x75C);
    M2C_FIELD(arg1, u8 *, 4) = (u8) M2C_FIELD(arg0, u8 *, 0x74E);
    M2C_FIELD(arg1, u8 *, 5) = (u8) M2C_FIELD(arg0, u8 *, 0x74F);
    M2C_FIELD(arg1, u8 *, 6) = (u8) M2C_FIELD(arg0, u8 *, 0x750);
    M2C_FIELD(arg1, u8 *, 7) = (u8) M2C_FIELD(arg0, u8 *, 0x751);
    M2C_FIELD(arg1, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 0x752);
    M2C_FIELD(arg1, u8 *, 9) = (u8) M2C_FIELD(arg0, u8 *, 0x753);
    M2C_FIELD(arg1, u8 *, 0xA) = (u8) M2C_FIELD(arg0, u8 *, 0x754);
    M2C_FIELD(arg1, u8 *, 0xB) = (u8) M2C_FIELD(arg0, u8 *, 0x755);
    M2C_FIELD(arg1, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u8 *, 0x756);
    M2C_FIELD(arg1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 0x757);
    M2C_FIELD(arg1, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u8 *, 0x758);
    M2C_FIELD(arg1, u8 *, 0xF) = (u8) M2C_FIELD(arg0, u8 *, 0x759);
    M2C_FIELD(arg1, u8 *, 0x10) = (u8) M2C_FIELD(arg0, u8 *, 0x75A);
    M2C_FIELD(arg1, u8 *, 0x11) = (u8) M2C_FIELD(arg0, u8 *, 0x75B);
}
