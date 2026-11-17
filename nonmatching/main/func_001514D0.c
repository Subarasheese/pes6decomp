/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00145590(s32);

void func_001514D0(void *arg0) {
    s32 n;
    s32 i;
    s32 *p;

    n = M2C_FIELD(arg0, s32 *, 0);
    for (i = 0; i < n; i++) {
        p = (s32 *)(M2C_FIELD(arg0, s32 *, 4) + i * 4);
        if (*p != 0) {
            func_00145590(*p);
        }
    }
}
