/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_0030E5B0(void);
extern s32 func_00311330(void);
extern s32 func_0032E980(s32 a);
s32 func_003414D0(u8 *out, s32 mode, s32 val) {
    u8 res;
    s32 r = func_0030E5B0();
    if (r == 2) {
        res = 1;
    } else if (r == 1) {
        res = 0;
    } else if (r == 3 || r == 0) {
        r = func_00311330();
        if (mode == 3) {
            res = val;
        } else if (mode == 2) {
            res = func_0032E980(2) == 0;
        } else if (mode == 1) {
            if (r == 2) res = func_0032E980(2) == 0;
            else if (r == 1) res = 0;
            else if (r == 0) res = 1;
        } else if (mode == 0) {
            if (r == 2) res = func_0032E980(2) == 0;
            else if (r == 1) res = 1;
            else if (r == 0) res = 0;
        }
    }
    *out = res;
    return 1;
}
