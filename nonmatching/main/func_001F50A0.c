/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001034D0(void *, int);
extern int Pes6PacketStream_AppendWord(int, int);
M2C_UNK func_00103538(void *, M2C_UNK);             /* extern */
s64 func_001391A0(s32);                             /* extern */

s64 func_001F50A0(void *arg0, s32 arg1) {
    s64 temp_v0;

    temp_v0 = func_001391A0(arg1);
    func_001034D0(arg0, ((u64) (temp_v0 << 0x24) >> 0x24) | 0x20000000);
    func_00103538(arg0, 0);
    Pes6PacketStream_AppendWord((s32) arg0, 0x13000000);
    Pes6PacketStream_AppendWord((s32) arg0, 0x10000000);
    return temp_v0;
}
