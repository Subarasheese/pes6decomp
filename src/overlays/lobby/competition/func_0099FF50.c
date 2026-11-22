/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0xFE];
    s8 field_FE;
    u8 pad_FF[0x1];
    s8 field_100;
} Fields;

s32 func_0099FF50(Fields *arg0, s64 arg1) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0->field_FE != ((s64)(arg1 << 0x38) >> 0x38)) {
        arg0->field_FE = (s8)arg1;
        arg0->field_100 = 1;
    }
    return 0;
}
