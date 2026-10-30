/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012DD30(M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *, s32); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
extern char D_005B3744[];
extern char D_005BD3B4[];
extern M2C_UNK func_001456A0;

void func_001456C8(s32 arg0) {
    if ((arg0 >= 0) && ((*(s32 *)D_005BD3B4) >= 0)) {
        func_0012DD30(0, 0x1F4, 0xFA, func_00135080(0x31), &func_001456A0, (*(s32 *)D_005B3744));
        return;
    }
    func_0012DD30(2, 0x1F4, 0xFA, func_00135080(0x34), &func_001456A0, (*(s32 *)D_005B3744));
}
