/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern u8 func_00C132B0(const u8 *), func_00C132C0(const u8 *);
extern u8 D_003E9D51;
s32 func_002C1800(const u8 *player) {
    s32 result = 0;
    s32 mode = func_00C132C0(player);
    if (mode == 3 || mode == 5)
        result = D_003E9D51 == ((func_00C132B0(player) >> 5) & 1);
    if (!result && func_00C132C0(player) == 4)
        result = (D_003E9D51 ^ 1) == ((func_00C132B0(player) >> 5) & 1);
    return result;
}
