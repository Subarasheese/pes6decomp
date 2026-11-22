/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00D0BAF0(void);

int func_00841140(void)

{
    int *entry;

    entry = func_00D0BAF0();
    if (entry == (int *)0x0) {
        entry = (int *)0x0;
        return (int)entry;
    }
    entry = entry + 0x3e29;
    return (int)entry;
}
