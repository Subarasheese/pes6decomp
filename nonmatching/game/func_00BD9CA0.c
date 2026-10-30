/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E1C90(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char D_00591E14[];
extern char D_005926FD[];
extern char D_005926FE[];
extern char D_00CBD269[];

s32 func_00BD9CA0(void) {
    s32 var_a0;

    if ((*(u8 *)D_00CBD269) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32) (*(u8 *)D_00CBD269) % 23;
    }
    if (((func_009E1C90(0) & 0xFF) == 4) && ((*(u8 *)D_005926FD) == 1) && ((*(u8 *)D_005926FE) == 5) && ((func_009E1C90(1) & 0xFF) == 0xA) && (((u32) (*(u32 *)D_00591E14) < (u32) ((u8) (*(u8 *)D_00591BE4) >> 1)) || (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x16) == 0x47))) {
        return 1;
    }
    return 0;
}
