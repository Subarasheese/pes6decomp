/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern const u16 D_008AB556[];
u16 func_00841DE0(s32 index) {
    if (index < 0 || index >= 40)
        return 0;
    return D_008AB556[index];
}
