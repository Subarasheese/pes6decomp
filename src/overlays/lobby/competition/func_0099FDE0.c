/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0xE8];
    s32 field_E8;
    u8 pad_EC[0x14];
    s8 field_100;
} Fields;

s32 func_0099FDE0(Fields *arg0, s32 arg1) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0->field_E8 != arg1) {
        arg0->field_100 = 1;
    }
    arg0->field_E8 = arg1;
    return 0;
}
