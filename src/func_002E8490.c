/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern u8 D_003E9E68;
extern char D_00591C09[];

s32 func_002E8490(void) {
    if (((*(u8 *)D_00591C09) == 0xA) && (D_003E9E68 == 1)) {
        return 1;
    }
    return 0;
}
