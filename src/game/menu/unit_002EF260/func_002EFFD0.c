/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001EDAE0(s32);                         /* extern */
M2C_UNK func_001F3D10(s32, s32);                    /* extern */

void func_002EFFD0(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        func_001EDAE0(M2C_FIELD(arg0, s32 *, 0x90));
        func_001F3D10(M2C_FIELD(arg0, s32 *, 0x60), arg1);
    }
}
