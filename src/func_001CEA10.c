/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00103538(M2C_UNK *, M2C_UNK);          /* extern */
s64 func_00138C00(M2C_UNK *, s32, s32);             /* extern */
extern char D_0052AB10[];
extern char D_0052AB38[];
extern char D_0052AB40[];

void func_001CEA10(s32 arg0, s32 arg1) {
    (*(s64 *)D_0052AB38) = func_00138C00(((void *)D_0052AB10), arg0, arg1);
    (*(s64 *)D_0052AB40) = 0x61;
    func_00103538(((void *)D_0052AB10), 0);
}
