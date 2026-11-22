/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    u8 pad_0[0x1DA];
    u8 field_1DA;
    u8 field_1DB;
    u8 pad_1DC[0x27];
    u8 field_203;
} Fields;

extern void func_00914CF0(void *, s32, s32, s32);

void func_0096B4A0(Fields *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 value;
    u8 value2;
    u8 value3;

    value3 = arg0->field_1DA;
    if ((s32)value3 < 0xFF) {
        arg0->field_1DA = (u8)(value3 + 1);
    }
    value = arg0->field_1DB;
    if ((s32)value > 0) {
        arg0->field_1DB = (u8)(value - 1);
    }
    value2 = arg0->field_203;
    if ((s32)value2 > 0) {
        arg0->field_203 = (u8)(value2 - 1);
    }
    func_00914CF0(arg0, arg1, arg2, arg3);
}
