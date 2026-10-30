/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00208250(s32);
extern void func_001A5F50(s32, s32);
M2C_UNK func_001A5E00(M2C_UNK);                     /* extern */
extern char D_00C9F230[];
extern M2C_UNK *D_00C9F23C;
extern M2C_UNK func_00C22BE0;

s32 func_00C22C20(void) {
    func_001A5F50(5, func_00208250((*(s32 *)D_00C9F230)));
    func_001A5E00(5);
    D_00C9F23C = &func_00C22BE0;
    return 1;
}
