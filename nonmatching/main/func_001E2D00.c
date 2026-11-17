/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_0052AED0[];
extern char D_0052AED4[];

void func_001E2D00(s32 arg0, s32 *arg1, s32 *arg2) {
    char *p;
    s32 n;
    s32 idx;

    if (*(s32 *)D_0052AED0 == 0) {
        return;
    }
    *arg1 = **(s32 **)D_0052AED4;
    *arg2 = *(s32 *)(*(char **)D_0052AED4 + *(s32 *)D_0052AED0 * 0x30 - 0x2C);
    n = *(s32 *)D_0052AED0;
    p = *(char **)D_0052AED4;
    idx = 0;
    if (n == 0) {
        return;
    }
    do {
        if (*(u8 *)(p + 0x2E) == 1) {
            if (arg0 == idx) {
                *arg1 = *(s32 *)p;
            }
            if (arg0 + 1 == idx) {
                *arg2 = *(s32 *)p;
                return;
            }
            idx++;
        }
        n--;
        p += 0x30;
    } while (n != 0);
}
