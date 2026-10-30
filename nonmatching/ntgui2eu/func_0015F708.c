/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
extern char D_005B3744[];
extern M2C_UNK func_0015F748;

void func_0015F708(void) {
    func_0012DD30(1, 0x1F4, 0xFA, func_00135080(0x78), &func_0015F748, (*(s32 *)D_005B3744));
}
