/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *memset(void *, int, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);
extern s8 *strncpy(s8 *, s8 *, u32);

int func_0095CD10(int arg0, int arg1) {
    int value;

    if ((arg0 == 0) || (arg1 == 0)) {
        value = 0;
    } else {
        memset((int *)arg0, 0, 0x894);
        memcpy((void *)arg0, (void *)arg1, 0x810);
        strncpy((s8 *)(arg0 + 0x810), (s8 *)(arg0 + 0x12), 0x40);
        value = 1;
    }
    return value;
}
