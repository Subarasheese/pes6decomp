/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_0058E5C6[];
extern char D_00CBCB37[];

s32 func_009926A0(void) {
    s32 var_v0;

    var_v0 = 0;
    if (((*(u8 *)D_0058E5C6) == 0xE1) && ((M2C_FIELD(((void *)Pes6MatchPlayers), u16 *, 0x18) == 9) || (((*(u8 *)D_00CBCB37) == 0x1A) && (M2C_FIELD(((void *)Pes6MatchPlayers), u16 *, 0x18) == 0xA) && (M2C_FIELD(M2C_FIELD(((void *)Pes6MatchPlayers), void **, 4), f32 *, 0x38) < 6.0f)))) {
        var_v0 = 1;
    }
    return var_v0;
}
