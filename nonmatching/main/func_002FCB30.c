/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009E1C90(M2C_UNK);                         /* extern */
s32 func_00BF6280();                                /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E19[];

s32 func_002FCB30(void) {
    s32 temp_v0;
    s32 var_a0;
    s32 var_a1;
    s32 var_s0;

    var_s0 = 0;
    if ((func_009E1C90(1) & 0xFF) != 0xC) {

    } else {
        temp_v0 = func_00BF6280();
        if (temp_v0 != 8) {
            var_a1 = 1;
            if (temp_v0 != 1) {

            } else {
                if ((*(u8 *)D_00591E19) != 0xFF) {
                    var_a1 = (s32) (*(u8 *)D_00591E19) % 23;
                }
                if (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a1 * 0x240)), u8 *, 0x12) != 0) {
                    var_s0 = 0x3C;
                } else {
                    var_s0 = 0x3B;
                }
            }
        } else {
            if ((*(u8 *)D_00591E19) == 0xFF) {
                var_a0 = 1;
            } else {
                var_a0 = (s32) (*(u8 *)D_00591E19) % 23;
            }
            if (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x12) != 0) {
                var_s0 = 0x2A;
            } else {
                var_s0 = 0x29;
            }
        }
    }
    return var_s0;
}
