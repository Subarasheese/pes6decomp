/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern char D_00D00060[];

s32 func_00CF68E0(void) {
    s32 *var_s0;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00D00060);
    do {
        func_001D7F10(M2C_FIELD(var_s0, void **, 0xC));
        var_s1 += 1;
        M2C_FIELD(var_s0, void **, 0xC) = NULL;
        var_s0 += 4;
    } while (var_s1 < 0x11U);
    (*(s32 *)D_00D00060) = 0;
    return 1;
}
