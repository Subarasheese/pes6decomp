/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef s32 (*Update)(void);
extern Update D_00C9F23C[];
extern s32 func_00C22C20(void);
s32 func_00C22D80(void) {
    if (!D_00C9F23C[0]) {
        D_00C9F23C[0] = func_00C22C20;
    } else if (D_00C9F23C[0]() == 1 && !D_00C9F23C[0])
        return 1;
    return 0;
}
