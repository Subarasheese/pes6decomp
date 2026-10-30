/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A5F50(s32, s32);
extern s32 func_00208210(s32);
M2C_UNK func_001A5BE0(M2C_UNK);                     /* extern */
M2C_UNK func_001A5E00(M2C_UNK);                     /* extern */
extern char D_00592373[];

void func_00B79620(s32 arg0) {
    func_001A5BE0(4);
    func_001A5F50(4, arg0);
    func_001A5E00(4);
    (*(s8 *)D_00592373) = func_00208210(arg0);
}
