/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002210F0(s32);
M2C_UNK func_00B912F0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
s32 func_00B94DF0(u8, M2C_UNK);                     /* extern */
void *func_00B9C490();                              /* extern */
extern char D_00CE3F28[];
extern char D_00CE3F2C[];
extern char D_00CE3F30[];
extern char D_00CE3F31[];

void func_00B9A8D0(void) {
    void *temp_v0;

    temp_v0 = func_00B9C490();
    M2C_FIELD(temp_v0, s32 *, 0x30) = 0x1D;
    M2C_FIELD(temp_v0, s32 *, 0x34) = 0;
    (*(s8 *)D_00CE3F31) = 1;
    (*(u8 *)D_00CE3F30) = (u8) M2C_FIELD(temp_v0, s32 *, 0x34);
    (*(s32 *)D_00CE3F28) = func_00B94DF0((*(u8 *)D_00CE3F30), 1);
    (*(s32 *)D_00CE3F2C) = func_002210F0((s32) (*(u8 *)D_00CE3F30));
    func_00B91490(0x22);
    func_00B912F0(0x22, 1);
}
