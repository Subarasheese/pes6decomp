/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char Pes6MatchPlayers[];
extern char D_00591E19[];

s32 func_00A09950(void *arg0) {
    s32 value;

    if ((*(u8 *)D_00591E19) == 0xFF) {
        return 1;
    }
    if ((*(u8 *)D_00591E19) != 0xFF) {
        value = (s32)(*(u8 *)D_00591E19) % 23;
    } else {
        value = 1;
    }
    if (!(M2C_FIELD(arg0, u8 *, 0x13) !=
          M2C_FIELD((((char *)Pes6MatchPlayers) + (value * 0x240)), u8 *, 0x13))) {
        return 0;
    }
    return 1;
}
