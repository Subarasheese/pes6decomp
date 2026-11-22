/* compiler: ee-gcc-2.9 */
#include "types.h"

extern void func_00133AA8(void *);

void func_00133B70(int *param_1, u32 *param_2) {
    int value;

    value = param_1[3];
    if (param_1[1] <= value) {
        func_00133AA8(param_1);
        value = param_1[3];
    }
    *(u32 *)(value * 4 + *param_1) = *param_2;
    param_1[3] = param_1[3] + 1;
}
