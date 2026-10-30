/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_001CDA50(s32);
s32 func_001C7E10(s32, M2C_UNK *);                  /* extern */
extern char D_00CBD740[];
extern char D_00CC12C0[];

s32 func_00BDF3B0(s32 arg0, s32 arg1) {
    s32 *var_s0;
    s32 *var_s1;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_s2;
    s32 var_s3;
    s32 var_s4;
    s32 var_s5;

    var_s5 = 0;
    var_s4 = 0;
    if (func_001CDA50(0) != 5) {
        temp_a2 = arg0 - 1;
        var_s5 = (temp_a2 % 5) + ((((arg0 - 1) / 5) + ((u32) temp_a2 >> 0x1F)) * 0x19) + (arg1 * 5);
    } else {
        temp_a1 = arg0 - 1;
        var_s2 = 0;
        var_s1 = ((void *)D_00CBD740);
        do {
            var_s3 = 0;
            var_s0 = var_s1;
loop_5:
            if (var_s4 < ((temp_a1 % 5) + ((arg1 + ((((arg0 - 1) / 5) + ((u32) temp_a1 >> 0x1F)) * 5)) * 5))) {
                if (func_001C7E10(*var_s0, ((void *)D_00CC12C0)) != 0) {
                    var_s5 += 1;
                }
                var_s4 += 1;
            }
            var_s3 += 1;
            var_s0 += 4;
            if (var_s3 < 5) {
                goto loop_5;
            }
            var_s2 += 1;
            var_s1 += 0x14;
        } while (var_s2 < 0xF);
    }
    return var_s5;
}
