/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 *D_003EA358;

s32 func_0085EF20(void) {
    if (D_003EA358 == NULL) {
        return -1;
    }
    return *D_003EA358;
}
