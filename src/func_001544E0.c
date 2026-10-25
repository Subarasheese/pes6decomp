/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_0050D770[];
extern s32 D_0050D774[];
extern s32 D_0050D778[];
extern s32 D_003C7260[];
extern s32 D_003C7264[];

s32 func_001544E0(s32 mode) {
    s32 old = D_0050D770[0];

    D_0050D770[0] = mode;
    D_0050D774[0] = D_003C7260[mode * 2];
    D_0050D778[0] = D_003C7264[mode * 2];
    return old;
}
