/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x30];
    s8 field_30;
    u8 pad_31[0x2];
    s8 field_33;
} Fields;

s32 func_009BEF20(Fields *arg0, s64 arg1) {
    if (arg0 == 0) {
        return 4;
    }
    if (arg0->field_30 != ((s64)(arg1 << 0x38) >> 0x38)) {
        arg0->field_30 = (s8)arg1;
        arg0->field_33 = 1;
    }
    return 0;
}
