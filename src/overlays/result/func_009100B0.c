/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_002DB580(int param_1, u32 param_2);
extern u32 D_00924260[];

void func_009100B0(u32 param_1, int param_2)

{
    func_002DB580((&D_00924260[0])[param_2], param_1);
    return;
}
