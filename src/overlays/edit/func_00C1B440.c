/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u16 D_00CF2760[];

void func_00C1B440(int param_1, u16 param_2)

{
    (&D_00CF2760[0])[param_1] = param_2;
    return;
}
