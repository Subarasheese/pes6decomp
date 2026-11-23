/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern void *D_003EA5D0[2];
extern s32 D_003EA5CC;
extern s32 func_0091D2B0(void);
extern s32 func_0035A260(void);
s32 func_0091CF20(void) {
    s32 done = 0;
    if (D_003EA5D0[D_003EA5CC]) {
        if (func_0091D2B0() == 1 || func_0035A260())
            done = 1;
    } else
        done = 1;
    return done;
}
