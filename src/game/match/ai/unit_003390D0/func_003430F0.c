/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(void *, s32, void *);
void Pes6BitSet_Write(void *, s32, s32);
void func_00333440(s32, void *, s32);
void func_00338930(s32);

s32 func_003430F0(s32 a) {
    u8 buf[0x1C];
    s32 x;
    Pes6BitSet_Initialize(buf, 1, &x);
    Pes6BitSet_Write(buf, 0, 1);
    func_00333440(0x1A, buf, 1);
    func_00338930(a);
    return 1;
}
