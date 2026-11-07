/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00291DD0(void);
extern void (*D_005A22F0[])(s32 a, s16 b, s16 c);

s32 func_00291BC0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 x, y;
    if (func_00291DD0() == 0) {
        return 0;
    }
    if (D_005A22F0[a1] == NULL) {
        return 0;
    }
    if (a0 != 0) {
        x = (s16)a3;
        y = (s16)a2;
    } else {
        x = (s16)a2;
        y = (s16)a3;
    }
    D_005A22F0[a1](a0, x, y);
}
