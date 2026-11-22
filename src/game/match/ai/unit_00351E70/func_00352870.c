/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x5];
    u8 field_5;
    u8 field_6;
    u8 pad_7[0x1];
    u8 field_8;
    u8 field_9;
} Fields;

extern s32 func_0030D9F0(s8 *, s32);
extern s32 func_0030E360(s32 *, s32, s32);
extern s32 func_0030E3E0(s32 *, s32, s32);
extern s32 Pes6BitSet_Write(void *, s32, s32);

s32 func_00352870(void *arg0, Fields *arg1) {
    s8 localValue1;
    s8 localValue2;
    s32 localValue3;
    s32 localValue4;
    s32 value;

    func_0030D9F0(&localValue1, (s32)arg1->field_8);
    func_0030D9F0(&localValue2, (s32)arg1->field_9);
    func_0030E3E0(&localValue3, (s32)arg1->field_5, (s32)arg1->field_6);
    func_0030E360(&localValue4, (s32)arg1->field_5, (s32)arg1->field_6);
    value = (u8)localValue1 != 0;
    if (value != 0) {
        value = (u8)localValue2 != 0;
    }
    Pes6BitSet_Write(arg0, 0x54, value);
    Pes6BitSet_Write(arg0, 0x56, (u8)localValue1 == 3);
    Pes6BitSet_Write(arg0, 0x57, (u8)localValue1 == 1);
    Pes6BitSet_Write(arg0, 0x58, (u8)localValue1 == 2);
    Pes6BitSet_Write(arg0, 0x5A, (u8)localValue1 == 3);
    Pes6BitSet_Write(arg0, 0x5B, (u8)localValue1 == 2);
    Pes6BitSet_Write(arg0, 0x5C, arg1->field_8 == 9);
    Pes6BitSet_Write(arg0, 0x5E, (u8)localValue1 == 1);
    Pes6BitSet_Write(arg0, 0x60, (u8)localValue1 == 2);
    Pes6BitSet_Write(arg0, 0x61, (u8)localValue1 == 1);
    Pes6BitSet_Write(arg0, 0x62, localValue3 >= 0x55);
    Pes6BitSet_Write(arg0, 0x63, localValue4 >= 0x55);
    return 1;
}
