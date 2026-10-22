/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void Pes6BitSet_Initialize(void *, s32, void *);
void func_003139F0(void *, s32);
void Pes6BitSet_Write(void *, s32, s32);
s32 func_00333440(s32, void *, s32);
extern u8 D_0061C721[];

typedef struct {
    u8 b0 : 1, b1 : 1, b2 : 1, b3 : 1, b4 : 1, b5 : 1, b6 : 1, b7 : 1;
} Bits;

s32 func_00358F10(void *arg0) {
    u8 buf[0x20];

    Pes6BitSet_Initialize(buf, 0x10, buf + 0x1C);
    func_003139F0(buf, M2C_FIELD(arg0, u8 *, 0x30));
    Pes6BitSet_Write(buf, 1, ((Bits *)(D_0061C721 + 0))->b7);
    Pes6BitSet_Write(buf, 2, ((Bits *)(D_0061C721 + 1))->b0);
    Pes6BitSet_Write(buf, 3, ((Bits *)(D_0061C721 + 1))->b1);
    Pes6BitSet_Write(buf, 4, ((Bits *)(D_0061C721 + 1))->b2);
    Pes6BitSet_Write(buf, 5, ((Bits *)(D_0061C721 + 1))->b3);
    Pes6BitSet_Write(buf, 6, ((Bits *)(D_0061C721 + 1))->b4);
    Pes6BitSet_Write(buf, 7, ((Bits *)(D_0061C721 + 1))->b5);
    Pes6BitSet_Write(buf, 8, ((Bits *)(D_0061C721 + 1))->b6);
    Pes6BitSet_Write(buf, 9, ((Bits *)(D_0061C721 + 1))->b7);
    Pes6BitSet_Write(buf, 0xA, ((Bits *)(D_0061C721 + 2))->b0);
    Pes6BitSet_Write(buf, 0xB, ((Bits *)(D_0061C721 + 2))->b1);
    Pes6BitSet_Write(buf, 0xC, ((Bits *)(D_0061C721 + 2))->b2);
    Pes6BitSet_Write(buf, 0xD, ((Bits *)(D_0061C721 + 2))->b3);
    Pes6BitSet_Write(buf, 0xE, ((Bits *)(D_0061C721 + 2))->b4);
    Pes6BitSet_Write(buf, 0xF, ((Bits *)(D_0061C721 + 2))->b5);
    func_00333440(0x53, buf, 1);
    return 1;
}
