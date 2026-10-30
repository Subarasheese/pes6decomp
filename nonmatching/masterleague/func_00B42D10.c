/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0022F8D0();                                /* extern */
s32 func_00B430B0();                                /* extern */
s32 func_00B43210(u16);                             /* extern */
extern void *D_003EAE6C;

s32 func_00B42D10(s32 arg0) {
    s32 temp_s0;
    void *temp_s1;

    temp_s1 = D_003EAE6C;
    if (temp_s1 != NULL) {
        switch (arg0) {                             /* irregular */
        case 1:
            if (M2C_FIELD(temp_s1, s32 *, 0x614) != 0) {
                return 0;
            }
            temp_s0 = func_00B430B0() & 0xFF;
            if (temp_s0 == 0x48) {
                return 0;
            }
            if ((func_0022F8D0() & 0xFF) == 2) {
                if (M2C_FIELD(temp_s1, u8 *, 0x6C1) == 1) {
                    if (temp_s0 == 0x47) {
                        if (func_00B43210(M2C_FIELD(temp_s1, u16 *, 0x6B0)) == 1) {
                            return 0;
                        }
                        return 1;
                    }
                    goto block_34;
                }
                return 0;
            }
        case 2:
block_34:
            return 1;
        case 0:
            if (M2C_FIELD(temp_s1, s32 *, 0x614) != 0) {
                return 0;
            }
            if (!(func_00B430B0() & 0xFF)) {
                return 0;
            }
            goto block_34;
        case 3:
            if (func_00B430B0() & 0xFF) {
                return 0;
            }
            return 1;
        default:
            return 0;
        }
    } else {
        return 0;
    }
}
