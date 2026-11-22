/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x2E8];
    s32 field_2E8;
    s32 field_2EC;
} Fields;

void func_00C1A750(Fields *arg0, s32 arg1) {
    s32 value;
    s32 value2;

    value2 = arg0->field_2EC;
    value = arg0->field_2E8;
    if (!(value >= value2)) {
        arg0->field_2EC = value;
    } else {
        if (((value2 + arg1) - 1) < value) {
            arg0->field_2EC = (s32)(value - (arg1 - 1));
        }
        return;
    }
}
