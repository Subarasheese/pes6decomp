/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_00591E19[];

s32 func_00A09950(void *arg0) {
    s32 var_a0;

    if ((*(u8 *)D_00591E19) == 0xFF) {
        return 1;
    }
    if ((*(u8 *)D_00591E19) != 0xFF) {
        var_a0 = (s32) (*(u8 *)D_00591E19) % 23;
    } else {
        var_a0 = 1;
    }
    if (M2C_FIELD(arg0, u8 *, 0x13) != M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x13)) {
        return 1;
    }
    return 0;
}
