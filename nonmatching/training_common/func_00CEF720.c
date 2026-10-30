/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD7A00(M2C_UNK);                     /* extern */
s32 func_00CE4310();                                /* extern */
extern char D_00CFFE94[];

void func_00CEF720(void) {
    s32 temp_s0;
    s32 var_a0;

    temp_s0 = (*(s32 *)D_00CFFE94);
    if (func_00CE4310() != 0) {
        var_a0 = (*(s32 *)D_00CFFE94) + 1;
        if (var_a0 >= 2) {
            var_a0 = 1;
        }
        (*(s32 *)D_00CFFE94) = var_a0;
        if (var_a0 != temp_s0) {
            func_00CD7A00(1);
        }
    }
}
