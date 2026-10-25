/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 D_003E9B34;
extern s32 D_00583330[];
extern s32 func_00165A58(s32 a);

s32 func_0024F280(s32 idx) {
    s32 *p;
    if ((D_003E9B34 != 0) ^ 1) {
        return 0;
    }
    if (idx >= 4) {
        goto fail;
    }
    p = &D_00583330[idx];
    if (func_00165A58(*p) != 0) {
        if (func_00165A58(*p) != 5) {
            goto fail;
        }
    }
    return 1;
fail:
    return 0;
}
