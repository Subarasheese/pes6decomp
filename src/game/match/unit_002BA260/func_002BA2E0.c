/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00BBB8C0(s32);                             /* extern */
extern char D_005E2FC1[];
extern char D_005E328E[];

s32 func_002BA2E0(void *arg0) {
    (*(s8 *)D_005E2FC1) = (*(u8 *)D_005E328E) + func_00BBB8C0(M2C_FIELD(arg0, s32 *, 4));
    return 0;
}
