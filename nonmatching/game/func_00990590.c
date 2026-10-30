/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(s32, u16);                        /* extern */
s32 func_00AFBA70(u8);                              /* extern */
s32 func_00AFBAB0(u8);                              /* extern */
extern char Pes6MatchPlayers[];

s32 func_00990590(u8 *arg0, s32 arg1, s32 arg2, u32 arg3, s32 arg4) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    u32 temp_v1;
    u8 temp_a0;
    void *var_s3;

    var_s0 = 0;
    if ((arg4 & 0xFF) == 2) {
        if ((func_00AFBAB0(*arg0) & 0xFF) == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) (func_00AFBAB0(*arg0) & 0xFF) % 23;
        }
        var_v1 = var_a0 * 0x240;
    } else {
        if ((func_00AFBA70(*arg0) & 0xFF) == 0xFF) {
            var_a0_2 = 1;
        } else {
            var_a0_2 = (s32) (func_00AFBA70(*arg0) & 0xFF) % 23;
        }
        var_v1 = var_a0_2 * 0x240;
    }
    var_s3 = ((void *)Pes6MatchPlayers) + var_v1;
    var_s2 = 0;
    do {
        if ((M2C_FIELD(M2C_FIELD(var_s3, void **, 4), u8 *, 0x2C) != 0) && (arg0 != var_s3)) {
            temp_a0 = M2C_FIELD(var_s3, u8 *, 0);
            temp_v1 = M2C_FIELD((arg0 + (temp_a0 * 4)), u32 *, 0x158);
            if (temp_v1 >= 0x400000U) {
                var_s1 = 0;
            } else {
                var_s1 = 0x300;
                if (temp_v1 < 0x100000U) {
                    var_s1 = 0x500 & 0xFFFF;
                }
            }
            if ((temp_v1 < arg3) && ((func_009B3070(arg1, M2C_FIELD((arg0 + (temp_a0 * 2)), u16 *, 0x128)) & 0xFFFF) < ((arg2 & 0xFFFF) + (var_s1 & 0xFFFF)))) {
                var_s0 += 1;
            }
        }
        var_s2 = (var_s2 + 1) & 0xFFFF;
        var_s3 += 0x240;
    } while (var_s2 < 0xB);
    return var_s0 & 0xFF;
}
