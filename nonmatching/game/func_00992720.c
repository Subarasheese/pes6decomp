/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_0058E5C6[];

s32 func_00992720(void) {
    s32 var_v0;

    var_v0 = 0;
    if (((*(u8 *)D_0058E5C6) == 0xE1) && (M2C_FIELD(((void *)Pes6MatchPlayers), u16 *, 0x18) == 0xE) && (M2C_FIELD(((void *)Pes6MatchPlayers), s32 *, 0x1C) >= 0x1300)) {
        var_v0 = 1;
    }
    return var_v0;
}
