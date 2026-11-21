/* compiler: mwcc-3.0.1b198 */
#include "types.h"

extern char D_008A9848[];
extern s32 D_008A4398[];

s8 func_00828AD0(void) {
    s8 value;
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
        value = '\x05';
        return value;
    }
    value = *(s8 *)(value2 + 0x31);
    return value;
}
