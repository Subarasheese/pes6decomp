/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int D_00A7DC30[];

void func_009BA9E0(u8 param_1) {
    int value;

    value = D_00A7DC30[0];
    if (D_00A7DC30[0] != 0) {
        *(u8 *)(D_00A7DC30[0] + 4) = param_1;
        *(u8 *)(value + 3) = 99;
    }
}
