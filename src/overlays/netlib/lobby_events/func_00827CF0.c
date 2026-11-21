/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_008A7428[];
extern s32 D_008A4398[];

int func_00827CF0(void) {
    int value;
    int value2;
    u32 value3;

    if (D_008A4398[0] == 0) {
        value = 0;
    } else {
        value = (u32)D_008A7428;
    }
    if (value == 0) {
        value = 0;
    } else {
        value = *(int *)(value + 4);
    }
    if (D_008A4398[0] == 0) {
        value2 = 0;
    } else {
        value2 = (u32)D_008A7428;
    }
    if (value2 == 0) {
        value3 = 1;
    } else {
        value3 = value < 0x14 ^ 1;
    }
    return value3;
}
