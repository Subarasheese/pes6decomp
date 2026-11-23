/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern void *D_003EA5E8[2];
extern s32 D_003EA5E4;
extern s32 func_00923900(void);
extern s32 func_0035A260(void);
s32 func_009235D0(void) {
    s32 done = 0;
    if (D_003EA5E8[D_003EA5E4]) {
        if (func_00923900() == 1 || func_0035A260())
            done = 1;
    } else
        done = 1;
    return done;
}
