/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019AC40(s32 *);                       /* extern */
M2C_UNK func_0019DBD0(M2C_UNK);                     /* extern */
extern char D_00FFFFFF[];

void func_0019A4A8(s32 *arg0) {
    M2C_UNK *var_s1;

    if (*arg0 & 0x100) {
        var_s1 = ((void *)D_00FFFFFF);
        do {
            if ((s32) var_s1 < 0) {
                func_0019DBD0(0x600198);
                func_0019AC40(arg0);
            }
            var_s1 -= 1;
        } while (*arg0 & 0x100);
    }
}
