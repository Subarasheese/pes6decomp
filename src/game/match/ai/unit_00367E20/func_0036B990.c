/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x1D];
    u8 field_1D;
    u8 field_1E;
} Fields;

extern s32 Pes6BitSet_Write(void *, s32, s32);
extern s32 func_0036B170(void *, void *);
extern s32 func_0036B580(void *, void *);

s32 func_0036B990(void *arg0, s32 arg1, Fields *arg2) {
    s32 value;
    s32 value2;
    s32 value3;
    s32 value4;
    s32 value5;
    u8 value6;
    u8 value7;
    u8 value8;

    value8 = arg2->field_1E;
    value3 = 1;
    if ((value8 != 0x5A) && (value8 != 0x78)) {
        value3 = 0;
    }
    Pes6BitSet_Write(arg0, 0x13, value3);
    func_0036B580(arg0, arg2);
    func_0036B170(arg0, arg2);
    value6 = arg2->field_1E;
    Pes6BitSet_Write(arg0, 0x77, arg2->field_1D == 2);
    value = value6 & 0xFF;
    Pes6BitSet_Write(arg0, 0x78, value < 0x5F);
    Pes6BitSet_Write(arg0, 0x79, value == 0x5F);
    Pes6BitSet_Write(arg0, 0x7A, value == 0x60);
    Pes6BitSet_Write(arg0, 0x7B, value == 0x61);
    Pes6BitSet_Write(arg0, 0x7C, value == 0x62);
    Pes6BitSet_Write(arg0, 0x7D, value == 0x63);
    Pes6BitSet_Write(arg0, 0x7E, value == 0x64);
    value4 = value == 0x65;
    if (value4 == 0) {
        value4 = value == 0x66;
    }
    Pes6BitSet_Write(arg0, 0x7F, value4);
    Pes6BitSet_Write(arg0, 0x80, value >= 0x67);
    value7 = arg2->field_1E;
    Pes6BitSet_Write(arg0, 0x81, arg2->field_1D == 3);
    value2 = value7 & 0xFF;
    Pes6BitSet_Write(arg0, 0x82, value2 < 0x6E);
    Pes6BitSet_Write(arg0, 0x83, value2 == 0x6E);
    Pes6BitSet_Write(arg0, 0x84, value2 == 0x6F);
    Pes6BitSet_Write(arg0, 0x85, value2 == 0x70);
    Pes6BitSet_Write(arg0, 0x86, value2 == 0x71);
    Pes6BitSet_Write(arg0, 0x87, value2 == 0x72);
    Pes6BitSet_Write(arg0, 0x88, value2 == 0x73);
    value5 = value2 == 0x74;
    if (value5 == 0) {
        value5 = value2 == 0x75;
    }
    Pes6BitSet_Write(arg0, 0x89, value5);
    Pes6BitSet_Write(arg0, 0x8A, value2 >= 0x76);
    return 1;
}
