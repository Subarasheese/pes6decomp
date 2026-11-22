/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

M2C_UNK func_00BA7238(M2C_UNK *);
extern s32 D_00C3BED0;
extern char D_00C4A070[];

s32 func_00BA8FA8(void) {
    if (D_00C3BED0 != 0) {
        D_00C3BED0 = 0;
        func_00BA7238(((void *)D_00C4A070));
    }
    return 0;
}
