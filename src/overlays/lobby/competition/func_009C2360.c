/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 D_00A7DD50[];

u32 func_009C2360(int param_1)

{
    if (D_00A7DD50[0] == 0) {
        return 0;
    }
    if ((param_1 < 1) || (0x100 < param_1)) {
        param_1 = 0x100;
    }
    *(int *)(D_00A7DD50[0] + 0x218) = param_1;
    return 1;
}
