/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026AEE0(s32, s32);                    /* extern */
M2C_UNK func_008FAB70(s64);                         /* extern */
extern char D_003AE9D0[];

void func_00900DF0(s64 arg0) {
    func_008FAB70((s64) (arg0 << 0x38) >> 0x38);
    func_0026AEE0(arg0 == 0, (*(s32 *)D_003AE9D0) + 0xC);
}
