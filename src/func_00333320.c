/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00313A80(void *, s32, s32 *);
void func_00313B30(void *, s32, s32);
void func_00333440(s32, void *, s32);

void func_00333320(s32 value) {
    u8 buf[0x1C];
    s32 out;

    func_00313A80(buf, 1, &out);
    func_00313B30(buf, 0, value);
    func_00333440(0, buf, 1);
}
