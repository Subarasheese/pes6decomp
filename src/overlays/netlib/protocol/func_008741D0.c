/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memcpy(void *, const void *, unsigned int);

int func_008741D0(void *arg0, int arg1, int arg2) {
    int value;

    if (0x400 - arg2 < *(int *)((int)arg0 + 0x454)) {
        value = -0x1f5;
    } else {
        memcpy((void *)((int)arg0 + *(int *)((int)arg0 + 0x454) + 0x40), (void *)arg1, arg2);
        value = 0;
        *(int *)((int)arg0 + 0x454) = *(int *)((int)arg0 + 0x454) + arg2;
    }
    return value;
}
