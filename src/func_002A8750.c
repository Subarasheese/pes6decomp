/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_005E1D32[];
extern u16 D_005E1D30[];

u16 func_002A8750(void) {
    if (D_005E1D32[0] == 4) {
        return D_005E1D30[0];
    }
    return 0;
}
