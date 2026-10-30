/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00154F98(s32);
extern s32 D_003EA0BC;
extern s32 D_003EA0C0;
extern char D_003F7790[];

s32 func_00623350(void *arg0) {
    s16 temp_v1;
    s32 var_v0;

    if ((M2C_FIELD(arg0, s16 *, 0) >= 2) || (temp_v1 = M2C_FIELD(arg0, s16 *, 2), ((temp_v1 < 4) == 0))) {
        goto block_14;
    }
    if (temp_v1 == 0) {
        return 1;
    }
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
    var_v0 = 1;
    if (!((1 << M2C_FIELD(arg0, s16 *, 0)) & D_003EA0C0)) {
block_14:
        var_v0 = 0;
    }
    return var_v0;
}
