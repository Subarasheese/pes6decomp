/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_00591DCD[];
extern char D_00591E4D[];
extern char D_00591F24[];
extern char D_00CBCC62[];

s32 func_008FCF10(s32 arg0) {
    s32 var_a1;

    if (((*(u8 *)D_00591F24) != 4) && ((*(u8 *)D_00591F24) != 1) && ((*(u8 *)D_00591F24) != 2) && ((*(u8 *)D_00591F24) != 3)) {
        return 0;
    }
    if ((*(u8 *)D_00CBCC62) == 0) {
        return 0;
    }
    if ((*(u8 *)D_00591E4D) == 0xFF) {
        var_a1 = 1;
    } else {
        var_a1 = (s32) (*(u8 *)D_00591E4D) % 23;
    }
    return arg0 == (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a1 * 0x240)), u8 *, 0x13) ^ ((*(u8 *)D_00591DCD) & 1));
}
