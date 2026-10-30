/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00968010(void *, void *);                  /* extern */
s32 func_00990150(s32, u16, M2C_UNK, M2C_UNK, u8 *); /* extern */
extern char Pes6MatchPlayers[];

void func_009682D0(void *arg0) {
    u8 sp60;
    s32 temp_s0;
    s32 var_a0;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    u8 *var_s1;
    u8 temp_v1;

    temp_s0 = func_00990150(M2C_FIELD(arg0, u8 *, 0x13) ^ 1, M2C_FIELD(arg0, u16 *, 0x26), 0x4000, 0x400, &sp60) & 0xFF;
    var_s3 = 0;
    var_v0 = temp_s0 > 0;
    if (temp_s0 > 0) {
        var_s1 = &sp60;
        do {
            var_s2 = 0;
            if (var_v0 != 0) {
                temp_v1 = *var_s1;
                if (temp_v1 == 0xFF) {
                    var_a0 = 1;
                } else {
                    var_a0 = (s32) temp_v1 % 23;
                }
                if (func_00968010(arg0, ((void *)Pes6MatchPlayers) + (var_a0 * 0x240)) != 0) {
                    var_s2 = 1;
                }
            }
            var_s3 += 1;
            var_v0 = var_s2;
            var_s1 += 1;
        } while (var_s3 < temp_s0);
    }
}
