/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_00CCB690[];

s32 func_00C379B0(void) {
    s32 i;
    u8 *p = D_00CCB690;
    for (i = 0; i < 4; i++) {
        if (p[0x6C] == 0) {
            return i + 1;
        }
        p += 0x94;
    }
    return 0;
}
