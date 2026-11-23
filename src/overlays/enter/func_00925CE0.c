/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern void *D_003EA5F8[2];
extern s32 D_003EA5F4;
extern s32 func_00926380(void);
extern s32 func_0035A230(void);
s32 func_00925CE0(void) {
    s32 done = 0;
    if (D_003EA5F8[D_003EA5F4]) {
        if (func_00926380() == 1 || func_0035A230())
            done = 1;
    } else
        done = 1;
    return done;
}
