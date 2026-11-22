/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_009E5CD0(u8 param_1);
extern u32 func_009E3B50(int param_1, u32 param_2);
extern u32 D_00A7DF18[];

u32 func_009E5720(u32 param_1)

{
    if (D_00A7DF18[0] == 0) {
        return 0;
    }
    func_009E3B50(*(u32 *)(D_00A7DF18[0] + 0x7C), param_1);
    func_009E5CD0(*(u8 *)(D_00A7DF18[0] + 0x134));
    return 1;
}
