/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { char pad[0x26]; u16 a; char pad2[4]; u16 b; } S;
extern u16 func_009B32D0(u16, u16, s32);

void func_00A009A0(S *arg0) {
    arg0->a = func_009B32D0(arg0->b, arg0->a, 0x1000);
}
