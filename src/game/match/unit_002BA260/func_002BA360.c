/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00BBB8C0(s32);                             /* extern */
extern char D_005E2FC1[];

s32 func_002BA360(void *arg0) {
    (*(s8 *)D_005E2FC1) = M2C_FIELD(arg0, s32 *, 4) + func_00BBB8C0(M2C_FIELD(arg0, s32 *, 8));
    return 0;
}
