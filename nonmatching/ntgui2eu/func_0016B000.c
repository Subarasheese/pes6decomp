/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00163C30(s32, s32);                        /* extern */
s32 func_00165B00();                                /* extern */
M2C_UNK func_0016A340(s32);                         /* extern */
extern char D_005BFCA8[];

void func_0016B000(void) {
    s32 temp_v0;

    temp_v0 = func_00165B00();
    if (temp_v0 != 0) {
        if (func_00163C30(temp_v0, (*(s32 *)D_005BFCA8)) != 0) {
            func_0016A340(temp_v0 + 0x9D0);
        }
    }
}
