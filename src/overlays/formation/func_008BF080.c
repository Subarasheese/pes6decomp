/* compiler: mwcc-3.0.1b210 */
#include "types.h"
u8 func_008BF080(u8 kind) {
    u8 modes[17] = {0, 3, 4, 5, 8, 9, 12, 15, 16, 19, 22, 23, 26, 29, 30, 33, 38};
    if (kind >= 17)
        kind = 0;
    return modes[kind];
}
