/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
s32 func_00B29C50(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char D_00591C09[];
extern char D_00591E14[];
extern char D_00591E57[];
extern char D_00591F10[];
extern char D_00591F24[];
extern char D_00592372[];

s32 func_00BF65B0(void) {
    s32 var_a0;
    s32 var_v0;

    if ((*(u8 *)D_00591F24) == 5) {
        if (((u32) (*(u32 *)D_00591E14) >= (u32) ((u8) (*(u8 *)D_00591BE4) >> 1)) && ((*(u8 *)D_00591F10) == 0) && ((*(u8 *)D_00592372) != 0)) {
            if ((*(u8 *)D_00591C09) != 5) {
                goto block_5;
            }
            if (func_00B29C50(5) != 0) {
block_5:
                if ((*(u8 *)D_00591E57) == 0xFF) {
                    var_a0 = 1;
                } else {
                    var_a0 = (s32) (*(u8 *)D_00591E57) % 23;
                }
                if ((func_002DCA30() != 0) || (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x16) != 0x47)) {
                    var_v0 = 1;
                } else {
                    goto block_12;
                }
            } else {
                goto block_12;
            }
        } else {
block_12:
            var_v0 = 0;
        }
        if (var_v0 != 0) {
            return 1;
        }
        goto block_15;
    }
block_15:
    return 0;
}
