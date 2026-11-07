/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_00B22A90(void);
M2C_UNK func_009737C0(s32, s32);                    /* extern */

void func_00B22460(s32 arg0) {
    u32 var_s1;
    s32 var_s0;
    s32 var_s4;
    u32 var_s3;

    var_s1 = func_00B22A90();
    if (var_s1 == 0) {
        return;
    }
    var_s0 = 0;
    do {
        var_s4 = 0;
        var_s3 = var_s1;
        do {
            func_009737C0(*(s32 *)(var_s3 + 0x3C), arg0);
            func_009737C0(*(s32 *)(var_s3 + 0x2C), arg0);
            var_s4 += 1;
            var_s3 += 4;
        } while (var_s4 < 2);
        var_s0 += 1;
        var_s1 += 8;
    } while (var_s0 < 2);
}
