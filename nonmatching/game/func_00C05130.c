/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00CB52A0[];

s32 func_00C05130(u8 *arg0) {
    char *p;
    s32 i;
    u32 v;

    v = *arg0;
    p = D_00CB52A0;
    for (i = 0; i < 10; i++) {
        if (*(u8 *)(p + 0x444) == v) {
            return 1;
        }
        p += 0x40;
    }
    return 0;
}
