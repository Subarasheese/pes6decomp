/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_00223A90();

s32 func_00237A30(s32 arg0) {
    s32 mask;
    s32 value;

    mask = 1 << arg0;
    value = M2C_FIELD(func_00223A90(), s32 *, 0xFFE8);
    return (value & mask) != 0;
}
