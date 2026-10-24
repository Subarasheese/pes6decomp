/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00341C90(u16 value, u16 low, u16 high) {
    if (value < low || high < value) {
        return 1;
    }
    return 0;
}
