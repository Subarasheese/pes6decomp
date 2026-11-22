/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x4];
    void *field_4;
    u8 pad_8[0xE];
    u8 field_16;
} Fields;

extern s32 func_00207D10(void *);
s32 func_008F9220(void *, s32, s32, s32);

s32 func_008F9140(Fields *arg0) {
    u8 value;

    value = arg0->field_16;
    switch (value) {
    case 0:
        if (func_00207D10(arg0->field_4) != 0) {
            arg0->field_16 = (u8)(arg0->field_16 + 1);
        case 1:
            return func_008F9220(arg0, 0x44C, 0x4EC, 0);
        }
    default:
        return 1;
    }
}
