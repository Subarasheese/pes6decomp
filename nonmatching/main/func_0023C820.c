/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
s32 func_0021DF90(M2C_UNK);                         /* extern */
s32 func_0021E000(M2C_UNK);                         /* extern */
s32 func_00309420();                                /* extern */
s32 func_008223F0();                                /* extern */
M2C_UNK func_008B33F0(M2C_UNK);                     /* extern */
extern char D_00510FD0[];

void func_0023C820(void) {
    if ((func_00309420() == 1) && (func_008223F0() == 1)) {
        func_001E7140(func_0021E000(0x150));
    } else {
        func_001E7140(func_0021E000(0x14F));
    }
    func_001F0210(func_0021DF90(0x12));
    if (func_00309420() == 0) {
        func_008B33F0(0x1038A);
    } else {
        func_008B33F0(0x1039B);
    }
    if (((*(s32 *)D_00510FD0) != 0xF) || (func_008223F0() != 1)) {
        func_008B33F0(0x1003F);
    }
}
