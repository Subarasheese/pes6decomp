/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_008C5D40(void *);
void func_008E9150(void *arg0) {
    s32 var_a2;
    void *temp_v1;
    void *var_a1;

    var_a2 = 0;
    var_a1 = arg0;
    do {
        temp_v1 = arg0 + var_a2;
        M2C_FIELD(temp_v1, s8 *, 1) = 0;
        var_a2 += 6;
        M2C_FIELD(var_a1, s32 *, 0x3C) = 0;
        M2C_FIELD(temp_v1, s8 *, 2) = 0;
        M2C_FIELD(var_a1, s32 *, 0x40) = 0;
        M2C_FIELD(temp_v1, s8 *, 3) = 0;
        M2C_FIELD(var_a1, s32 *, 0x44) = 0;
        M2C_FIELD(temp_v1, s8 *, 4) = 0;
        M2C_FIELD(var_a1, s32 *, 0x48) = 0;
        M2C_FIELD(temp_v1, s8 *, 5) = 0;
        M2C_FIELD(var_a1, s32 *, 0x4C) = 0;
        M2C_FIELD(temp_v1, s8 *, 6) = 0;
        M2C_FIELD(var_a1, s32 *, 0x50) = 0;
        var_a1 += 0x18;
    } while (var_a2 < 0xC);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    func_008C5D40(arg0);
}
