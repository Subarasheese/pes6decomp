/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 Pes6Scene_Get(s32);
s32 func_00BA3A00(void) {
    return Pes6Scene_Get(0) != 6;
}
