/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00313A80(void *, s32, void *);
void func_00313B30(void *, s32, s32);
void func_00333440(s32, void *, s32);

void func_0033DAB0(s32 a) {
    u8 buf[0x1C];
    s32 x;
    func_00313A80(buf, 2, &x);
    func_00313B30(buf, 1, a);
    func_00333440(0x36, buf, 1);
}
