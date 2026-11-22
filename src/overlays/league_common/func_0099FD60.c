/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 *D_003EA994;

s32 func_0099FD60(void) {
    if (D_003EA994 == NULL) {
        return 0;
    }
    return *D_003EA994;
}
