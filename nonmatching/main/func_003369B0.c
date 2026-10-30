/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0030EA70(void);
extern int func_0030E780(void);
extern s32 func_00325C50(s32);
s32 func_003369B0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_v0;

    if (func_00325C50(arg3) != 0) {
        return 0;
    }
    switch (arg1) {                                 /* irregular */
    case 16:
        if (arg0 == 0xF) {
            return 0;
        }
    case 13:
        temp_v0 = func_0030EA70();
        if (temp_v0 < 0x55) {
            return 0;
        }
        if (temp_v0 < 0x5A) {
            return 1;
        }
        var_v0 = 1;
        if (arg2 != 1) {
            var_v0 = func_0030E780() == 0;
        }
        return var_v0;
    default:
        return 0;
    }
}
