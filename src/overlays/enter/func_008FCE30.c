/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 field_0;
    u8 field_1;
    u8 field_2;
} Fields_arg2;

extern s32 Pes6BitSet_Write(void *, s32, s32);
s32 func_008FCE30(void *arg0, void *arg1, Fields_arg2 *arg2) {
    Pes6BitSet_Write(arg0, 0x7A, M2C_FIELD(arg1, u8 *, 0xD) == 3);
    Pes6BitSet_Write(arg0, 0x7B,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 3) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0x7C,
                     (arg2->field_2 == 1) & ((arg2->field_0 == 2) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0x7D,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 2) & (arg2->field_1 == 1)));
    Pes6BitSet_Write(arg0, 0x7E,
                     (arg2->field_2 == 3) & ((arg2->field_0 == 1) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0x7F,
                     (arg2->field_2 == 1) & ((arg2->field_0 == 1) & (arg2->field_1 == 1)));
    Pes6BitSet_Write(arg0, 0x80,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 1) & (arg2->field_1 == 2)));
    Pes6BitSet_Write(arg0, 0x81,
                     (arg2->field_2 == 3) & ((arg2->field_0 == 0) & (arg2->field_1 == 0)));
    Pes6BitSet_Write(arg0, 0xFB,
                     (arg2->field_2 == 2) & ((arg2->field_0 == 0) & (arg2->field_1 == 1)));
    Pes6BitSet_Write(arg0, 0xFC,
                     (arg2->field_2 == 1) & ((arg2->field_0 == 0) & (arg2->field_1 == 2)));
    Pes6BitSet_Write(arg0, 0xFD,
                     (arg2->field_2 == 0) & ((arg2->field_0 == 0) & (arg2->field_1 == 3)));
    return 1;
}
