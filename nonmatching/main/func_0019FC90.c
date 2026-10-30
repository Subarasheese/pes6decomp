/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 *D_0051FF7C;

void func_0019FC90(void) {
    s32 *var_a2;
    s32 var_a1;

    var_a1 = 0;
    var_a2 = D_0051FF7C + 4;
    if (*D_0051FF7C > 0) {
        do {
            var_a1 += 1;
            *var_a2 = (s32) (*var_a2 + D_0051FF7C);
            var_a2 += 4;
        } while (var_a1 < *D_0051FF7C);
    }
}
