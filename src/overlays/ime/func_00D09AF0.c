/* compiler: mwcc-3.0.1b210 */
#include "types.h"

u32 func_00D09AF0(int param_1, char param_2) {
    if (param_1 == 0) {
        return 0;
    }
    if (param_2 == '\x01') {
        *(u8 *)(param_1 + 0xc0) = 1;
    } else {
        *(u8 *)(param_1 + 0xc0) = 0;
    }
    if (*(char *)(param_1 + 0xc0) != *(char *)(param_1 + 0xc1)) {
        *(u8 *)(param_1 + 0xc2) = 1;
    }
    return 1;
}
