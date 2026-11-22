/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_0091ED80[];
extern s32 D_00923FDC[];
extern s32 func_00154090(s64);

s32 func_008FF310(void) {
    D_00923FDC[0] = 1;
    return func_00154090(D_0091ED80[0]);
}
