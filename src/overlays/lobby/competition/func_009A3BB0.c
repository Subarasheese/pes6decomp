/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x25C];
    void *field_25C;
    u8 pad_260[0xC];
    s32 field_26C;
} Fields;

extern s32 func_002DB830(void *);
extern s32 func_002DB940(void *);
s32 func_002DBC20(void *, s32, s32);

s32 func_009A3BB0(Fields *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 value;
    s32 value2;
    s32 value3;
    s32 value4;
    s32 value5;
    s32 value6;

    value6 = 0;
    value4 = arg2 & 0xFFFF;
    if (value4 < 2) {
        return 0;
    }
    value3 = func_002DB830(arg0->field_25C);
    arg0->field_26C = (s32)(arg0->field_26C + arg1);
    value2 = func_002DB940(arg0->field_25C);
    func_002DBC20(arg0->field_25C, arg0->field_26C + value3, arg3);
    value5 = func_002DB940(arg0->field_25C);
    if (arg0->field_26C < 0) {
        arg0->field_26C = 0;
    }
    value = value4 - 1;
    if (value < arg0->field_26C) {
        arg0->field_26C = value;
    }
    if (value2 != value5) {
        value6 = 3;
    }
    return value6;
}
