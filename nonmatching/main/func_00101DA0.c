/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00102538(s32 *);                       /* extern */
M2C_UNK printf(M2C_UNK);                     /* extern */
extern char D_00FFFFFF[];

void func_00101DA0(s32 *arg0) {
    M2C_UNK *var_s1;

    if (*arg0 & 0x100) {
        var_s1 = ((void *)D_00FFFFFF);
        do {
            if ((s32) var_s1 < 0) {
                printf(0x3C3860);
                func_00102538(arg0);
            }
            var_s1 -= 1;
        } while (*arg0 & 0x100);
    }
}
