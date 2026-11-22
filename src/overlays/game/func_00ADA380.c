/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    u8 pad_0[0x16];
    u8 field_16;
    u8 pad_17[0x1];
    s16 field_18;
    u8 pad_1A[0x96];
    s32 field_B0;
} Fields;

s32 func_00ADA380(Fields *arg0) {
    if (arg0->field_16 != 4) {
        return 0;
    }
    if ((arg0->field_B0 & 0xA00) == 0xA00) {
        arg0->field_16 = 1U;
        arg0->field_18 = 0;
        return 1;
    }
    return 0;
}
