/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern void *D_003E9FC4[2];
extern s32 D_003E9FC0;
extern s32 func_0035B410(void);
extern s32 func_0035A230(void);
s32 func_0035AC90(void) {
    s32 done = 0;
    if (D_003E9FC4[D_003E9FC0]) {
        if (func_0035B410() == 1 || func_0035A230())
            done = 1;
    } else
        done = 1;
    return done;
}
