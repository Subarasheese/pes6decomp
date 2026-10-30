/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(u16, s32);                        /* extern */
extern char D_00CB52A0[];

u16 func_00952760(void *arg0) {
    M2C_UNK *var_s4;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s3;
    s32 var_s5;
    s32 var_s6;
    u16 var_v0;
    u8 temp_s2;

    var_s6 = 0;
    var_s5 = -1;
    var_s4 = ((void *)D_00CB52A0);
    var_s3 = 0;
    var_s0 = 0x3E8;
    do {
        temp_s2 = M2C_FIELD(var_s4, u8 *, 0xD4);
        if ((s32) temp_s2 < 0x63) {
            temp_v0 = temp_s2 + ((u32) (func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), var_s3 & 0xFFFF) & 0xFFFF) >> 0xA);
            if (temp_v0 < var_s0) {
                var_s0 = temp_v0;
                var_s5 = var_s6;
            }
        }
        var_s6 += 1;
        var_s4 += 1;
        var_s3 += 0x2000;
    } while (var_s6 < 8);
    if (var_s5 >= 0) {
        var_v0 = (var_s5 << 0xD) & 0xFFFF;
    } else {
        var_v0 = M2C_FIELD(arg0, u16 *, 0x120);
    }
    return var_v0;
}
