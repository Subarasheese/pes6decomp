/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
extern char D_005B3744[];
extern M2C_UNK func_00137CB0;

void func_00137E48(void) {
    func_0012DD30(2, 0x1F4, 0xFA, func_00135080(0x62), &func_00137CB0, (*(s32 *)D_005B3744));
}
