/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA5DC;
extern u8 *D_003EA5E0;
s32 func_002D5870(u8 *);

s32 func_00922680(void) {
    s32 res = 0;
    if (func_002D5870((&D_003EA5E0)[D_003EA5DC] + 8) == 0) {
        res = 1;
    }
    return res;
}
