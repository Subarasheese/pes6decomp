/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0xFF];
    s8 field_FF;
    s8 field_100;
} Fields;

s32 func_0099FF10(Fields *arg0, s64 arg1) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0->field_FF != ((s64)(arg1 << 0x38) >> 0x38)) {
        arg0->field_FF = (s8)arg1;
        arg0->field_100 = 1;
    }
    return 0;
}
