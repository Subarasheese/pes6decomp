/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00142118();                            /* extern */
extern char D_005B3744[];
extern M2C_UNK func_00141FB0;

void func_00141FB8(s32 arg0) {
    if (arg0 >= 0) {
        func_00142118();
        return;
    }
    func_0012DD30(2, 0x1F4, 0xFA, func_00135080(0x33), &func_00141FB0, (*(s32 *)D_005B3744));
}
