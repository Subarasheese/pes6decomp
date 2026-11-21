/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 field_0;
    u8 field_1;
    u8 field_2;
} Fields_arg2;

extern s32 Pes6BitSet_Write(void *, s32, s32);
s32 func_008FCAA0(void *arg0, void *arg1, Fields_arg2 *arg2) {
    Pes6BitSet_Write(arg0, 0xFE, M2C_FIELD(arg1, u8 *, 0xD) == 4);
    Pes6BitSet_Write(arg0, 0xFF,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 4) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0x100,
                     (arg2->field_2 == 1) & ((arg2->field_0 == 3) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0x101,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 3) & (arg2->field_1 == 1)));
    Pes6BitSet_Write(arg0, 0x102,
                     (arg2->field_2 == 2) & ((arg2->field_0 == 2) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0x103,
                     (arg2->field_2 == 1) & ((arg2->field_0 == 2) & (arg2->field_1 == 1)));
    Pes6BitSet_Write(arg0, 0x104,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 2) & (arg2->field_1 == 2)));
    Pes6BitSet_Write(arg0, 0x105,
                     (arg2->field_2 == 3) & ((arg2->field_0 == 1) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0x106,
                     (arg2->field_2 == 2) & ((arg2->field_0 == 1) & (arg2->field_1 == 1)));
    Pes6BitSet_Write(arg0, 0x107,
                     (arg2->field_2 == 1) & ((arg2->field_0 == 1) & (arg2->field_1 == 2)));
    Pes6BitSet_Write(arg0, 0x108,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 1) & (arg2->field_1 == 3)));
    Pes6BitSet_Write(arg0, 0x109,
                     (arg2->field_2 == 4) & ((arg2->field_0 == 0) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0x10A,
                     (arg2->field_2 == 3) & ((arg2->field_0 == 0) & (arg2->field_1 == 1)));
    Pes6BitSet_Write(arg0, 0x10B,
                     (arg2->field_2 == 2) & ((arg2->field_0 == 0) & (arg2->field_1 == 2)));
    Pes6BitSet_Write(arg0, 0x10C,
                     (arg2->field_2 == 1) & ((arg2->field_0 == 0) & (arg2->field_1 == 3)));
    Pes6BitSet_Write(arg0, 0x10D,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 0) & (arg2->field_1 == 4)));
    return 1;
}
