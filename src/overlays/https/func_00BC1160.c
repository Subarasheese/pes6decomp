/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
extern s32 D_00C3F1F4[], D_00C3F1F0[], D_00CC9638[], D_00CC9630[], D_00CC9634[];
s32 func_00BC1160(s32 *span, s32 *first, s32 *second, s32 *third) {
    if (!D_00C3F1F4[0])
        return 0x275d;
    if (span)
        *span = D_00C3F1F4[0] - D_00C3F1F0[0];
    if (first)
        *first = D_00CC9638[0];
    if (second)
        *second = D_00CC9630[0];
    if (third)
        *third = D_00CC9634[0];
    return 0;
}
