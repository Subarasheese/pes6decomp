/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002CA080(void *arg0) {
    s32 var_a2;
    void *temp_a1;

    var_a2 = 0;
    do {
        temp_a1 = arg0 + var_a2;
        M2C_FIELD(temp_a1, s8 *, 6) = 0;
        var_a2 += 7;
        M2C_FIELD(temp_a1, s8 *, 7) = 0;
        M2C_FIELD(temp_a1, s8 *, 8) = 0;
        M2C_FIELD(temp_a1, s8 *, 9) = 0;
        M2C_FIELD(temp_a1, s8 *, 0xA) = 0;
        M2C_FIELD(temp_a1, s8 *, 0xB) = 0;
        M2C_FIELD(temp_a1, s8 *, 0xC) = 0;
    } while (var_a2 < 0xE);
    M2C_FIELD(arg0, s8 *, 0) = 3;
    M2C_FIELD(arg0, s8 *, 1) = 0x10;
    M2C_FIELD(arg0, s8 *, 2) = 0x17;
    M2C_FIELD(arg0, s8 *, 3) = 0x21;
    M2C_FIELD(arg0, s8 *, 4) = 0x1E;
    M2C_FIELD(arg0, s8 *, 5) = 0x26;
}
