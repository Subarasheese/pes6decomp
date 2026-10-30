/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD7A00(M2C_UNK, s32);                /* extern */
s32 func_00CE4310();                                /* extern */
extern char D_00CFFE98[];
extern char D_00CFFEA0[];

void func_00CEEF60(void) {
    s32 temp_s0;
    s32 var_a0;

    temp_s0 = (*(s32 *)D_00CFFE98);
    if (func_00CE4310() != 0) {
        if ((*(s32 *)D_00CFFEA0) == 2) {
            var_a0 = (*(s32 *)D_00CFFE98) - 1;
            if (var_a0 <= 0) {
                var_a0 = 0;
            }
        } else {
            var_a0 = (s32) (((*(s32 *)D_00CFFEA0) + (*(s32 *)D_00CFFE98)) - 1) % (s32) (*(s32 *)D_00CFFEA0);
        }
        (*(s32 *)D_00CFFE98) = var_a0;
        if (temp_s0 != (*(s32 *)D_00CFFE98)) {
            func_00CD7A00(1, (*(s32 *)D_00CFFEA0));
        }
    }
}
