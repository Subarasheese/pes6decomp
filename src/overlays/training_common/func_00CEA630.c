/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
typedef struct { char pad[0x6C]; s32 f; } S6C;
M2C_UNK func_002DC1D0(s32);
void func_00CEA630(S6C *arg0) {
    func_002DC1D0(arg0->f);
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
}
