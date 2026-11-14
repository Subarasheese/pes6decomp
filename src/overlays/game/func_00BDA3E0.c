/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_009E1C90(M2C_UNK);

s32 func_00BDA3E0(void) {
    if ((func_009E1C90(0) & 0xFF) != 4) {
        return 0;
    }
    return (func_009E1C90(1) & 0xFF) == 5;
}
