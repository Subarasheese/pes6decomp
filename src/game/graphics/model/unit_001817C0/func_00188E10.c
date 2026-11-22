/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern u8 D_0051FF49[];
extern u8 D_0051FF48[];
extern u8 D_005200B0[];
s32 func_00188E10(s32 index) {
    s32 enabled;
    if (index == 0)
        enabled = D_0051FF49[0];
    else
        enabled = D_0051FF48[0];
    if (enabled && (D_005200B0[index] & 0x10))
        return 1;
    return 0;
}
