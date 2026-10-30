/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5D80(M2C_UNK, f32 *);              /* extern */
M2C_UNK func_001D5EE0(s32, f32 *);                  /* extern */
extern char D_00CF9EF8[];
extern char D_00CF9F10[];
extern char D_00CF9F14[];

s32 func_00CEFC30(void) {
    f32 sp38;
    f32 sp3C;
    s32 *var_s0;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00CF9EF8);
    sp38 = (*(f32 *)D_00CF9F10);
    sp3C = (*(f32 *)D_00CF9F14);
    do {
        func_001D5EE0(*var_s0, &sp38);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2U);
    func_001D5D80(0x1259F, &sp38);
    return 1;
}
