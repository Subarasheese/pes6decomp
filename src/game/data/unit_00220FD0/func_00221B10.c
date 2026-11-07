/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u16 *func_002228B0(s32, s32, s32, s32);

u16 func_00221B10(s32 context, s32 index) {
    u16 *record;
    u16 value;

    value = 0xFFFF & 0xFFFF;
    record = func_002228B0(context, 2, index, 1);
    if (record != NULL) {
        value = *record;
    }
    return value;
}
