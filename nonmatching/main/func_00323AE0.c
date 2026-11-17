/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u32 func_00292CD0(s32 i);

s32 func_00323AE0(char *p) {
    s32 v;
    s32 i;
    u32 r;

    for (i = 0; i < 2; i++) {
        r = func_00292CD0(i);
        if (r == 0) {
            v = 6;
        } else if (r == 1) {
            v = 5;
        } else if (r == 2) {
            v = 4;
        } else if (r == 3) {
            v = 3;
        } else if (r == 4) {
            v = 2;
        } else if (r == 5) {
            v = 1;
        }
        *(s32 *)(p + 0x54) = v;
        p += 0x3C;
    }
    return 1;
}
