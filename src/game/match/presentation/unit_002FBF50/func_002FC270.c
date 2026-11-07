/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003B4AD0[];

s32 func_002FC270(s32 i) {
    if (i >= 0 && (u32)i < 64) {
        return D_003B4AD0[i];
    }
    return 0x11AE1;
}
