/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x3A];
    u8 field_3A;
    u8 pad_3B[0x1];
    u8 field_3C;
    u8 field_3D;
} Fields_temp_s1;

extern int Pes6BitSet_Write(void *, int, int);
extern int Pes6BitSet_Lookup(void *, int);
extern s32 func_00340FC0(s32);
extern char D_005F1C85[];
extern char D_005F1CA0[];

s32 func_00335B50(void *arg0, void *arg1) {
    s32 value;
    u8 value2;
    Fields_temp_s1 *value3;

    value3 = M2C_FIELD(arg1, void **, 0x3C);
    value = (*(s32 *)D_005F1CA0);
    value2 = value3->field_3A;
    Pes6BitSet_Write(arg0, 0x4C, (value2 == 4) | ((value2 == 2) | (value2 == 3)));
    Pes6BitSet_Write(arg0, 0x4D, value3->field_3A == 2);
    Pes6BitSet_Write(arg0, 0x50, value3->field_3A == 3);
    Pes6BitSet_Write(arg0, 0x53, (value == 2) | (value == 5));
    Pes6BitSet_Write(arg0, 0x57, (s32)value3->field_3C);
    Pes6BitSet_Write(arg0, 0x5B, (*(u8 *)D_005F1C85) == 0x10);
    Pes6BitSet_Write(arg0, 0x5C, value == 3);
    Pes6BitSet_Write(arg0, 0x5F, func_00340FC0(value & 0xFF));
    Pes6BitSet_Write(arg0, 0x63, value3->field_3D == 0);
    Pes6BitSet_Write(arg0, 0x67, (s32)value3->field_3D);
    if (Pes6BitSet_Lookup(arg0, 0x4C) != 0) {
        value3->field_3D = (u8)(value3->field_3D + 1);
    }
    return 1;
}
