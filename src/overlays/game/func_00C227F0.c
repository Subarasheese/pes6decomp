/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 *D_003EA764;

s32 func_00C227F0(void) {
    if (D_003EA764 == NULL) {
        return -1;
    }
    return D_003EA764[5];
}
