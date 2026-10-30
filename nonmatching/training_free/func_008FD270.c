/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_00591DCD[];
extern char D_00591E4D[];

s32 func_008FD270(void) {
    s32 var_a0;

    if ((*(u8 *)D_00591E4D) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32) (*(u8 *)D_00591E4D) % 23;
    }
    return M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x13) ^ ((*(u8 *)D_00591DCD) & 1);
}
