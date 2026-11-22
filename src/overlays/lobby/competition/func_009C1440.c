/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u32 func_001D7D60(int param_1, u32 param_2);
extern u32 D_00A7DD48[];

u32 func_009C1440(u32 param_1)

{
    if (D_00A7DD48[0] == 0) {
        return 0;
    }
    func_001D7D60(*(u32 *)(D_00A7DD48[0] + 0x0), param_1);
    return 1;
}
