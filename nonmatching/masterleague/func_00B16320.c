/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
void *func_00994750(void *, s32);                   /* extern */

void func_00B16320(void) {
    s32 var_a1;
    void *temp_a0;
    void *var_v0;

    var_v0 = func_00228A80();
    var_a1 = 0;
    do {
        var_a1 += 8;
        M2C_FIELD(var_v0, s16 *, 0x32EAE) = 0;
        M2C_FIELD(var_v0, s16 *, 0x32EB0) = 0;
        M2C_FIELD(var_v0, s16 *, 0x32EB2) = 0;
        M2C_FIELD(var_v0, s16 *, 0x32EB4) = 0;
        M2C_FIELD(var_v0, s16 *, 0x32EB6) = 0;
        temp_a0 = var_v0 + 0x30000;
        M2C_FIELD(var_v0, s16 *, 0x32EB8) = 0;
        M2C_FIELD(var_v0, s16 *, 0x32EBA) = 0;
        M2C_FIELD(var_v0, s16 *, 0x32EBC) = 0;
        var_v0 += 0x10;
    } while (var_a1 < 0x20);
    M2C_FIELD(func_00994750(temp_a0, var_a1), s16 *, 0xA) = 0;
}
