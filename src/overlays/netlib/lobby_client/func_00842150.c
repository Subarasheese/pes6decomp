/* compiler: mwcc-3.0.1b198 */
#include "types.h"
extern const u16 D_008AB0A8[];
u16 func_00842150(s32 index) {
    if (index < 0 || index >= 32)
        return 0;
    return D_008AB0A8[index];
}
