/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00145750(s32);

void func_00151550(void *arg0) {
    s32 n;
    s32 i;
    s32 *p;

    n = M2C_FIELD(arg0, s32 *, 0);
    p = M2C_FIELD(arg0, s32 **, 4);
    for (i = 0; i < n; i++) {
        s32 v = p[i];
        if (v != 0) {
            func_00145750(v);
        }
    }
}
