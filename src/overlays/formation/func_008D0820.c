/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x50];
    s32 field_50;
    u8 pad_54[0x168];
    void *field_1BC;
    s32 field_1C0;
} Fields;

extern s32 func_001F2410(void *);
extern void func_001F22B0(void *);
void *func_008B9F20(s32, s32, s32);

void func_008D0820(Fields *arg0) {
    void *entry;

    if (arg0 != 0) {
        func_001F22B0(arg0->field_1BC);
        entry = func_008B9F20(arg0->field_50, 1, 0);
        arg0->field_1BC = entry;
        arg0->field_1C0 = func_001F2410(entry);
    }
}
