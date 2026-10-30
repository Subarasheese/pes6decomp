/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern char D_00A02C58[];
extern char D_00A7DD58[];

s32 func_009C3E90(s32 arg0, s8 *arg1) {
    s8 *var_a1;
    void *var_s0;

    var_a1 = arg1;
    if ((*(s32 *)D_00A7DD58) == 0) {
        var_s0 = NULL;
    } else if (var_a1 == NULL) {
        var_s0 = NULL;
    } else if (arg0 < 0) {
        var_s0 = NULL;
    } else if (arg0 < 3) {
        var_s0 = M2C_FIELD(((arg0 * 8) + (*(s32 *)D_00A7DD58)), void **, 4);
        if (var_s0 != NULL) {
            if (*var_a1 == 0) {
                var_a1 = ((void *)D_00A02C58);
            }
            func_001DF820(M2C_FIELD(var_s0, void **, 0xC), (s32) var_a1);
        } else {
            var_s0 = NULL;
        }
    } else {
        var_s0 = NULL;
    }
    return var_s0 != NULL;
}
