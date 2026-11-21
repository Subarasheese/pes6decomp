/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_009E3D80(int param_1, u32 param_2);
extern u32 D_00A7DF10[];

u32 func_009E5060(u32 param_1)

{
    if (D_00A7DF10[0] == 0) {
        return 0;
    }
    func_009E3D80(*(u32 *)(D_00A7DF10[0] + 0x14), param_1);
    return 1;
}
