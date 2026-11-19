/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA548;
extern u8 *D_003EA54C;
s32 func_002D5870(u8 *);

s32 func_00919ED0(void) {
    s32 res = 0;
    if (func_002D5870((&D_003EA54C)[D_003EA548] + 8) == 0) {
        res = 1;
    }
    return res;
}
