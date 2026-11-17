/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_003E7A0C;
extern u8 D_003E7A0D;
extern u8 D_003E7A0E;
extern u8 D_003E7A0F;
extern char D_00591BBD[];
extern char D_00591BE4[];
extern char D_00591DB8[];
extern char D_00591DBC[];
extern char D_00591DC0[];
extern char Pes6MatchContext_Half[];
extern char Pes6MatchClock_Remaining[];
extern char D_00591F13[];

u8 func_009A0270(void) {
    u8 sp[4];
    u32 d;
    f32 f;
    u32 a0;

    sp[0] = D_003E7A0C;
    sp[1] = D_003E7A0D;
    sp[2] = D_003E7A0E;
    sp[3] = D_003E7A0F;
    if ((*(u8 *)D_00591F13) == 0 && (*(u32 *)Pes6MatchClock_Remaining) != 0) {
        d = (*(u32 *)D_00591DB8) - (*(u32 *)Pes6MatchClock_Remaining);
        f = (*(f32 *)D_00591DBC) * (f32) d;
        a0 = (u32) f;
        return ((*(u8 *)D_00591DC0) + (a0 / ((*(u8 *)D_00591BE4) * 0x3C))) & 0xFF;
    }
    if ((*(u8 *)Pes6MatchContext_Half) < 4) {
        return sp[*(u8 *)Pes6MatchContext_Half];
    }
    if ((*(u8 *)D_00591BBD) == 0) {
        return 0x5A;
    }
    return 0x78;
}
