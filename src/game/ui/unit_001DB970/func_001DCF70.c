/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern void *func_001F4380(s32);
extern s32 D_0052AE18[];

int func_001DCF70(int arg0) {
    int *entry;
    int value;

    entry = func_001F4380(arg0);
    if (entry != (int *)0x0) {
        arg0 = *entry;
    }
    entry = (int *)(D_0052AE18[0] + arg0 * 0x10);
    if ((entry == (int *)0x0) || (*entry == 0)) {
        value = 0;
        return value;
    }
    value = 1;
    *(u8 *)(entry + 3) = 1;
    return value;
}
