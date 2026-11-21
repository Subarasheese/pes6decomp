/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_008CB5D0(int param_1, u32 param_2);
extern void func_008D0570(int param_1, u32 param_2);

void func_008CD260(int param_1)

{
    if (param_1 != 0) {
        *(u8 *)(param_1 + 3) = 0;
        func_008CB5D0(param_1, 0);
        func_008D0570(param_1 + 0x480, *(u8 *)(param_1 + 3));
    }
    return;
}
