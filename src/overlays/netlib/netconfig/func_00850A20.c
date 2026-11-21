/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern char D_008B1598[];
extern s8 D_008B144E[];

int func_00850A20(int arg0) {
    int value;

    value = *(int *)(((int)D_008B144E[0] & 1U) * 4 + (u32)D_008B1598);
    do {
        if ((u32) * (u8 *)(value + 0x17) == (arg0 & 0xffU)) {
            return (u32) * (u8 *)(value + 0x18);
        }
        value = *(int *)(value + 4);
    } while (value != 0);
    return 0xff;
}
