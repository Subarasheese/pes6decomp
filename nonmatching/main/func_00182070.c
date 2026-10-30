/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00182770(void *);
extern char D_0051FF38[];

void func_00182070(s32 arg0, s32 arg1) {
    s32 *var_s2;
    s32 var_s1;

    var_s1 = 0;
    var_s2 = (*(s32 *)D_0051FF38) + (arg0 * 0x60);
    if (arg1 > 0) {
        do {
            if (*var_s2 != 0) {
                func_00182770(var_s2);
            }
            var_s1 += 1;
            *var_s2 = 0;
            var_s2 += 0x60;
        } while (var_s1 < arg1);
    }
}
