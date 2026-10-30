/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00915660(M2C_UNK);                         /* extern */
M2C_UNK func_009842D0(s32, f32, M2C_UNK32);         /* extern */
M2C_UNK func_00C6A440(s32);                         /* extern */
extern char D_00CB531C[];
extern char D_00CB5320[];
extern char D_00CB5324[];

void func_00C61C50(s32 arg0) {
    (*(M2C_UNK32 *)D_00CB5320) = 0;
    (*(f32 *)D_00CB531C) = -13465.0f * (*(f32 *)D_00CB5324);
    if (func_00915660(0x34) != 0) {
        func_00C6A440(arg0);
        return;
    }
    func_009842D0(arg0, (*(f32 *)D_00CB531C), (*(M2C_UNK32 *)D_00CB5320));
}
