/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef s32 (*Update)(void);
extern Update D_00C9F240[];
extern s32 func_00C229A0(void);
s32 func_00C22CA0(void) {
    if (!D_00C9F240[0]) {
        D_00C9F240[0] = func_00C229A0;
    } else if (D_00C9F240[0]() == 1 && !D_00C9F240[0])
        return 1;
    return 0;
}
