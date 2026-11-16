/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_00CBBE48[];

s32 func_00BEEA30(u8 *arg0) {
    u8 *p;
    s32 i;

    i = 0;
    p = D_00CBBE48;
    do {
        if (p[9] == *arg0) {
            return 1;
        }
        i += 1;
        p += 1;
    } while (i < 3);
    return 0;
}
