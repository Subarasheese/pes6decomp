/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005BDA80[];
extern char D_011DA540[];

void func_0013F918(void) {
    M2C_UNK *var_v0;
    M2C_UNK *var_v1;

    var_v0 = ((void *)D_011DA540);
    var_v1 = ((void *)D_005BDA80);
    do {
        M2C_FIELD(var_v1, s64 *, 0) = (s64) M2C_FIELD(var_v0, s64 *, 0);
        M2C_FIELD(var_v1, s64 *, 8) = (s64) M2C_FIELD(var_v0, s64 *, 8);
        M2C_FIELD(var_v1, s64 *, 0x10) = (s64) M2C_FIELD(var_v0, s64 *, 0x10);
        M2C_FIELD(var_v1, s64 *, 0x18) = (s64) M2C_FIELD(var_v0, s64 *, 0x18);
        var_v0 += 0x20;
        var_v1 += 0x20;
    } while (var_v0 != (((void *)D_011DA540) + 0x1320));
}
