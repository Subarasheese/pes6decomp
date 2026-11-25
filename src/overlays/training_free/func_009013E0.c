/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 func_008FA910(void *, u8 *);
extern u8 *D_003AE9D0[];
s32 func_009013E0(void) {
    u8 *base = D_003AE9D0[0];
    return func_008FA910(base + 0x1C, base + 0x44);
}
