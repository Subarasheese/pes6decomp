/* compiler: ee-gcc-2.96 */
#include "pes6/m2c.h"

extern s32 D_011B1918[];

void func_00105998(s32 value) {
    if (value < 0) {
        value = 0;
    }
    if (value > 100) {
        value = 100;
    }
    D_011B1918[0] = value;
}
