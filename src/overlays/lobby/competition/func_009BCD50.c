/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x1E2];
    s8 field_1E2;
    u8 pad_1E3[0x5];
    s8 field_1E8;
} Fields;

s32 func_009BCD50(Fields *arg0, s64 arg1) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0->field_1E2 != ((s64)(arg1 << 0x38) >> 0x38)) {
        arg0->field_1E2 = (s8)arg1;
        arg0->field_1E8 = 1;
    }
    return 0;
}
