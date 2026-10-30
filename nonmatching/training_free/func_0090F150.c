/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AFBAB0(u8);                              /* extern */
s32 func_00BDB8B0(void *);                          /* extern */
extern char Pes6MatchPlayers[];

s32 func_0090F150(void *arg0) {
    s32 var_a0;
    s32 var_s0;
    u8 temp_a0;
    u8 temp_v1;
    void *var_s1;

    if (M2C_FIELD(arg0, u8 *, 0x1D5) == 0) {
        goto block_17;
    }
    if ((func_00AFBAB0(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32) (func_00AFBAB0(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) % 23;
    }
    var_s0 = 0;
    var_s1 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
loop_7:
    if ((func_00BDB8B0(var_s1) != 0) && (arg0 != var_s1)) {
        temp_a0 = M2C_FIELD(var_s1, u8 *, 0x1D5);
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x1D5);
        if (temp_v1 == temp_a0) {
            if ((s32) M2C_FIELD(arg0, u8 *, 0x1D8) < 2) {
                return 1;
            }
            if ((s32) M2C_FIELD(var_s1, u8 *, 0x1D8) >= 2) {
                if ((u32) M2C_FIELD((var_s1 + (temp_a0 * 4)), u32 *, 0x158) < (u32) M2C_FIELD((arg0 + (temp_v1 * 4)), u32 *, 0x158)) {
                    return 1;
                }
                goto block_16;
            }
            goto block_17;
        }
    }
block_16:
    var_s0 += 1;
    var_s1 += 0x240;
    if (var_s0 >= 0xB) {
block_17:
        return 0;
    }
    goto loop_7;
}
