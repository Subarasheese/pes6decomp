/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern int D_00A7DE00[];
void func_001D7D60(int argument_0, unsigned char argument_1);

u32 func_009D2300(u8 param_1) {
    if (D_00A7DE00[0] == 0) {
        return 0;
    }
    func_001D7D60(*(int *)(D_00A7DE00[0] + 0xa4), param_1);
    func_001D7D60(*(int *)(D_00A7DE00[0] + 0xa8), param_1);
    return 1;
}
