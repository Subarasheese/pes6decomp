/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_00591BE4[];
extern char D_00591DB8[];
extern char D_00591DBC[];
extern char Pes6MatchContext_Half[];
extern char Pes6MatchClock_Remaining[];

u8 func_0099FF80(u8 *arg0, u8 *arg1) {
    u32 n;

    n = (u32)((*(f32 *)D_00591DBC) * (f32)(u32)((*(s32 *)D_00591DB8) - (*(s32 *)Pes6MatchClock_Remaining))) + 1;
    *arg0 = n / ((*(u8 *)D_00591BE4) * 0x3C);
    *arg1 = (n % ((*(u8 *)D_00591BE4) * 0x3C)) / (*(u8 *)D_00591BE4);
    if ((*(s32 *)Pes6MatchClock_Remaining) == 0) {
        switch ((*(u8 *)Pes6MatchContext_Half)) {
        case 0:
        case 1:
            *arg0 -= 1;
            *arg1 = 0x3B;
            break;
        case 2:
        case 3:
            *arg1 = 0;
            break;
        }
    }
    return (*(u8 *)Pes6MatchContext_Half);
}
