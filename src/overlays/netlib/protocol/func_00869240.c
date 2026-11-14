/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, s32, s32);       /* extern */
M2C_UNK func_00873EE0(s32 *, void *, s32);         /* extern */
M2C_UNK func_00873FD0(s32 *, void *);                  /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_00869240(s32 *arg0, s32 *arg1) {
    if ((arg0 != NULL) && (arg1 != 0)) {
        if (*arg0 != 0x6040) {
            return -0x46;
        }
    } else {
        return -0x18;
    }
    {
        func_001C48E8(arg1 + 2, 0, 0x40);
        func_00874470(arg0);
        func_00873FD0(arg0, arg1);
        func_00873FD0(arg0, arg1 + 1);
        func_00873EE0(arg0, arg1 + 2, 0x40);
        func_00874460(arg0);
        return 0;
    }
}
