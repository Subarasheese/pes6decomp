/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_002247E0(u32 param_1, u8 param_2, u8 param_3);
extern u32 func_009318B0(u32 param_1, u32 param_2);
extern void func_009314C0(u32 param_1);

void func_00931B90(u32 param_1, u32 param_2)

{
    u8 uVar1;

    uVar1 = func_009318B0(param_1, param_2);
    func_002247E0(param_1, param_2, uVar1);
    func_009314C0(param_1);
    return;
}
