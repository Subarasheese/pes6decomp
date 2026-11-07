/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
typedef struct { char pad[0x2C]; s32 f; } S;
void func_002DF960(s32);
void func_009ECB50(S *arg0) {
    func_002DF960(arg0->f);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
}
