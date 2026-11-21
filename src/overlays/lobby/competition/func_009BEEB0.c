/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x2C];
    s32 field_2C;
    u8 pad_30[0x3];
    s8 field_33;
} Fields;

s32 func_009BEEB0(Fields *arg0, s32 arg1) {
    if (arg0 == 0) {
        return 4;
    }
    if (arg0->field_2C != arg1) {
        arg0->field_2C = arg1;
        arg0->field_33 = 1;
    }
    return 0;
}
