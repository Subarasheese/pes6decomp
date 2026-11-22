/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001EDAE0(int param_1, u8 param_2);
extern void func_001D7D60(int param_1, u8 param_2);
extern u32 D_00921DE8[];
extern u32 D_00921E6C[];
extern u32 D_00921E2C[];
extern u32 D_00921E30[];

void func_0090F880(u32 param_1)

{
    func_001D7D60(D_00921DE8[0], param_1);
    func_001D7D60(D_00921E6C[0], param_1);
    func_001EDAE0(D_00921E2C[0], param_1);
    func_001EDAE0(D_00921E30[0], param_1);
    return;
}
