/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA5CC;
extern u8 *D_003EA5D0;
s32 func_002D5870(u8 *);

s32 func_0091D5F0(void) {
    s32 res = 0;
    if (func_002D5870((&D_003EA5D0)[D_003EA5CC] + 8) == 0) {
        res = 1;
    }
    return res;
}
