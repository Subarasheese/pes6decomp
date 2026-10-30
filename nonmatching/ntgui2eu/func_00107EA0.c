/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001190E8(s32, s32);                    /* extern */
M2C_UNK func_001191E0(u8, u8, u8, u8);              /* extern */
M2C_UNK func_00119370(s32, s32, M2C_UNK);           /* extern */
extern char D_002B9F00[];
extern char D_002BA0C0[];

void func_00107EA0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_001191E0(M2C_FIELD(((void *)D_002BA0C0), u8 *, 0x420), M2C_FIELD(((void *)D_002BA0C0), u8 *, 0x421), M2C_FIELD(((void *)D_002BA0C0), u8 *, 0x422), M2C_FIELD(((void *)D_002BA0C0), u8 *, 0x423));
    func_001190E8(arg2, arg3 - (*(s32 *)D_002B9F00));
    func_00119370(arg1, arg0, 0xC0000);
}
