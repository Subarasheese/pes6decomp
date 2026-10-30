/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DED60(void *, s8);
extern void func_001DED10(void *, s8);
M2C_UNK func_00D143A0(s32, s32, M2C_UNK, s32, M2C_UNK); /* extern */
extern void *D_003EB360;
extern char D_00D39594[];
extern char D_00D395A4[];
extern char D_00D39ABC[];

void func_00D14130(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    (*(s32 *)D_00D39594) = arg0;
    (*(s32 *)D_00D39ABC) = 0;
    (*(u8 *)D_00D395A4) = ((*(u8 *)D_00D395A4) & ~2) | 2;
    func_001DED60(D_003EB360, 0);
    func_001DED10(D_003EB360, 1);
    func_00D143A0(arg2, arg3, 0, arg1, 1);
}
