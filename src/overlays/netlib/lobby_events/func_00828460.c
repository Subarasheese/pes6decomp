/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_008A64CC[];
extern s32 D_008A4398[];

int func_00828460(void) {
    int *entry;
    int value;

    if (D_008A4398[0] == 0) {
        entry = (int *)0x0;
    } else {
        entry = (int *)D_008A64CC;
    }
    if (entry == (int *)0x0) {
        value = 0;
    } else {
        value = *entry;
    }
    return value;
}
