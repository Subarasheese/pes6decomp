/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_001BC060(s32);                             /* extern */
M2C_UNK func_001BC780(s32, M2C_UNK);                /* extern */
extern char D_00529A74[];

void func_001BC1E0(void) {
    func_001BC780(func_001BC060((*(s32 *)D_00529A74)), 0);
}
