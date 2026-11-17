/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00BEC610(char *);                       /* extern */
extern char D_0058E7F0[];

s32 func_00274190(void) {
    char *var_s1;
    s32 var_s0;
    s32 var_s2;

    var_s2 = 0;
    var_s1 = D_0058E7F0;
    var_s0 = 0;
    do {
        if (func_00BEC610(var_s1) != 0) {
            var_s2 |= 1 << var_s0;
        }
        var_s0 += 1;
        var_s1 += 0x240;
    } while (var_s0 < 0x16);
    return var_s2;
}
