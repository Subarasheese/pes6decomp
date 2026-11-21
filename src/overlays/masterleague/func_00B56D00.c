/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_009612B0(M2C_UNK);
s32 func_00B52C70(s32, M2C_UNK);
extern u8 func_00B54300(void);

s32 func_00B56D00(void) {
    if (func_00B52C70(func_00B54300() & 0xFF, 2) == 0) {
        return 0;
    }
    return func_009612B0(9) != 0;
}
