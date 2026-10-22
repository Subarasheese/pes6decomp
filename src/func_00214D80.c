/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00214D80(u8 *arg0) {
    s32 v;
    s32 *p;

    v = *(s32 *)(arg0 + 0x20);
    p = *(s32 **)(arg0 + 0xB0);
    if (v == 0) {
        v = 1;
    }
    *p = v;
    return -0x80;
}
