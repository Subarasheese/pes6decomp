/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern u8 D_008B24D1[];
extern int D_008B2484[];
extern int D_008B2488[];
void func_001D7D60(int argument_0, unsigned char argument_1);

u32 func_00880CC0(int param_1) {
    D_008B24D1[0] = (u8)param_1;
    if (param_1 == 0) {
        func_001D7D60(D_008B2484[0], 0);
        func_001D7D60(D_008B2488[0], 0);
    }
    return 0;
}
