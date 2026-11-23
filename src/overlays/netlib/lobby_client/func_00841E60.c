/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern const u16 D_008AB4DA[];
u16 func_00841E60(s32 index) {
    if (index < 0 || index >= 40)
        return 0;
    return D_008AB4DA[index];
}
