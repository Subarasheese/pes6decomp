/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    u8 pad_0[0x1D5];
    u8 field_1D5;
} Fields;

void func_0090BA30(Fields *arg0) {
    if (arg0->field_1D5 != 0) {
        arg0->field_1D5 = 0U;
    }
}
