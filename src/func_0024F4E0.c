/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9B34;
extern s32 D_00583330[];
s32 func_001661A8(s32);

s32 func_0024F4E0(s32 i) {
    if (D_003E9B34 != 0) {
        return func_001661A8(D_00583330[i]);
    }
    return 0;
}
