/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern void *D_003EA554[2];
extern s32 D_003EA550;
extern s32 func_0091B730(void);
extern s32 func_0035A260(void);
s32 func_0091B480(void) {
    s32 done = 0;
    if (D_003EA554[D_003EA550]) {
        if (func_0091B730() == 1 || func_0035A260())
            done = 1;
    } else
        done = 1;
    return done;
}
