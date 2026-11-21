/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 field_0;
    u8 field_1;
    u8 field_2;
} Fields_arg2;

extern s32 Pes6BitSet_Write(void *, s32, s32);
s32 func_008FC5C0(void *arg0, void *arg1, Fields_arg2 *arg2) {
    Pes6BitSet_Write(arg0, 0x10E, M2C_FIELD(arg1, u8 *, 0xD) == 5);
    Pes6BitSet_Write(arg0, 0x10F,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 5) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0x110,
                     (arg2->field_2 == 1) & ((arg2->field_0 == 4) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0x111,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 4) & (arg2->field_1 == 1)));
    Pes6BitSet_Write(arg0, 0x112,
                     (arg2->field_2 == 2) & ((arg2->field_0 == 3) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0x113,
                     (arg2->field_2 == 1) & ((arg2->field_0 == 3) & (arg2->field_1 == 1)));
    Pes6BitSet_Write(arg0, 0x114,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 3) & (arg2->field_1 == 2)));
    Pes6BitSet_Write(arg0, 0x115,
                     (arg2->field_2 == 3) & ((arg2->field_0 == 2) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0x116,
                     (arg2->field_2 == 2) & ((arg2->field_0 == 2) & (arg2->field_1 == 1)));
    Pes6BitSet_Write(arg0, 0x117,
                     (arg2->field_2 == 1) & ((arg2->field_0 == 2) & (arg2->field_1 == 2)));
    Pes6BitSet_Write(arg0, 0x118,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 2) & (arg2->field_1 == 3)));
    Pes6BitSet_Write(arg0, 0x119,
                     (arg2->field_2 == 4) & ((arg2->field_0 == 1) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0x11A,
                     (arg2->field_2 == 3) & ((arg2->field_0 == 1) & (arg2->field_1 == 1)));
    Pes6BitSet_Write(arg0, 0x11B,
                     (arg2->field_2 == 2) & ((arg2->field_0 == 1) & (arg2->field_1 == 2)));
    Pes6BitSet_Write(arg0, 0x11C,
                     (arg2->field_2 == 1) & ((arg2->field_0 == 1) & (arg2->field_1 == 3)));
    Pes6BitSet_Write(arg0, 0x11D,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 1) & (arg2->field_1 == 4)));
    Pes6BitSet_Write(arg0, 0x11E,
                     (arg2->field_2 == 5) & ((arg2->field_0 == 0) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0x11F,
                     (arg2->field_2 == 4) & ((arg2->field_0 == 0) & (arg2->field_1 == 1)));
    Pes6BitSet_Write(arg0, 0x120,
                     (arg2->field_2 == 3) & ((arg2->field_0 == 0) & (arg2->field_1 == 2)));
    Pes6BitSet_Write(arg0, 0x121,
                     (arg2->field_2 == 2) & ((arg2->field_0 == 0) & (arg2->field_1 == 3)));
    Pes6BitSet_Write(arg0, 0x122,
                     (arg2->field_2 == 1) & ((arg2->field_0 == 0) & (arg2->field_1 == 4)));
    Pes6BitSet_Write(arg0, 0x123,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 0) & (arg2->field_1 == 5)));
    return 1;
}
