/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B9FAB0(s32);                         /* extern */
s32 func_00B9FBB0();                                /* extern */
M2C_UNK func_00B9FBC0(s32);                         /* extern */
extern s32 D_003EAF70;

s32 func_00BA3A30(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;

    var_s0 = 0;
    if (arg2 == 1) {
        var_s2 = 0;
        if (arg1 > 0) {
            var_s0_2 = arg0;
            do {
                func_00B9FAB0(var_s0_2);
                var_s2 += 1;
                var_s0_2 += 0xC;
            } while (var_s2 < arg1);
        }
        goto block_18;
    }
    if (arg2 == 0) {
        switch (D_003EAF70) {                       /* irregular */
        case 0:
            var_s2_2 = 0;
            if (arg1 > 0) {
                var_s3 = arg0;
                do {
                    func_00B9FBC0(var_s3);
                    var_s2_2 += 1;
                    var_s3 += 0xC;
                } while (var_s2_2 < arg1);
            }
            D_003EAF70 += 1;
            /* fallthrough */
        case 1:
            if (func_00B9FBB0() != 0) {
                D_003EAF70 = 0;
block_18:
                var_s0 = 1;
            }
            break;
        }
    }
    return var_s0;
}
