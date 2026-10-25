/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u32 func_00288670(u32 value, u32 base) {
    if (value <= base) {
        return 0;
    }
    return (value - base) * 100 / (100 - base);
}
