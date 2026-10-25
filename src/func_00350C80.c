/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 p[0x1008]; s32 v; } R;
s32 func_003389D0(s32, s32);
R *func_00335370(void);
void func_00333440(s32, s32, s32);
void func_00338930(s32);

s32 func_00350C80(s32 a) {
    s32 r = func_003389D0(a, 0);
    func_00335370()->v = r;
    func_00333440(0x9E, 0, 1);
    func_00338930(a);
    return 1;
}
