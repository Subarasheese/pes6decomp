/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x1F0];
    s32 field_1F0;
    u8 pad_1F4[0x8];
    s32 field_1FC;
    s32 field_200;
    s32 field_204;
    s32 field_208;
} Fields;

s32 func_001D7F10(s32);
s32 func_008CDEA0(void *, s32, s32);
s32 func_008CE0A0(void *, s32);
s32 func_008CE2B0(void *, s32);
s32 func_008CE570(void *, s32);
s32 func_008CEB30(void *, s32);
s32 func_008CEF10(void *, s32);
s32 func_008CF8D0(void *, s32);
s32 func_008CFAB0(void *, s32);
s32 func_008CFCF0(void *, s32);

void func_008CFFA0(Fields *arg0, s32 arg1, u32 arg2) {
    s32 value;
    s32 value2;
    s32 value3;
    s32 value4;
    s32 value5;

    value = arg0->field_1FC;
    if (value != 0) {
        func_001D7F10(value);
        arg0->field_1FC = 0;
    }
    value2 = arg0->field_200;
    if (value2 != 0) {
        func_001D7F10(value2);
        arg0->field_200 = 0;
    }
    value3 = arg0->field_204;
    if (value3 != 0) {
        func_001D7F10(value3);
        arg0->field_204 = 0;
    }
    value4 = arg0->field_208;
    if (value4 != 0) {
        func_001D7F10(value4);
        arg0->field_208 = 0;
    }
    value5 = arg0->field_1F0;
    if (value5 == 0) {
        func_001D7F10(value5);
        arg0->field_1F0 = 0;
    }
    switch (arg2) {
    case 0:
        func_008CFCF0(arg0, arg1);
        func_008CFAB0(arg0, arg1);
        return;
    case 1:
        func_008CF8D0(arg0, arg1);
        func_008CEF10(arg0, arg1);
        return;
    case 2:
        func_008CEB30(arg0, arg1);
        return;
    case 3:
        func_008CE570(arg0, arg1);
        return;
    case 4:
        func_008CFAB0(arg0, arg1);
        func_008CE2B0(arg0, arg1);
        return;
    case 5:
        func_008CE0A0(arg0, arg1);
        return;
    case 6:
        func_008CDEA0(arg0, arg1, 3);
        return;
    case 7:
        func_008CDEA0(arg0, arg1, 1);
        return;
    case 8:
        func_008CDEA0(arg0, arg1, 2);
        /* fallthrough */
    default:
        return;
    }
}
