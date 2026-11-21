/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 *func_00D0BAF0(void);
extern char D_008A5CB0[];

int func_00838320(void) {
    int *entry;
    int value;

    entry = func_00D0BAF0();
    if (entry == (int *)0x0) {
        value = 0;
    } else {
        value = (u32)D_008A5CB0;
    }
    if (value == 0) {
        value = 0;
    } else {
        value = *(int *)(value + 0x220);
    }
    return value;
}
