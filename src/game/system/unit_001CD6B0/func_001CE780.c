/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_0051FF40[];
extern u8 D_0051FF45[];
extern u8 D_0051FF46[];
extern s32 D_00398F00[];
extern s32 D_003E9938;

void func_001CE780(void) {
    s32 index = D_0051FF40[0] * 6;

    if (D_0051FF46[0] != 0) {
        index += 3;
    }
    D_003E9938 = D_00398F00[index + D_0051FF45[0]];
}
