/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA5E4;
extern u8 *D_003EA5E8;
s32 func_002D5870(u8 *);

s32 func_00923F20(void) {
    s32 res = 0;
    if (func_002D5870((&D_003EA5E8)[D_003EA5E4] + 8) == 0) {
        res = 1;
    }
    return res;
}
