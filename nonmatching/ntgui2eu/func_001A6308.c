/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_01206FC0[];
extern M2C_UNK *D_012073C0;

s32 func_001A6308(void) {
    s32 var_a0;
    void **var_v0;
    void *var_v1;

    var_a0 = 0x3F;
    D_012073C0 = ((void *)D_01206FC0);
    var_v1 = ((void *)D_01206FC0) + 0x400;
    var_v0 = ((void *)D_01206FC0) + 0x3F0;
    do {
        *var_v0 = var_v1;
        var_a0 -= 1;
        var_v0 -= 0x10;
        var_v1 -= 0x10;
    } while (var_a0 >= 0);
    M2C_FIELD((((void *)D_01206FC0) + 0x6FC0), s32 *, 0x3F0) = 0;
    return 0;
}
