/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00148CD0();                            /* extern */
extern char D_005B3744[];
extern char D_011DFF20[];
extern M2C_UNK func_001485D0;

void func_00148C70(s32 arg0) {
    if (arg0 >= 0) {
        (*(s32 *)D_011DFF20) += 1;
        func_00148CD0();
        return;
    }
    func_0012DD30(2, 0x1F4, 0xFA, func_00135080(0x33), &func_001485D0, (*(s32 *)D_005B3744));
}
