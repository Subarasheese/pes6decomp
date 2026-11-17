/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_0020B680(void);
extern s32 func_001DA380(s32);
extern s32 D_003D41E0[];
extern s32 D_003E99E4;

s32 func_0020C2C0(void) {
    s32 i;
    s32 ok;

    ok = 1;
    if (D_003E99E4 == 1) {
        if (func_0020B680() == 0) {
            for (i = 0; ok != 0 && i < 2; i++) {
                ok = func_001DA380(D_003D41E0[i]) != 0;
            }
        }
        if (ok == 1) {
            D_003E99E4 = 2;
        }
    }
    return ok;
}
