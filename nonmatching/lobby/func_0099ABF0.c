/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001DA550(s32, s32 *);                  /* extern */
extern char D_009FE860[];

s32 func_0099ABF0(void) {
    s32 sp38;
    s32 sp3C;
    s32 *var_s0;
    s32 *var_v1;
    s32 var_v0;
    u32 var_s1;

    var_v0 = 8;
    var_v1 = &sp38;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    var_s1 = 0;
    sp38 = 5;
    var_s0 = ((void *)D_009FE860);
    sp3C = 5;
    do {
        func_001DA550(*var_s0, &sp38);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2U);
    return 1;
}
