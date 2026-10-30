/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136FD8(M2C_UNK, M2C_UNK);            /* extern */
extern char D_005B3744[];
extern M2C_UNK func_0013EAA8;

void func_0013EAD0(s32 arg0) {
    if (arg0 >= 0) {
        if (arg0 >= 2) {
            if (arg0 != 2) {
                return;
            }
            func_0012DD30(0, 0x1F4, 0xFA, func_00135080(0x61), &func_0013EAA8, (*(s32 *)D_005B3744));
            return;
        }
        func_00136FD8(0, 0x16);
    }
}
