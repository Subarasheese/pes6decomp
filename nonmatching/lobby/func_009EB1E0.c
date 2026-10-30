/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
void func_009EB1E0(void *arg0) {
    s32 var_a0;
    s32 var_s1;
    void *var_s0;
    void *var_s2;

    var_s2 = arg0;
    var_s1 = 0;
    var_s0 = var_s2;
    do {
        func_001D7F10(M2C_FIELD(var_s0, void **, 0x1F4));
        var_s1 += 1;
        M2C_FIELD(var_s0, void **, 0x1F4) = NULL;
        var_s0 += 4;
    } while (var_s1 < 0x13);
    var_a0 = 0;
    do {
        M2C_FIELD(var_s2, s32 *, 0x240) = 0;
        var_a0 += 8;
        M2C_FIELD(var_s2, s32 *, 0x244) = 0;
        M2C_FIELD(var_s2, s32 *, 0x248) = 0;
        M2C_FIELD(var_s2, s32 *, 0x24C) = 0;
        M2C_FIELD(var_s2, s32 *, 0x250) = 0;
        M2C_FIELD(var_s2, s32 *, 0x254) = 0;
        M2C_FIELD(var_s2, s32 *, 0x258) = 0;
        M2C_FIELD(var_s2, s32 *, 0x25C) = 0;
        var_s2 += 0x20;
    } while (var_a0 < 0x50);
}
