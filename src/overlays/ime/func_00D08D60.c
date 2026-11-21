/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x525];
    s8 field_525;
    u8 pad_526[0x7];
    s8 field_52D;
    s8 field_52E;
} Fields;

s32 func_00D08D60(Fields *arg0, s64 arg1) {
    if (arg0 == 0) {
        return 0;
    }
    if (arg0->field_52E != ((s64)(arg1 << 0x38) >> 0x38)) {
        arg0->field_52D = 0x11;
    }
    arg0->field_52E = (s8)arg1;
    arg0->field_525 = 1;
    return 1;
}
