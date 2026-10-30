/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(s32, u16);                        /* extern */
s32 func_00AFBA70(u8);                              /* extern */
s32 func_00AFBAB0(u8);                              /* extern */
extern char Pes6MatchPlayers[];

s32 func_00990150(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 *arg5) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    u8 *var_s4;
    u8 temp_v1;
    void *var_s3;

    var_s4 = arg5;
    var_s0 = arg3 & 0xFFFF;
    var_s1 = 0;
    if (var_s0 >= 0x10000) {
        var_s0 = 0;
    }
    if (var_s0 == 0) {
        var_s0 = 0x10000;
    }
    if (arg1 != M2C_FIELD(arg0, u8 *, 0x13)) {
        if ((func_00AFBA70(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = (s32) (func_00AFBA70(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) % 23;
        }
        var_v1 = var_a0 * 0x240;
    } else {
        if ((func_00AFBAB0(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) == 0xFF) {
            var_a0_2 = 1;
        } else {
            var_a0_2 = (s32) (func_00AFBAB0(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) % 23;
        }
        var_v1 = var_a0_2 * 0x240;
    }
    var_s3 = ((void *)Pes6MatchPlayers) + var_v1;
    var_s2 = 0;
    do {
        if ((M2C_FIELD(M2C_FIELD(var_s3, void **, 4), u8 *, 0x2C) != 0) && (arg0 != var_s3)) {
            temp_v1 = M2C_FIELD(var_s3, u8 *, 0);
            if (((u32) M2C_FIELD((arg0 + (temp_v1 * 4)), u32 *, 0x158) < (u32) (arg4 * arg4)) && ((func_009B3070(arg2, M2C_FIELD((arg0 + (temp_v1 * 2)), u16 *, 0x128)) & 0xFFFF) < var_s0)) {
                if (var_s4 != NULL) {
                    *var_s4 = M2C_FIELD(var_s3, u8 *, 0);
                    var_s4 += 1;
                }
                var_s1 += 1;
            }
        }
        var_s2 += 1;
        var_s3 += 0x240;
    } while (var_s2 < 0xB);
    return var_s1 & 0xFF;
}
