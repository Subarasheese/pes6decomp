/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001B8DC0(void);
M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
M2C_UNK func_00CECDB0();                            /* extern */
s32 func_00CED260();                                /* extern */
extern void *D_003E7E1C;

s32 func_00CEBFF0(void) {
    if (func_001B8DC0() == 0) {
        return 0;
    }
    if (func_00CED260() == 0) {
        return 0;
    }
    func_00CECDB0();
    M2C_FIELD(D_003E7E1C, s32 *, 4) = 2;
    func_001B6460(0);
    return 1;
}
