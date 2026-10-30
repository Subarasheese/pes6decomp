/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00873EE0(s32 *, s32, M2C_UNK);         /* extern */
M2C_UNK func_00873F60(s32 *, s32 *);                /* extern */
M2C_UNK func_00873FD0(s32 *, s32);                  /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470(s32 *);                       /* extern */

s32 func_0086C8C0(s32 *arg0, s32 arg1) {
    s32 sp3C;

    sp3C = 0;
    if ((arg0 != NULL) && (arg1 != 0)) {
        if (*arg0 == 0x4351) {
            func_001C48E8(arg1 + 0x10, 0, 0x40);
            func_00874470(arg0);
            func_00873F60(arg0, &sp3C);
            func_00873FD0(arg0, arg1);
            func_00873F60(arg0, arg1 + 4);
            func_00873F60(arg0, arg1 + 8);
            func_00873FD0(arg0, arg1 + 0xC);
            func_00873EE0(arg0, arg1 + 0x10, 0x2EE);
            func_00874460(arg0);
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
