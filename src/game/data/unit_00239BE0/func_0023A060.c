/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 Pes6EndingScene_Phase;
s32 func_008FF7B0(void);

u8 func_0023A060(void) {
    u8 r = 0;

    if (Pes6EndingScene_Phase < 8) {
        return r;
    }
    if (Pes6EndingScene_Phase == 8) {
        r = func_008FF7B0();
    } else if (Pes6EndingScene_Phase > 8) {
        r = 1;
    }
    return r;
}
