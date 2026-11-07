/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(void *, s32, void *);
void func_003139F0(void *, s32);
void Pes6BitSet_Write(void *, s32, s32);
s32 func_00333440(s32, void *, s32);
extern u8 D_0061C71E[];

typedef struct {
    u8 b0 : 1, b1 : 1, b2 : 1, b3 : 1, b4 : 1, b5 : 1, b6 : 1, b7 : 1;
} Bits;

s32 func_00359520(void *arg0) {
    u8 buf[0x20];

    Pes6BitSet_Initialize(buf, 3, buf + 0x1C);
    func_003139F0(buf, M2C_FIELD(arg0, u8 *, 0x30));
    Pes6BitSet_Write(buf, 1, ((Bits *)D_0061C71E)->b1);
    Pes6BitSet_Write(buf, 2, ((Bits *)D_0061C71E)->b2);
    func_00333440(0x51, buf, 1);
    return 1;
}
