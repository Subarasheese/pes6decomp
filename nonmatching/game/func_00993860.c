/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char D_00591E4C[];

s32 func_00993860(void) {
    s32 temp_v1;
    s32 var_a0;
    u8 temp_v1_2;

    if ((*(u8 *)D_00591E4C) != 0) {
        temp_v1 = (*(u8 *)D_00591E4C) & 0xFF;
        if (temp_v1 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = temp_v1 % 23;
        }
        temp_v1_2 = M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x16);
        if ((temp_v1_2 != 3) && (temp_v1_2 != 0x19)) {
            goto block_7;
        }
        return 1;
    }
block_7:
    return 0;
}
