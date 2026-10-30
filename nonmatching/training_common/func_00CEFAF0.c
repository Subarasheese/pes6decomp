/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001D5A50(M2C_UNK);                     /* extern */
M2C_UNK func_001D5C40(s32);                         /* extern */
extern char D_00CF9EF8[];

s32 func_00CEFAF0(void) {
    s32 *var_s0;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_00CF9EF8);
    do {
        func_001D5C40(*var_s0);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2U);
    func_001D5A50(0x1259F);
    return 1;
}
