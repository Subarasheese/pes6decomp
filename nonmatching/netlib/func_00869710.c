/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0086A8E0(void *);                      /* extern */
M2C_UNK func_00874120(s32 *, s32);                  /* extern */
M2C_UNK func_00874460(s32 *);                       /* extern */
M2C_UNK func_00874470();                            /* extern */

s32 func_00869710(s32 *arg0, void *arg1) {
    if ((arg0 != NULL) && (arg1 != NULL)) {
        if (*arg0 != 0x60B2) {
            return -0x46;
        }
        func_00874470();
        func_00874120(arg0, arg1 + 0x878);
        func_00874120(arg0, arg1 + 0x879);
        func_00874120(arg0, arg1 + 0x87A);
        func_00874120(arg0, arg1 + 0x87B);
        func_00874120(arg0, arg1 + 0x87C);
        func_00874120(arg0, arg1 + 0x87D);
        func_00874120(arg0, arg1 + 0x87E);
        func_00874120(arg0, arg1 + 0x87F);
        func_00874120(arg0, arg1 + 0x880);
        func_00874120(arg0, arg1 + 0x881);
        func_00874120(arg0, arg1 + 0x882);
        func_00874120(arg0, arg1 + 0x883);
        func_00874120(arg0, arg1 + 0x887);
        func_00874120(arg0, arg1 + 0x884);
        func_00874120(arg0, arg1 + 0x885);
        func_00874120(arg0, arg1 + 0x886);
        func_00874460(arg0);
        func_0086A8E0(arg1);
        M2C_FIELD(arg1, s8 *, 0x8FF) = (s8) M2C_FIELD(arg1, s8 *, 0x87B);
        M2C_FIELD(arg1, s32 *, 0x874) = 1;
        return 0;
    }
    return -0x18;
}
