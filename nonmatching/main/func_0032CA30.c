/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00333600(int);
M2C_UNK func_003394E0(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK func_0032C9B0;

s32 func_0032CA30(void *arg0, s32 arg1) {
    if (func_00333600(0xA) != 0) {
        M2C_FIELD(arg0, s32 *, 0x6C) = 1;
        M2C_FIELD(arg0, M2C_UNK **, 0x70) = &func_0032C9B0;
        func_003394E0(arg1, 1, 0, 2);
        return 1;
    }
    return 0;
}
