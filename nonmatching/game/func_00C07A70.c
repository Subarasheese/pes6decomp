/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00C9F170[];

s32 func_00C07A70(void *a0, char *a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s32 (**tbl)(void *, char *, s32, s32, s32, s32) = (s32 (**)(void *, char *, s32, s32, s32, s32))D_00C9F170;
    return tbl[*(s32 *)(a1 + 0x24) % 5](a0, a1, a2, a3, a4, a5);
}
