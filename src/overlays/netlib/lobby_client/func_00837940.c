/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 *func_00D0BAF0(void);
extern char D_008A5CB0[];

s8 func_00837940(void) {
    s8 value;
    int *entry;
    int value2;

    entry = func_00D0BAF0();
    if (entry == (int *)0x0) {
        value2 = 0;
    } else {
        value2 = (u32)D_008A5CB0;
    }
    if (value2 == 0) {
        value = 0;
    } else {
        value = *(s8 *)(value2 + 0x2b4);
    }
    return value;
}
