/* compiler: mwcc-3.0.1b210 */
#include "types.h"

int func_00B19B10(void *arg0)

{
    u32 value;

    if (arg0 == (void *)0x0) {
        value = 0;
    } else {
        value = *(int *)((int)arg0 + 0x40) != 0 ^ 1;
    }
    return value;
}
