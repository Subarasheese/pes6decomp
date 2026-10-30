/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012EAD8();                            /* extern */
M2C_UNK func_0016AF10(s32);                         /* extern */
extern char D_011D4D58[];
extern M2C_UNK (*D_011D4D5C)(s64);

void func_0012FBD0(s32 arg0, s64 arg1) {
    if ((*(s32 *)D_011D4D58) == 0) {
        func_0012EAD8();
        func_0016AF10(arg0);
        if (D_011D4D5C != NULL) {
            D_011D4D5C((s64) (arg1 << 0x20) >> 0x20);
        }
    }
}
