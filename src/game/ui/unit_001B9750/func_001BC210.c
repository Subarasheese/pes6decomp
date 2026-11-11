/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 Pes6Process_GetWork(s32);                             /* extern */
M2C_UNK func_001BC780(s32, M2C_UNK);                /* extern */
extern char D_00529A74[];

void func_001BC210(void) {
    func_001BC780(Pes6Process_GetWork((*(s32 *)D_00529A74)), 1);
}
