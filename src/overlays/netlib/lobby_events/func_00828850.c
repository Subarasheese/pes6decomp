/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern char D_008A9848[];
extern s32 D_008A4398[];

int func_00828850(void) {
    int value;

    if (D_008A4398[0] == 0) {
        value = 0;
    } else {
        value = (u32)D_008A9848;
    }
    if (value == 0) {
        value = 0;
    } else {
        value = value + 4;
    }
    if (value == 0) {
        value = 0;
        return value;
    }
    value = *(int *)(value + 0x154);
    return value;
}
