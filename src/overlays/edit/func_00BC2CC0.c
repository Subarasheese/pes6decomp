/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_00B91590(int param_1, u8 param_2);
extern u8 D_00CE4E70[];

void func_00BC2CC0(int param_1)

{
    (&D_00CE4E70[0])[param_1] = 1;
    func_00B91590(0x13, 1);
    return;
}
