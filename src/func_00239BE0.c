/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 func_00239BE0(u8 n) {
    u8 v = 2;
    u8 bits = 1;

    while (v < n) {
        v *= 2;
        bits++;
    }
    return bits;
}
