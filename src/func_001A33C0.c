/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 D_0051FF4F[];

void func_001A33C0(s32 mode) {
    if (mode == 1) {
        D_0051FF4F[0] = 1;
    } else {
        D_0051FF4F[0] = 0;
    }
}
