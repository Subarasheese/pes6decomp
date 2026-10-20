/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_005E2FC5[];
extern char D_005E2FC6[];

s32 func_002BA8D0(void *arg0) {
    (*(s8 *)D_005E2FC5) = (s8) M2C_FIELD(arg0, s32 *, 4);
    (*(s8 *)D_005E2FC6) = (s8) M2C_FIELD(arg0, s32 *, 8);
    return 0;
}
