/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x31];
    s8 field_31;
    u8 pad_32[0x1];
    s8 field_33;
} Fields;

s32 func_009BEEE0(Fields *arg0, s64 arg1) {
    if (arg0 == 0) {
        return 4;
    }
    if (arg0->field_31 != ((s64)(arg1 << 0x38) >> 0x38)) {
        arg0->field_31 = (s8)arg1;
        arg0->field_33 = 1;
    }
    return 0;
}
