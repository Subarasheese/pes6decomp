/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_00154F98(s32);
extern s32 D_003EA0BC;
extern s32 D_003F7790[];
extern u32 D_003EA0C0;

int func_00623430(void) {
    int value;

    if (D_003EA0BC == D_003F7790[0]) {
        return D_003EA0C0;
    }
    D_003EA0BC = D_003F7790[0];
    D_003EA0C0 = 0;
    value = func_00154F98(0);
    if (value == 1) {
        D_003EA0C0 = D_003EA0C0 | 1;
    }
    value = func_00154F98(1);
    if (value == 1) {
        D_003EA0C0 = D_003EA0C0 | 2;
    }
    return D_003EA0C0;
}
