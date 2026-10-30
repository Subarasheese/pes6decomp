/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00170548(s8 *);                        /* extern */
s32 func_0017A220(M2C_UNK *);                       /* extern */
extern char D_003873F4[];
extern char D_00387460[];

void func_00170610(void) {
    s32 var_s1;
    s8 *var_s0;

    if (func_0017A220(((void *)D_003873F4)) != 0) {
        var_s0 = ((void *)D_00387460);
        var_s1 = 0xC;
        do {
            if (*var_s0 == 1) {
                func_00170548(var_s0);
            }
            var_s1 -= 1;
            var_s0 += 0x30;
        } while (var_s1 >= 0);
        M2C_FIELD(((void *)D_003873F4), s32 *, 0x73F4) = 0;
    }
}
