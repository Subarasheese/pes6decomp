/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x8];
    s32 field_8;
    s32 field_C;
    s8 field_10;
} Fields;

s32 func_00B93260(s32);

s32 func_00B91390(Fields *arg0) {
    if (arg0->field_C == 1) {
        arg0->field_10 = 0;
        arg0->field_C = 0;
        func_00B93260(arg0->field_8);
        return 1;
    }
    return 0;
}
