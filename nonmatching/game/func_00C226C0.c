/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u16 *D_003EA764;

s8 func_00C226C0(void) {
    if (D_003EA764 != NULL) {
        return (*D_003EA764 >> 5) & 1;
    }
    return -1;
}
