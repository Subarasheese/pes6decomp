/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00133C00(u8 *arg0, u8 *arg1) {
    s32 i;
    s32 n;
    s32 *p;

    if (arg1 == NULL) {
        *(void **)arg0 = NULL;
        if (arg0 != NULL) {
            n = arg0[5];
            p = *(s32 **)(arg0 + 0xC);
            for (i = 0; i < n; i++) {
                p[i] = 0;
            }
        }
        return;
    }
    if (arg1[5] == arg0[5]) {
        *(u8 **)arg0 = arg1;
        *(s32 *)(arg0 + 8) = 0;
        arg0[7] = 1;
    }
}
