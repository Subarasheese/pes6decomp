/* compiler: mwcc-3.0.1b198 */
#include "types.h"

s32 func_001EDBA0(s32, s32);
extern s32 D_00B02B90[];
extern s32 D_00B02B94[];
extern s32 D_00B02BA4[];
extern s32 D_00B02BAC[];

void func_00AEE3D0(void) {
    if (D_00B02BA4[0] != 0) {
        D_00B02BAC[0] = 0;
        return;
    }
    if (D_00B02B90[0] != 0) {
        func_001EDBA0(D_00B02B90[0], D_00B02B94[0]);
        D_00B02B94[0] = 0;
    }
}
