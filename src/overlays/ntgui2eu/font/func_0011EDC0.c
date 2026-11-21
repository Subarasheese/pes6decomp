/* compiler: ee-gcc-2.9 */
#include "types.h"

extern u32 D_005B3700[];
extern u32 D_005B3704[];

void func_0011EDC0(int arg0) {
    D_005B3700[0] = 0;
    D_005B3704[0] = 0;
    if ((arg0 & 1U) == 0) {
        D_005B3704[0] = 4;
    }
    if ((arg0 & 0x10U) != 0) {
        D_005B3704[0] = D_005B3704[0] | 2;
    }
}
