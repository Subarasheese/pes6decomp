/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00172F50(void);
extern char D_0038C1F8[];

void func_00172F58(void) {
    s32 var_s1;
    s8 *var_s0;

    var_s0 = ((void *)D_0038C1F8);
    var_s1 = 0x27;
    do {
        if (*var_s0 != 0) {
            func_00172F50();
        }
        var_s1 -= 1;
        var_s0 += 0x38;
    } while (var_s1 >= 0);
}
