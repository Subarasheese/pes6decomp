/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
u16 func_009B32D0(u16, u16, s32);
typedef struct { u8 pad[0x26]; u16 a; } S;
void func_00A00960(S *arg0, s32 arg1) {
    arg0->a = func_009B32D0(M2C_FIELD(arg0, u16 *, 0x2C), arg0->a, arg1);
}
