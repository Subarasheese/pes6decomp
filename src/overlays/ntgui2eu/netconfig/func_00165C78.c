/* compiler: ee-gcc-2.9 */
#include "types.h"

void func_00165C78(void *arg0, int *arg1, int *arg2) {
    int value;

    value = *(int *)((int)arg0 + 0x5e0);
    *arg2 = *(int *)((int)arg0 + 0x5e4);
    *arg1 = value;
}
