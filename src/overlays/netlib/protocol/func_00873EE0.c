/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memcpy(void *, const void *, unsigned int);

int func_00873EE0(int *arg0, void *arg1, int arg2) {
    int value;

    if (0x400 - arg2 < arg0[0x115]) {
        value = -0x1f5;
    } else {
        memcpy(arg1, (void *)((int)arg0 + arg0[0x115] + 0x40), arg2);
        value = 0;
        *(u8 *)((int)arg1 + arg2) = 0;
        arg0[0x115] = arg0[0x115] + arg2;
    }
    return value;
}
