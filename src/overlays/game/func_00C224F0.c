/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_003EA768;

s32 func_00C224F0(void) {
    if (D_003EA768 == NULL) {
        return 0;
    }
    return ((s32)*D_003EA768 >> 1) & 1;
}
