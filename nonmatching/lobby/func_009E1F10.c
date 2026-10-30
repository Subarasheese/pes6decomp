/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern char D_00A031D0[];
extern void *D_00A7DEF8;

s32 func_009E1F10(s8 *arg0) {
    s8 *var_a1;

    var_a1 = arg0;
    if (D_00A7DEF8 == NULL) {
        return 0;
    }
    if (D_00A7DEF8 == NULL) {
        return 0;
    }
    if ((var_a1 == NULL) || (*var_a1 == 0)) {
        var_a1 = ((void *)D_00A031D0);
    }
    func_001DF820(M2C_FIELD(M2C_FIELD(D_00A7DEF8, void **, 0x18), void **, 0xC), (s32) var_a1);
    return 1;
}
