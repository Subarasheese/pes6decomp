/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern char D_00591DB8[];
extern char D_00591DBC[];
extern char Pes6MatchClock_Remaining[];

u32 func_009A03A0(void) {
    u32 d;
    f32 f;

    d = (*(u32 *)D_00591DB8) - (*(u32 *)Pes6MatchClock_Remaining);
    f = (*(f32 *)D_00591DBC) * (f32) d;
    return (u32) f;
}
