/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern u16 *D_003EA764;

s64 func_00C22930(void) {
    s64 v;
    if (D_003EA764 != NULL) {
        v = (s64)(*D_003EA764 & 1);
        return (v << 56) >> 56;
    }
    return -1;
}
