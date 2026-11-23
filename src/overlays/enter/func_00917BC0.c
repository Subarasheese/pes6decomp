/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern void *D_003EA540[2];
extern s32 D_003EA53C;
extern s32 func_00917D50(void);
extern s32 func_0035A230(void);
s32 func_00917BC0(void) {
    s32 done = 0;
    if (D_003EA540[D_003EA53C]) {
        if (func_00917D50() == 1 || func_0035A230())
            done = 1;
    } else
        done = 1;
    return done;
}
