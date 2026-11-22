/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_008A64CC[];
extern s32 D_008A4398[];

int func_00827D50(void) {
    int *entry;
    int value;
    u32 value2;
    int value3;

    if (D_008A4398[0] == 0) {
        entry = (int *)0x0;
    } else {
        entry = (int *)D_008A64CC;
    }
    if (entry == (int *)0x0) {
        value3 = 0;
    } else {
        value3 = *entry;
    }
    if (D_008A4398[0] == 0) {
        value = 0;
    } else {
        value = (u32)D_008A64CC;
    }
    if (value == 0) {
        value2 = 1;
    } else {
        value2 = value3 < 0x32 ^ 1;
    }
    return value2;
}
