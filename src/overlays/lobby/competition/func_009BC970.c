/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x1DC];
    s32 field_1DC;
    u8 pad_1E0[0x8];
    s8 field_1E8;
} Fields;

s32 func_009BC970(Fields *arg0, s32 arg1) {
    if (arg0 == 0) {
        return 1;
    }
    if (!(arg1 >= 0)) {
        return 1;
    }
    if (arg0->field_1DC != arg1) {
        arg0->field_1E8 = 1;
    }
    arg0->field_1DC = arg1;
    return 0;
}
