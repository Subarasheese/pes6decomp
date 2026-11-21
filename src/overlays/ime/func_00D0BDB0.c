/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 D_00D376E8[];
extern s32 D_00D376F0[];

int func_00D0BDB0(void) {
    int value;

    if (D_00D376E8[0] == 0) {
        value = 0;
        return value;
    }
    if (D_00D376F0[0] == 0) {
        value = 0;
    } else {
        value = *(int *)(D_00D376F0[0] + 0xda8);
    }
    return value;
}
