/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C17E10(u8, u8);                          /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CB3300[];

s32 func_0030F7F0(u32 *arg0, s32 arg1) {
    s32 temp_s1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    u32 temp_s0;
    u8 temp_a0;
    void *temp_s2;

    temp_v1 = arg1 & 0xFF;
    if (temp_v1 != 0) {
        if (temp_v1 < 0x17) {
            if (temp_v1 == 0xFF) {
                var_a0 = 1;
            } else {
                var_a0 = temp_v1 % 23;
            }
            temp_s2 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
            temp_s1 = (*(s32 *)D_00CB3300);
            temp_a0 = M2C_FIELD(temp_s2, u8 *, 0x12);
            temp_s0 = M2C_FIELD(((temp_a0 * 0x2F4) + temp_s1), u32 *, 0x20);
            temp_v1_2 = func_00C17E10(temp_a0, M2C_FIELD(temp_s2, u8 *, 0x11)) & 0xFF;
            if (temp_v1_2 == 0xFF) {
                *arg0 = 0;
                return 0;
            }
            if (temp_s0 != 0) {
                *arg0 = (u32) (M2C_FIELD(((temp_v1_2 * 0x28) + ((M2C_FIELD(temp_s2, u8 *, 0x12) * 0x2F4) + temp_s1)), s32 *, 0x44) * 0x64) / temp_s0;
                return 1;
            }
            *arg0 = 0;
            return 0;
        }
        goto block_4;
    }
block_4:
    *arg0 = 0;
    return 0;
}
