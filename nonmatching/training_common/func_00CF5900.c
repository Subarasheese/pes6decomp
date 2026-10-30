/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7C20(void *, s32);
extern void func_001D7D80(void *, s16);
extern char D_00D000D0[];

void func_00CF5900(void) {
    s32 *var_s0;
    s32 var_s1;

    if ((*(s32 *)D_00D000D0) != 0) {
        var_s1 = 0;
        var_s0 = ((void *)D_00D000D0);
        do {
            func_001D7D80(M2C_FIELD(var_s0, void **, 4), 0);
            func_001D7C20(M2C_FIELD(var_s0, void **, 4), 0);
            func_001D7D60(M2C_FIELD(var_s0, void **, 4), 0);
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 == 0);
    }
}
