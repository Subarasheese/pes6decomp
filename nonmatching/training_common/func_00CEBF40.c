/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001B8DC0(void);
M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
extern void *D_003E7E1C;

s32 func_00CEBF40(void) {
    if (func_001B8DC0() != 0) {
        M2C_FIELD(D_003E7E1C, s32 *, 4) = 0;
        func_001B6460(0);
        return 1;
    }
    return 0;
}
