/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00BA4880(s32 arg0, void *arg1) {
    s32 value;
    s32 value2;
    s32 value3;
    s32 value4;

    if (!(arg0 < 0x6B)) {
        return 0;
    }
    value3 = arg0 & 0xF;
    if ((arg0 < 0) && (value3 != 0)) {
        value3 -= 0x10;
    }
    value = value3 & 3;
    if ((value3 < 0) && (value != 0)) {
        value -= 4;
    }
    value4 = value3 >> 2;
    if (value3 < 0) {
        value4 = (s32)(value3 + 3) >> 2;
    }
    if (arg1 != NULL) {
        M2C_FIELD(arg1, s16 *, 0) = (s16)(value << 6);
        M2C_FIELD(arg1, s16 *, 2) = (s16)(value4 << 6);
        M2C_FIELD(arg1, s16 *, 4) = 0x40;
        M2C_FIELD(arg1, s16 *, 6) = 0x40;
    }
    value2 = arg0 >> 4;
    if (arg0 < 0) {
        value2 = (s32)(arg0 + 0xF) >> 4;
    }
    return value2 + 0x4E78;
}
