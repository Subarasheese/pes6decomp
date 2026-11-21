/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 *func_00229DF0(void);
extern char D_009C66F0[];

int func_0099B880(void) {
    u8 *entry;
    int value;

    entry = func_00229DF0();
    if (entry == (u8 *)0x0) {
        value = 0;
    } else {
        value = *(int *)((u32)*entry * 4 + (u32)D_009C66F0);
    }
    return value;
}
