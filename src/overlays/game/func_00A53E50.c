/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    u8 pad_0[0xF4];
    f32 field_F4;
} Fields;

extern f32 *D_003E74CC;

void func_00A53E50(Fields *arg0) {
    f32 value;
    f32 value2;

    value = 2.0f * *D_003E74CC;
    if (!(arg0->field_F4 <= value)) {
        arg0->field_F4 = value;
    }
    value2 = -2.0f * *D_003E74CC;
    if (arg0->field_F4 < value2) {
        arg0->field_F4 = value2;
    }
}
