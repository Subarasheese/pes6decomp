/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_0017A670(s32);
extern void * func_00222850(s32, s32);
extern u16 Pes6Team_GetPlayerId(s32, s32, s32);
void func_00BC5C50(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_s1;
    s32 var_a1;
    s32 var_s2;
    s32 var_v0;

    var_s2 = arg2 & 0xFF;
    temp_s1 = arg0 & 0xFFFF;
    if ((temp_s1 >= 0x40) && (temp_s1 < 0xCC)) {
        var_v0 = 3;
    } else if (temp_s1 != 0x126) {
        if ((temp_s1 >= 0xDD) && (temp_s1 < 0xFE)) {
            var_v0 = 3;
        } else {
            var_v0 = 0;
        }
    } else {
        var_v0 = 3;
    }
    if ((func_0017A670(0) == 6) && ((var_v0 == 3) == 1)) {
        if (var_s2 != 1) {
            var_s2 = 1;
        } else {
            var_s2 = 2;
        }
    }
    temp_a0 = Pes6Team_GetPlayerId(arg0, arg1, var_s2) & 0xFFFF;
    if ((temp_s1 >= 0x40) && (temp_s1 < 0xCC)) {
        var_a1 = 3;
    } else if (temp_s1 != 0x126) {
        if ((temp_s1 >= 0xDD) && (temp_s1 < 0xFE)) {
            var_a1 = 3;
        } else {
            var_a1 = 0;
        }
    } else {
        var_a1 = 3;
    }
    func_00222850(temp_a0, var_a1);
}
