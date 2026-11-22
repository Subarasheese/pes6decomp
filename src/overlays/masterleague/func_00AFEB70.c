/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 *func_00994760(void);

int func_00AFEB70(void)

{
    int *entry;

    entry = func_00994760();
    if (entry == (int *)0x0) {
        entry = (int *)0x0;
        return (int)entry;
    }
    entry = entry + 0x186ba;
    return (int)entry;
}
