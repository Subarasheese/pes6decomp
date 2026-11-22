/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u16 *D_003EA764;

s8 func_00C228F0(s8 arg0) {
    if (D_003EA764 == NULL) {
        return -1;
    }
    return (*D_003EA764 >> (arg0 + 1)) & 1;
}
