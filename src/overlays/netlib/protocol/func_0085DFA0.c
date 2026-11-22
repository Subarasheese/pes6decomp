/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_002DCA40(void);
s32 func_00847280(s16);

s32 func_0085DFA0(M2C_UNK arg0, void *arg1) {
    if (func_002DCA40() == 0) {
        return -1;
    }
    return -(func_00847280(M2C_FIELD(arg1, s16 *, 2)) == 0);
}
