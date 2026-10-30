/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00136FD8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00153F78(M2C_UNK *, s32);              /* extern */
extern char D_005BD2CC[];
extern char D_005FC0D0[];

void func_001418C0(s32 arg0) {
    func_00153F78(((void *)D_005FC0D0), arg0);
    (*(s32 *)D_005BD2CC) = 1;
    func_00136FD8(5, 6);
}
