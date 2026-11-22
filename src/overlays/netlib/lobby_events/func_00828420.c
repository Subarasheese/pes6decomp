/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_008A7428[];
extern s32 D_008A4398[];

int func_00828420(void) {
    int value;

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
    return value;
}
