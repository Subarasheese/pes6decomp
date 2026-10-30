/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154F98(s32);
extern s32 D_003EA0BC;
extern s32 D_003EA0C0;
extern char D_003F7790[];

s32 func_00623430(void) {
    if (D_003EA0BC != (*(s32 *)D_003F7790)) {
        D_003EA0BC = (*(s32 *)D_003F7790);
        D_003EA0C0 = 0;
        if (func_00154F98(0) == 1) {
            D_003EA0C0 |= 1;
        }
        if (func_00154F98(1) == 1) {
            D_003EA0C0 |= 2;
        }
    }
    return D_003EA0C0;
}
