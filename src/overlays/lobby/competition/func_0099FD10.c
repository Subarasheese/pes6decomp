/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0xF8];
    s32 field_F8;
    u8 pad_FC[0x4];
    s8 field_100;
} Fields;

s32 func_0099FD10(Fields *arg0, s32 arg1) {
    if (arg0 == 0) {
        return 1;
    }
    if (!(arg1 >= 0)) {
        return 1;
    }
    if (arg0->field_F8 != arg1) {
        arg0->field_100 = 1;
    }
    arg0->field_F8 = arg1;
    return 0;
}
