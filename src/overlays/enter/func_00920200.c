/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern void *D_003EA5D8[2];
extern s32 D_003EA5D4;
extern s32 func_00920670(void);
extern s32 func_0035A230(void);
s32 func_00920200(void) {
    s32 done = 0;
    if (D_003EA5D8[D_003EA5D4]) {
        if (func_00920670() == 1 || func_0035A230())
            done = 1;
    } else
        done = 1;
    return done;
}
