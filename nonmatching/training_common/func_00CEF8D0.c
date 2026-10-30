/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001DA380(s32);                             /* extern */
M2C_UNK func_001DA550(s32, f32 *);                  /* extern */
extern char D_00CF9F08[];
extern char D_00CF9F30[];
extern char D_00CF9F34[];

s32 func_00CEF8D0(void) {
    f32 sp38;
    f32 sp3C;
    s32 *var_s0;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00CF9F08);
    sp38 = (*(f32 *)D_00CF9F30);
    sp3C = (*(f32 *)D_00CF9F34);
    do {
        if (func_001DA380(*var_s0) == 0) {
            func_001DA550(*var_s0, &sp38);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2U);
    return 1;
}
