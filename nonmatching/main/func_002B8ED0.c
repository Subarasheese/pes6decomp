/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005E2F50[];

void func_002B8ED0(s32 arg0, s32 arg1) {
    u8 *var_a2;

    if ((arg0 >= 0) && (arg0 < 2)) {
        var_a2 = ((void *)D_005E2F50) + (arg0 * 7);
    } else {
        var_a2 = NULL;
    }
    if (var_a2 != NULL) {
        if (arg1 >= 6) {
            return;
        }
        *var_a2 &= 0xF8;
        *var_a2 |= arg1 & 0xFF;
    }
}
