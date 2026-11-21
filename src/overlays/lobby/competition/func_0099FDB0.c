/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0xEC];
    s32 field_EC;
    u8 pad_F0[0x10];
    s8 field_100;
} Fields;

s32 func_0099FDB0(Fields *arg0, s32 arg1) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0->field_EC != arg1) {
        arg0->field_100 = 1;
    }
    arg0->field_EC = arg1;
    return 0;
}
