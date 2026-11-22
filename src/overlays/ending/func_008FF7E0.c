/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s8 *D_003EA694;

s32 func_008FF7E0(void) {
    if (D_003EA694 == NULL) {
        return 0;
    }
    return ((s8)*D_003EA694 >> 1) & 1;
}
