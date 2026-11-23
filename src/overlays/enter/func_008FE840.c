/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern void *D_003EA51C[2];
extern s32 D_003EA518;
extern s32 func_008FE9F0(void);
extern s32 func_0035A230(void);
s32 func_008FE840(void) {
    s32 done = 0;
    if (D_003EA51C[D_003EA518]) {
        if (func_008FE9F0() == 1 || func_0035A230())
            done = 1;
    } else
        done = 1;
    return done;
}
