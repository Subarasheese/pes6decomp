/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00AFBAB0(u8);                              /* extern */
s32 func_00BDB8B0(void *);                          /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E00[];

s32 func_009040C0(void *arg0, s32 arg1) {
    f32 temp_f2;
    s32 var_s2;
    s32 var_s3;
    s32 var_v1;
    void *var_s1;

    var_s2 = 0;
    if (((func_00AFBAB0(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) + 1) == 0xFF) {
        var_v1 = 1;
    } else {
        var_v1 = (func_00AFBAB0(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) + 1;
    }
    var_s3 = 0;
    var_s1 = ((void *)Pes6MatchPlayers) + (var_v1 * 0x240);
    do {
        if ((func_00BDB8B0(var_s1) != 0) && (arg0 != var_s1)) {
            if ((arg1 & 0xFF) == 1) {
                if (M2C_FIELD((((void *)D_00591E00) + (M2C_FIELD(arg0, u8 *, 0x13) * 2)), u8 *, 0x4F) != M2C_FIELD(var_s1, u8 *, 0)) {
                    goto block_10;
                }
            } else {
block_10:
                temp_f2 = (f32) M2C_FIELD(arg0, s16 *, 0x14);
                if ((temp_f2 * M2C_FIELD(var_s1, f32 *, 0xE0)) < (M2C_FIELD(arg0, f32 *, 0xE0) * temp_f2)) {
                    var_s2 += 1;
                }
            }
        }
        var_s3 += 1;
        var_s1 += 0x240;
    } while (var_s3 < 0xA);
    return var_s2 & 0xFF;
}
