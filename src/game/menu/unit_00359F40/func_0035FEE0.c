/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003E9FC8;
extern u8 *D_003E9FCC;
s32 func_002D5870(u8 *);

s32 func_0035FEE0(void) {
    s32 res = 0;
    if (func_002D5870((&D_003E9FCC)[D_003E9FC8] + 8) == 0) {
        res = 1;
    }
    return res;
}
