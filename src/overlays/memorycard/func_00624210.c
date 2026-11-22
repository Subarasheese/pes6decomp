/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern char D_00530C54[];

s32 func_00624210(s32 arg0) {
    s32 value;
    s32 value2;
    s32 value3;
    s32 value4;
    value3 = arg0 & 0xFFFF;
    value = 0;
    value4 = 0;
    if (value3 < 0x1388) {
        value4 = *((s32 *)D_00530C54);
        value4 = value4 + (value3 * 0x7C);
    }
    value2 = value4;
    if (value4) {
        value = value2 + 0x30;
    }
    return value;
}
