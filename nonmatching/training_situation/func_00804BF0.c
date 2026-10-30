/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
extern char D_00CFEFF0[];

void func_00804BF0(void) {
    s32 *var_s0;
    s32 var_s1;

    if ((*(s32 *)D_00CFEFF0) != 0) {
        var_s1 = 0;
        var_s0 = ((void *)D_00CFEFF0);
        do {
            func_001D7F10(M2C_FIELD(var_s0, void **, 4));
            M2C_FIELD(var_s0, void **, 4) = NULL;
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 == 0);
        (*(s32 *)D_00CFEFF0) = 0;
    }
}
