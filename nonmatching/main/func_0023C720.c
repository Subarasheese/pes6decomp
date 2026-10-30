/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
extern int func_00309420(void);
extern s32 func_0017F900(void);
extern s32 func_0021DF90(s32);
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
s32 func_008223F0();                                /* extern */
M2C_UNK func_008B33F0(M2C_UNK);                     /* extern */
M2C_UNK func_008B34C0();                            /* extern */
extern s32 D_003E9A40;
extern char D_00510FD0[];

s32 func_0023C720(void) {
    if (func_0017F900() != 1) {
        return 0;
    }
    D_003E9A40 = 0;
    func_008B34C0();
    if ((func_00309420() == 1) && (func_008223F0() == 1)) {
        func_001E7140(func_0021E000(0x150U));
    } else {
        func_001E7140(func_0021E000(0x14FU));
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
    return 1;
}
