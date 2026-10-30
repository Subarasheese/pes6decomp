/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0021DB60(int);
s32 func_0021C330(s64, s32, M2C_UNK);               /* extern */
M2C_UNK func_0063B760();                            /* extern */
extern u8 D_003EA0B4;
extern s8 D_003EA0B8;

s32 func_006234B0(M2C_UNK arg0, s64 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    if (D_003EA0B4 != 2) {
        if (D_003EA0B4 != 1) {
            if (func_0021C330((s64) (arg1 << 0x20) >> 0x20, arg2, 0x112) == 1) {
                D_003EA0B4 += 1;
            }
        } else {
            func_0063B760();
            temp_v0 = func_0021DB60(arg2);
            switch (temp_v0) {                      /* irregular */
            case -124:
                if (D_003EA0B8 < 4) {
                    D_003EA0B4 = 0;
                    D_003EA0B8 += 1;
                } else if (temp_v0 == 0) {
                case 0:
                    var_s0 = 0;
                } else {
                default:
                    D_003EA0B4 += 1;
                    var_s0 = 0;
                }
                break;
            }
        }
    } else {
        var_s0 = func_0021DB60(arg2);
        D_003EA0B8 = 0;
        D_003EA0B4 = 0;
    }
    return var_s0;
}
