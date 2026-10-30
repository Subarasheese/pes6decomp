/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(s32, u16);                        /* extern */
s32 func_00AFBA70(u8);                              /* extern */
s32 func_00BDB8B0(u8 *);                            /* extern */
extern char Pes6MatchPlayers[];

s32 func_009522C0(u8 *arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    u32 temp_v1;
    u8 *var_s3;
    u8 temp_a0;

    var_s2 = 0;
    if ((func_00AFBA70(*arg0) & 0xFF) == 0xFF) {
        var_v1 = 1;
    } else {
        var_v1 = (s32) (func_00AFBA70(*arg0) & 0xFF) % 23;
    }
    var_s0 = 0;
    var_s3 = ((void *)Pes6MatchPlayers) + (var_v1 * 0x240);
    do {
        if (func_00BDB8B0(var_s3) != 0) {
            temp_a0 = *var_s3;
            temp_v1 = M2C_FIELD((arg0 + (temp_a0 * 4)), u32 *, 0x158);
            if (temp_v1 >= 0x400000U) {
                var_s1 = 0;
            } else {
                var_s1 = 0x200;
                if (temp_v1 < 0x100000U) {
                    var_s1 = 0x400 & 0xFFFF;
                }
            }
            if ((temp_v1 < arg3) && ((func_009B3070(arg1, M2C_FIELD((arg0 + (temp_a0 * 2)), u16 *, 0x128)) & 0xFFFF) < ((arg2 & 0xFFFF) + (var_s1 & 0xFFFF)))) {
                var_s2 += 1;
            }
        }
        var_s0 += 1;
        var_s3 += 0x240;
    } while (var_s0 < 0xB);
    return var_s2 & 0xFF;
}
