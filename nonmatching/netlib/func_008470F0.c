/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002DCA30();                                /* extern */
s32 func_00857C00(s16);                             /* extern */
extern char D_008B09E0[];
extern char D_008B0E20[];

s32 func_008470F0(void) {
    s16 *var_a1;
    s16 *var_s0;
    s16 *var_s5;
    s32 var_a0;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    u32 var_s1;

    var_s5 = ((void *)D_008B09E0);
    var_s2 = 0;
    if (func_002DCA30() == 0) {
        return 0x2710;
    }
    var_s4 = 0;
    do {
        if ((M2C_FIELD(var_s5, s16 *, 0) != 0) && (M2C_FIELD(var_s5, u8 *, 0x51) == 1)) {
            var_s1 = 0;
            var_s3 = 0;
            var_s0 = var_s5;
            do {
                var_v0 = func_00857C00(M2C_FIELD(var_s0, s16 *, 0x78));
                if (var_v0 < 0) {
                    var_v0 = 0x3E8;
                }
                var_s1 += var_v0;
                var_s3 += 1;
                var_s0 += 2;
            } while (var_s3 < 5);
            var_s2 += (var_s1 / 5) + (var_s1 >> 0x1F);
        }
        var_s4 += 1;
        var_s5 += 0x88;
    } while (var_s4 < 4);
    var_a1 = ((void *)D_008B09E0);
    var_a0 = 0;
loop_13:
    if (*var_a1 != (*(s16 *)D_008B0E20)) {
        var_a0 += 1;
        var_a1 += 0x88;
        if (var_a0 >= 8) {
            var_a1 = NULL;
        } else {
            goto loop_13;
        }
    }
    if (var_a1 != NULL) {
        M2C_FIELD(var_a1, s32 *, 0x84) = var_s2;
    }
    return var_s2;
}
