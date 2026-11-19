/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA53C;
extern u8 *D_003EA540;
s32 func_002D5870(u8 *);

s32 func_00917E50(void) {
    s32 res = 0;
    if (func_002D5870((&D_003EA540)[D_003EA53C] + 16) == 0) {
        res = 1;
    }
    return res;
}
