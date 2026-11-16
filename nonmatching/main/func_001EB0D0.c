/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001EB0D0(s32 arg0, s16 arg1, s16 arg2, u8 *arg3) {
    s32 w;
    s32 h;
    s32 i;
    s32 j;
    u8 v;

    if (arg0 != 4) {
        h = arg2;
        if (arg0 == 1) {
            w = arg1 >> 1;
        } else {
            w = arg1;
        }
        for (i = 0; i < h; i++) {
            for (j = 0; j < w; j++) {
                v = *arg3;
                if (arg0 == 1) {
                    v = ((v & 0xF) << 4) | ((v >> 4) & 0xF);
                }
                *arg3 = v;
                arg3++;
            }
        }
    }
}
