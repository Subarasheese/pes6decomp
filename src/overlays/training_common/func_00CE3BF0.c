/* compiler: mwcc-3.0.1b210 */
#include "types.h"

void func_001D76B0(int argument_0, unsigned char argument_1);

void func_00CE3BF0(int *param_1) {
    int value;

    value = 0;
    *(u8 *)(param_1 + 3) = 0;
    if (0 < param_1[2]) {
        do {
            func_001D76B0(*(int *)(*param_1 + value * 4), 0);
            value = value + 1;
        } while (value < param_1[2]);
    }
}
