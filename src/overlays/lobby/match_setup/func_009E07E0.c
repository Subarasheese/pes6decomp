/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 D_00A7DEE8[];

u8 func_009E07E0(void) {
    u8 value;

    if (D_00A7DEE8[0] == 0) {
        value = 0;
    } else {
        value = *(u8 *)(D_00A7DEE8[0] + 0x38);
    }
    return value;
}
