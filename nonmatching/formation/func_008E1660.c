/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_008C5D40(void *);
void func_008E1660(void *arg0) {
    s32 var_a1;
    void *var_v1;

    var_a1 = 0;
    var_v1 = arg0;
    do {
        M2C_FIELD(var_v1, s32 *, 0x24) = 0;
        var_a1 += 7;
        M2C_FIELD(var_v1, s32 *, 0x28) = 0;
        M2C_FIELD(var_v1, s32 *, 0x2C) = 0;
        M2C_FIELD(var_v1, s32 *, 0x30) = 0;
        M2C_FIELD(var_v1, s32 *, 0x34) = 0;
        M2C_FIELD(var_v1, s32 *, 0x38) = 0;
        M2C_FIELD(var_v1, s32 *, 0x3C) = 0;
        var_v1 += 0x1C;
    } while (var_a1 < 0xE);
    M2C_FIELD(arg0, s8 *, 0x22) = 1;
    M2C_FIELD(arg0, s8 *, 0x20) = 1;
    M2C_FIELD(arg0, s8 *, 0x21) = 0xB;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    func_008C5D40(arg0);
}
