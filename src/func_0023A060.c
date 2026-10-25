/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_003E9A2C;
s32 func_008FF7B0(void);

u8 func_0023A060(void) {
    u8 r = 0;

    if (D_003E9A2C < 8) {
        return r;
    }
    if (D_003E9A2C == 8) {
        r = func_008FF7B0();
    } else if (D_003E9A2C > 8) {
        r = 1;
    }
    return r;
}
