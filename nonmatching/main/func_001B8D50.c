/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BBC20(s32);
extern void func_001D7F10(void *);
extern void *D_00398400;
extern char D_00398434[];

void func_001B8D50(void) {
    s32 var_s2;
    void **var_s1;

    if ((*(s32 *)D_00398434) != 0) {
        var_s2 = 0;
        var_s1 = &D_00398400;
        do {
            func_001D7F10(*var_s1);
            var_s2 += 1;
            *var_s1 = NULL;
            var_s1 += 4;
        } while (var_s2 < 4);
        func_001BBC20(M2C_FIELD(&D_00398400, s32 *, 0x1C));
        M2C_FIELD(&D_00398400, s32 *, 0x1C) = 0;
    }
}
