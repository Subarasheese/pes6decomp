/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_002228B0(void *arg0, s32 arg1, s32 arg2, s32 arg3);

s32 func_002218E0(void *arg0) {
    u8 *p;

    p = (u8 *)func_002228B0(arg0, 3, 4, 0);
    return p == 0 ? 0 : *p;
}
