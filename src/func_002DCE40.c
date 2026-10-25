/* compiler: mwcc-3.0.1b210-O2 */
#include "pes6/m2c.h"

u16 func_002DCE40(u16 a0) {
    return ((a0 >> 8) & 0xFF) | ((a0 << 8) & 0xFF00);
}
