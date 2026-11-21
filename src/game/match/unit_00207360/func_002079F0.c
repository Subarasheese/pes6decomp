/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    u8 pad_0[0x28];
    f32 field_28;
    u8 pad_2C[0x4];
    u16 field_30;
    u8 pad_32[0x6];
    f32 field_38;
    u8 pad_3C[0x10];
    u8 field_4C;
    u8 field_4D;
    u8 pad_4E[0x3];
    u8 field_51;
} Fields;

s32 func_00207AC0(u16, s32, s32, f32);

s32 func_002079F0(Fields *arg0, s32 arg1) {
    f32 value;
    f32 value2;
    s32 value3;
    s32 value4;

    value3 = func_00207AC0(arg0->field_30, arg1, 0, arg0->field_28);
    if (arg0->field_30 == 0) {
        value4 = 0;
    } else if ((arg0->field_4C != 0) && (arg0->field_4D == 0)) {
        value4 = 0;
    } else if ((arg0->field_51 != 0) && (arg0->field_4D == 0)) {
        value4 = 0;
    } else {
        value2 = arg0->field_28 / 2.0f;
        value = arg0->field_38 - (f32)value3;
        if ((value < value2) && !(value < -value2)) {
            value4 = 1;
        } else {
            value4 = 0;
        }
    }
    return value4 != 0;
}
