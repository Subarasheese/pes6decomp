/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021DF90(s32);
extern s32 func_0021E000(u32);
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
M2C_UNK func_00819C60(s32);                         /* extern */
M2C_UNK func_0081A2B0(s32);                         /* extern */
M2C_UNK func_0081BC80(s32);                         /* extern */
M2C_UNK func_0081C440(s32);                         /* extern */
extern char D_008A3CE0[];
extern char D_008A3CE8[];
extern char D_008A3CF0[];
extern char D_008A3CF8[];
extern char D_008A3D00[];
extern char D_008A3D10[];
extern char D_008A3D18[];
extern char D_008A3D20[];
extern char D_008A3D28[];
extern char D_008A3D30[];

s32 func_0081CCE0(void) {
    func_0081C440((*(s32 *)D_008A3CF8));
    (*(s32 *)D_008A3CF8) = 0;
    func_0081A2B0((*(s32 *)D_008A3CE8));
    (*(s32 *)D_008A3CE8) = 0;
    func_0081BC80((*(s32 *)D_008A3CF0));
    (*(s32 *)D_008A3CF0) = 0;
    func_00819C60((*(s32 *)D_008A3CE0));
    (*(s32 *)D_008A3CE0) = 0;
    (*(s32 *)D_008A3D10) = 0;
    (*(s32 *)D_008A3D18) = 0;
    (*(s32 *)D_008A3D00) = 0;
    (*(s8 *)D_008A3D20) = 0;
    (*(s32 *)D_008A3D28) = 0;
    (*(s32 *)D_008A3D30) = 0;
    func_001D5C40(0x103C8);
    func_001D5C40(0x103D1);
    func_001D5C40(0x103D8);
    func_001E7140(func_0021E000(0x160U));
    func_001F0210(func_0021DF90(0x17));
    return 1;
}
