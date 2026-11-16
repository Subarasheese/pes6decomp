/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0099D910();
extern u8 Pes6MatchSquads[];

void func_0099D520(u8 *arg0) {
    s32 temp_a3;
    u8 temp_v1;

    temp_a3 = func_0099D910() & 0xFF;
    arg0[0x1CA] = Pes6MatchSquads[arg0[0x12] * 0x6900 + arg0[0x11] * 0x348 + 0x7F] & 0x7F;
    temp_v1 = arg0[0x1CA];
    arg0[0x1CA] = (u8) ((s32) (temp_v1 * temp_a3) / 9);
    if ((s32) arg0[0x1CA] >= 0x64) {
        arg0[0x1CA] = 0x63;
    }
}
