/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x1BC];
    void *field_1BC;
    s32 field_1C0;
} Fields;

extern void func_001F22B0(void *);
void func_008D07E0(Fields *arg0) {
    if (arg0 != 0) {
        func_001F22B0(arg0->field_1BC);
        arg0->field_1BC = 0;
        arg0->field_1C0 = 0;
    }
}
