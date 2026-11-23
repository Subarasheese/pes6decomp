/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern void *D_003EA54C[2];
extern s32 D_003EA548;
extern s32 func_00919CB0(void);
extern s32 func_0035A230(void);
s32 func_00919B60(void) {
    s32 done = 0;
    if (D_003EA54C[D_003EA548]) {
        if (func_00919CB0() == 1 || func_0035A230())
            done = 1;
    } else
        done = 1;
    return done;
}
