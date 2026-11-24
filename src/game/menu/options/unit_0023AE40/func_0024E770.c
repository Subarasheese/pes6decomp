/* compiler: mwcc-3.0.1b210 */
#include "pes6/match_pad_assignment.h"

extern s32 func_0024E7F0(s32);
extern u8 D_003E7504;
extern u8 D_003E7505;

void func_0024E770(void) {
    u16 homePad = (u8)func_0024E7F0(0);
    u16 awayPad = (u8)func_0024E7F0(1);
    if (homePad == 0xff) {
        homePad = (u8)func_0024E7F0(1);
        if (homePad == 0xff)
            homePad = 0;
    }
    if (awayPad == 0xff)
        awayPad = homePad;
    D_003E7504 = homePad;
    D_003E7505 = awayPad;
}
