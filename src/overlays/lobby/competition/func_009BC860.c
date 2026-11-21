/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memset(void *, int, unsigned int);
extern s8 *strncpy(s8 *, s8 *, u32);

int func_009BC860(int arg0, int arg1) {
    int value;

    if (arg0 == 0) {
        value = 1;
    } else {
        memset((int *)(arg0 + 0x3c), 0, 0x42);
        if (arg1 == 0) {
            value = 0;
        } else {
            strncpy((s8 *)(arg0 + 0x3c), (s8 *)arg1, 0x42);
            value = 0;
        }
    }
    return value;
}
