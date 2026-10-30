/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00825610();                                /* extern */
s32 func_00827450(s32);                             /* extern */
M2C_UNK func_0082B4C0(s32);                         /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
s32 func_00862110(s32, s32);                        /* extern */
s32 func_008695B0(s32, s32);                        /* extern */
s32 func_0086D2E0(s32, s32);                        /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A9FCC[];

s32 func_0083C5A0(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;

    temp_s0 = func_00D0BAF0();
    func_0082B4C0(arg0);
    if (temp_s0 == 0) {
        return 2;
    }
    if (arg0 < 0) {
        return 2;
    }
    if (arg0 < 9) {
        if (func_00862110(temp_s0, arg0) != 1) {
            if (func_00827450(arg0) != 1) {
                return 2;
            }
            return 3;
        }
        if (func_00825610() != 5) {
            var_v0_2 = func_0086D2E0(temp_s0 + (arg0 * 0x24), arg1);
        } else {
            var_v0_2 = func_008695B0(temp_s0 + (arg0 * 0x24), arg1);
        }
        if (var_v0_2 != 0) {
            func_0082C840(0x30);
            if (func_00827450(arg0) != 1) {
                var_v0 = 2;
            } else {
                var_v0 = 3;
            }
            return var_v0;
        }
        func_0082C840(0x30);
        temp_v1 = arg1 & 0xFF;
        if ((temp_v1 != 4) && (temp_v1 != 3) && (temp_v1 != 2) && (temp_v1 != 1) && (temp_v1 != 0)) {
            *(s32 *)0x8A9FCC = 0;
        } else {
            (*(s32 *)D_008A9FCC) = temp_v1;
        }
        if (func_00827450(arg0) != 1) {
            return 4;
        }
        return 3;
    }
    return 2;
}
