/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00277220(void *, M2C_UNK);                 /* extern */
s32 func_0028F230(s32, void *, u8, s32, s32);       /* extern */
s32 func_009A0270();                                /* extern */
s32 func_00C32010(u8 *, s32);                       /* extern */
extern char Pes6MatchSquads[];

void func_00C31960(u8 *arg0, s32 arg1, s32 *arg2, s32 arg3, s32 arg4) {
    s32 spA8;
    s32 spAC;
    s32 *var_s1;
    s32 var_a0;
    s32 var_a4;
    s32 var_s3;
    s32 var_s4;
    s32 var_s6;
    s32 var_v1;
    u8 temp_s7;
    void *temp_s0;
    void *var_s2;

    var_s6 = 0;
    var_s4 = 0;
    var_s1 = arg2;
    spAC = arg3;
    spA8 = arg4;
    var_s2 = ((void *)Pes6MatchSquads) + (*arg0 * 0x6900);
    do {
        if ((func_00C32010(arg0, var_s4) != 0) && (M2C_FIELD(var_s2, u8 *, 0xD4) != 0) && (M2C_FIELD(var_s2, u8 *, 0x14) == 0)) {
            var_a4 = (s32) M2C_FIELD(var_s2, s32 *, 0xD8) / (s32) ((M2C_FIELD(var_s2, u32 *, 0x18) / 100) + ((u32) M2C_FIELD(var_s2, u32 *, 0x18) >> 0x1F));
            if (var_a4 >= 0x3D) {
                var_a4 = 0x64;
            }
            temp_s0 = var_s6 + (((void *)Pes6MatchSquads) + (*arg0 * 0x6900));
            var_s3 = func_0028F230(arg1, temp_s0 + 0x68, (u8) spA8, spAC, var_a4);
            if (func_00C32010(arg0, var_s4) == 0) {
                goto block_12;
            }
            if ((M2C_FIELD(temp_s0, u8 *, 0xF8) == 0) && (M2C_FIELD(temp_s0, u8 *, 0xF9) == 0)) {
                temp_s7 = M2C_FIELD(temp_s0, u8 *, 0x102);
                if (((func_009A0270() & 0xFF) - 5) < (s32) temp_s7) {
                    goto block_12;
                }
                var_a0 = func_00277220(temp_s0 + 0xF0, 1);
            } else {
block_12:
                var_a0 = 0;
            }
            if (var_a0 != 2) {

            } else {
                var_v1 = var_s3 >> 1;
                if (var_s3 < 0) {
                    var_v1 = (s32) (var_s3 + 1) >> 1;
                }
                var_s3 = var_v1;
            }
            *var_s1 = var_s3;
        } else {
            *var_s1 = 0;
        }
        var_s4 += 1;
        var_s2 += 0x348;
        var_s1 += 4;
        var_s6 += 0x348;
    } while (var_s4 < 0x20);
}
