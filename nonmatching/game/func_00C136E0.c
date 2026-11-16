/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 D_00CBFAA0[];

void *func_00C136E0(s32 arg0, s32 arg1) {
    u8 *p;

    if (arg0 != -1) {
        p = (u8 *)arg0 - 4;
        while (p >= D_00CBFAA0) {
            if (p[2] == (arg1 & 0xFF)) {
                return p;
            }
            p -= 4;
        }
    }
    return (void *)-1;
}
