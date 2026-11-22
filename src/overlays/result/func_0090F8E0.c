/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001EDAE0(int param_1, u8 param_2);
extern u32 D_00921E2C[];
extern u32 D_00921E30[];

void func_0090F8E0(u32 param_1)

{
    func_001EDAE0(D_00921E2C[0], param_1);
    func_001EDAE0(D_00921E30[0], param_1);
    return;
}
