/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_0027A600(int param_1, char param_2);

void func_00B897B0(int *param_1)

{
    *(u8 *)(param_1[1] + 0x50) = 1;
    *(u8 *)(*param_1 + 0x66) = 0xff;
    func_0027A600(*param_1, 0);
    return;
}
