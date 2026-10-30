/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_0015F990();                            /* extern */
extern char D_005B3744[];
extern char D_005BEE28[];
extern M2C_UNK func_0015F930;

void func_0015F9D0(s32 arg0) {
    if (arg0 < 0) {
        if ((*(s32 *)D_005BEE28) == 1) {
            func_0012DD30(2, 0x1F4, 0xFA, func_00135080(0x47), &func_0015F930, (*(s32 *)D_005B3744));
            return;
        }
        func_0012DD30(2, 0x1F4, 0xFA, func_00135080(0x4A), &func_0015F930, (*(s32 *)D_005B3744));
        return;
    }
    func_0015F990();
}
