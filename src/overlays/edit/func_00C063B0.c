/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 D_00CBF460[];

u32 func_00C063B0(u32 param_1)

{
    if (0xf < param_1) {
        param_1 = 0;
    }
    return (&D_00CBF460[0])[param_1];
}
