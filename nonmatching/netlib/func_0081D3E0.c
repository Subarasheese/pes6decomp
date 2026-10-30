/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001BBC60(s32);                         /* extern */
s32 func_001BBEC0(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
M2C_UNK func_001E7610(s32);                         /* extern */
M2C_UNK func_001F0590(s32);                         /* extern */
s32 func_0021DF90(M2C_UNK);                         /* extern */
s32 func_0021E000(M2C_UNK);                         /* extern */
M2C_UNK func_00819C60(s32);                         /* extern */
M2C_UNK func_0081A2B0(s32);                         /* extern */
M2C_UNK func_0081BC80(s32);                         /* extern */
M2C_UNK func_0081C440(s32);                         /* extern */
extern char D_00888408[];
extern char D_008A3CE0[];
extern char D_008A3CE8[];
extern char D_008A3CF0[];
extern char D_008A3CF8[];
extern char D_008A3D00[];
extern char D_008A3D08[];
extern char D_008A3D10[];
extern char D_008A3D18[];
extern char D_008A3D20[];
extern char D_008A3D28[];
extern char D_008A3D30[];
extern M2C_UNK func_0081CCE0;
extern M2C_UNK func_0081CDC0;
extern M2C_UNK func_0081CFD0;

s32 func_0081D3E0(void) {
    s32 temp_v0;

    if ((*(s32 *)D_008A3D10) == 1) {
        return 0;
    }
    if (((*(s32 *)D_008A3D00) != 0) || ((*(s32 *)D_008A3D08) == 1)) {
        return 0;
    }
    (*(s8 *)D_008A3D20) = 0;
    (*(s32 *)D_008A3D28) = 0;
    (*(s32 *)D_008A3D30) = 0;
    temp_v0 = func_001BBEC0(&func_0081CFD0, &func_0081CDC0, &func_0081CCE0, 0, 0, ((void *)D_00888408));
    (*(s32 *)D_008A3D00) = temp_v0;
    if (temp_v0 == 0) {
        func_0081C440((*(s32 *)D_008A3CF8));
        (*(s32 *)D_008A3CF8) = 0;
        func_0081A2B0((*(s32 *)D_008A3CE8));
        (*(s32 *)D_008A3CE8) = 0;
        func_0081BC80((*(s32 *)D_008A3CF0));
        (*(s32 *)D_008A3CF0) = 0;
        func_00819C60((*(s32 *)D_008A3CE0));
        (*(s32 *)D_008A3CE0) = 0;
        (*(s32 *)D_008A3D18) = 0;
        return 0;
    }
    func_001BBC60(temp_v0);
    (*(s32 *)D_008A3D10) = 1;
    (*(s32 *)D_008A3D08) = 1;
    func_001F0590(func_0021DF90(0x17));
    func_001E7610(func_0021E000(0x160));
    func_001D5F80(0x103D8);
    func_001D5F80(0x103D1);
    func_001D5F80(0x103C8);
    return 1;
}
