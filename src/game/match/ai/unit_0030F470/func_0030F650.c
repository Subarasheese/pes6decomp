/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
#include "pes6/unit_0030f470.h"

extern char D_00CB3300[];

s64 func_0030F650(s32 index) {
    s32 base = *(s32 *)D_00CB3300;
    s32 maskedIndex = index & 0xFF;
    s32 opposite = (maskedIndex ^ 1) & 0xFF;
    s32 first = M2C_FIELD(pes6_record_address(opposite * 0x2F4, base), s16 *, 0x14);
    s32 second = M2C_FIELD(pes6_record_address(maskedIndex * 0x2F4, base), s16 *, 0x10);

    return (s64)(s16)(first - second);
}
