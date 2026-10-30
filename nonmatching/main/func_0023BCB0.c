/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
extern s32 func_0017F900(void);
extern s32 func_0021DF90(s32);
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
s32 func_008223F0();                                /* extern */
M2C_UNK func_008B33F0(M2C_UNK);                     /* extern */
M2C_UNK func_008B34C0();                            /* extern */
extern s32 D_003E9A48;
extern char D_00510FD0[];

s32 func_0023BCB0(void) {
    if (func_0017F900() != 1) {
        return 0;
    }
    D_003E9A48 = 0;
    func_008B34C0();
    if (((*(s32 *)D_00510FD0) != 0xF) || (func_008223F0() != 1)) {
        func_001E7140(func_0021E000(0x15BU));
    }
    func_001F0210(func_0021DF90(0x14));
    func_008B33F0(0x1038C);
    if (((*(s32 *)D_00510FD0) != 0xF) || (func_008223F0() != 1)) {
        func_008B33F0(0x1003F);
    }
    return 1;
}
