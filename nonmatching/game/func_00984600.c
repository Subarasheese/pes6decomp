/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00AFBAB0(s32);
s32 func_00904D10(s32, M2C_UNK);                    /* extern */
s32 func_00BDB730(void *);                          /* extern */
extern char Pes6MatchPlayers[];
extern char D_00CB5642[];

s32 func_00984600(s32 arg0) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s32 var_v0_2;
    void *var_s3;

    var_s1 = 0;
    if (((func_00AFBAB0(arg0) & 0xFF) + 1) != 0xFF) {
        var_a0 = (func_00AFBAB0(arg0) & 0xFF) + 1;
    } else {
        var_a0 = 1;
    }
    var_s0 = 0;
    var_s3 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    do {
        if (func_00BDB730(var_s3) == 0) {
            var_s1 += 1;
        }
        var_s0 += 1;
        var_s3 += 0x240;
    } while (var_s0 < 0xA);
    temp_a0 = func_00904D10(arg0, 0) & 0xFF;
    if (var_s1 < 2) {
        if (((s32) (*(u8 *)D_00CB5642) >= 5) && (temp_a0 >= 2)) {
            var_v0 = temp_a0 - 1;
        } else if (var_s1 <= 0) {
            if ((s32) (*(u8 *)D_00CB5642) >= 4) {
                var_v0 = temp_a0 >> 1;
                if (temp_a0 < 0) {
                    var_v0 = (s32) (temp_a0 + 1) >> 1;
                }
            } else {
                var_v0 = 0;
            }
        } else {
            var_v0 = temp_a0 >> 1;
            if (temp_a0 < 0) {
                var_v0 = (s32) (temp_a0 + 1) >> 1;
            }
        }
    } else {
        var_v0_2 = temp_a0 >> 1;
        if (temp_a0 < 0) {
            var_v0_2 = (s32) (temp_a0 + 1) >> 1;
        }
        var_v0 = var_v0_2 + 1;
    }
    return var_v0 & 0xFF;
}
