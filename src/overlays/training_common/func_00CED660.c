/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0020A540(s32);

u32 func_00CED660(int param_1) {
    if (param_1 == 0) {
        return 0;
    }
    func_0020A540(*(u32 *)(param_1 + 0x14));
    *(u32 *)(param_1 + 0x14) = 0;
    return 1;
}
