/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002C8220(void *, u8);                  /* extern */

void func_002C82C0(void *arg0, s32 arg1) {
    s32 var_a0;
    s32 var_s2;
    void *temp_v1;

    var_a0 = 0;
    do {
        temp_v1 = arg0 + var_a0;
        M2C_FIELD(temp_v1, s8 *, 6) = 0;
        var_a0 += 7;
        M2C_FIELD(temp_v1, s8 *, 7) = 0;
        M2C_FIELD(temp_v1, s8 *, 8) = 0;
        M2C_FIELD(temp_v1, s8 *, 9) = 0;
        M2C_FIELD(temp_v1, s8 *, 0xA) = 0;
        M2C_FIELD(temp_v1, s8 *, 0xB) = 0;
        M2C_FIELD(temp_v1, s8 *, 0xC) = 0;
    } while (var_a0 < 0xE);
    M2C_FIELD(arg0, s8 *, 0) = 3;
    var_s2 = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0x10;
    M2C_FIELD(arg0, s8 *, 2) = 0x17;
    M2C_FIELD(arg0, s8 *, 3) = 0x21;
    M2C_FIELD(arg0, s8 *, 4) = 0x1E;
    M2C_FIELD(arg0, s8 *, 5) = 0x26;
    do {
        func_002C8220(arg0, M2C_FIELD((arg1 + var_s2), u8 *, 0x14));
        var_s2 += 1;
    } while (var_s2 < 0xB);
}
