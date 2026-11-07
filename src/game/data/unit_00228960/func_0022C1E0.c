/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_003E77AC;
s32 func_00231240(void);

void *func_0022C1E0(void) {
    if (func_00231240() == 1) {
        return NULL;
    }
    if (D_003E77AC != NULL) {
        return D_003E77AC + 0xDEDC;
    }
    return NULL;
}
