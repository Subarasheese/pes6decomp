/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];
extern char Pes6MatchSquads[];

s32 func_00312000(void **arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_a1;
    u8 temp_a3;
    u8 temp_v1_2;
    void *temp_v0;

    temp_v1 = arg1 & 0xFF;
    if (temp_v1 != 0) {
        if (temp_v1 < 0x17) {
            if (temp_v1 == 0xFF) {
                var_a1 = 1;
            } else {
                var_a1 = temp_v1 % 23;
            }
            temp_v0 = ((void *)Pes6MatchPlayers) + (var_a1 * 0x240);
            temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 0x12);
            temp_a3 = M2C_FIELD(temp_v0, u8 *, 0x11);
            if (((s32) temp_v1_2 >= 0) && ((s32) temp_a3 >= 0) && ((s32) temp_v1_2 < 2)) {
                if ((s32) temp_a3 < 0x20) {
                    *arg0 = (temp_a3 * 0x348) + (((void *)Pes6MatchSquads) + (temp_v1_2 * 0x6900)) + 0xF0;
                    return 1;
                }
                goto block_15;
            }
block_15:
            *arg0 = NULL;
            return 0;
        }
        goto block_4;
    }
block_4:
    *arg0 = NULL;
    return 0;
}
