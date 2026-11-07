/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern u8 D_0052AAD4[];
extern u8 D_0052AAD5[];
extern s32 D_0052AAD0[];

void func_001CDD70(u8 *range) {
    if (range != NULL) {
        D_0052AAD4[0] = range[0];
        D_0052AAD5[0] = range[1];
        D_0052AAD0[0] = range[1] - range[0] + 1;
    }
}
