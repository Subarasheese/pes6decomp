/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(void *, s32, s32 *);
void Pes6BitSet_Write(void *, s32, s32);
void func_00333440(s32, void *, s32);

void func_00333320(s32 value) {
    u8 buf[0x1C];
    s32 out;

    Pes6BitSet_Initialize(buf, 1, &out);
    Pes6BitSet_Write(buf, 0, value);
    func_00333440(0, buf, 1);
}
