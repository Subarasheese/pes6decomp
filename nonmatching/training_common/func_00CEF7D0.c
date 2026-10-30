/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD7A00(M2C_UNK, s32);                /* extern */
s32 func_00CE4310();                                /* extern */
extern char D_00CFFE90[];

void func_00CEF7D0(void) {
    s32 temp_a1;

    if (func_00CE4310() != 0) {
        temp_a1 = (*(s32 *)D_00CFFE90) + 2;
        (*(s32 *)D_00CFFE90) = temp_a1 % 3;
        func_00CD7A00(1, temp_a1);
    }
}
