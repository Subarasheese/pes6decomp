/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00591DCC[];
extern char Pes6MatchContext_Half[];

void Pes6MatchContext_SetHalf(u8 arg0) {
    (*(u8 *)Pes6MatchContext_Half) = arg0;
    (*(s8 *)D_00591DCC) = (s8) ((s32) (*(u8 *)Pes6MatchContext_Half) % 2);
}
