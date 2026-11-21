/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_001D7D60(s32, s32);
extern char D_00A7D728[];
extern char D_00A7D750[];

s32 func_00985DE0(void) {
    if (((*(s32 *)D_00A7D750) == 1)) {
        func_001D7D60((*(s32 *)D_00A7D728), 1);
        return 1;
    }
    return 0;
}
