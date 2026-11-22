/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x96];
    s8 field_96;
    s8 field_97;
} Fields;

s32 func_0099EAC0(Fields *arg0, s64 arg1) {
    if (arg0 == 0) {
        return 5;
    }
    if (arg0->field_96 != ((s64)(arg1 << 0x38) >> 0x38)) {
        arg0->field_96 = -1;
        arg0->field_97 = 1;
    }
    return 0;
}
