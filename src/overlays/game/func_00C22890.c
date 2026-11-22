/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u16 *D_003EA764;

s8 func_00C22890(void) {
    if (D_003EA764 == NULL) {
        return -1;
    }
    return (*D_003EA764 >> 7) & 1;
}
