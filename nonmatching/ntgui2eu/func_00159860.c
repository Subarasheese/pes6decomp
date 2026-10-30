/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001622F8(s32, M2C_UNK);                /* extern */
M2C_UNK func_001623C0(s32);                         /* extern */
M2C_UNK func_00165AE0(s32);                         /* extern */
extern char D_011E6B04[];
extern char D_011E6B0C[];

void func_00159860(void) {
    if ((*(s32 *)D_011E6B04) != 0) {
        func_00165AE0((*(s32 *)D_011E6B04));
    }
    func_001622F8((*(s32 *)D_011E6B0C), 0);
    func_001623C0((*(s32 *)D_011E6B0C));
}
