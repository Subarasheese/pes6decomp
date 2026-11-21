/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern char D_008A9848[];
extern s32 D_008A4398[];

short func_00828690(void) {
    short value;
    int value2;

    if (D_008A4398[0] == 0) {
        value2 = 0;
    } else {
        value2 = (u32)D_008A9848;
    }
    if (value2 == 0) {
        value2 = 0;
    } else {
        value2 = value2 + 4;
    }
    if (value2 == 0) {
        value = 0;
        return value;
    }
    value = *(short *)(value2 + 0x148);
    return value;
}
