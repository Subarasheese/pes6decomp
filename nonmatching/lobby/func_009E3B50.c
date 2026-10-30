/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern char D_00A03220[];

s32 func_009E3B50(void *arg0, s8 *arg1) {
    s8 *var_a1;

    var_a1 = arg1;
    if (arg0 == NULL) {
        return 0;
    }
    if ((var_a1 == NULL) || (*var_a1 == 0)) {
        var_a1 = ((void *)D_00A03220);
    }
    func_001DF820(M2C_FIELD(arg0, void **, 0xC), (s32) var_a1);
    return 1;
}
