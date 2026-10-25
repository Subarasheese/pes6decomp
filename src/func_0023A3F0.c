/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_003A9B70[];
extern u8 D_003A9B71[];
extern u8 D_003A9B72[];
extern u8 D_003A9B74[];

void func_0023A3F0(u8 a, u8 b) {
    D_003A9B70[0] = 0;
    D_003A9B71[0] = a;
    D_003A9B72[0] = a;
    D_003A9B74[0] = b;
    if (D_003A9B74[0] > 1) {
        D_003A9B74[0] = 0;
    }
}
