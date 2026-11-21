/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    s32 field_0;
    void *field_4;
} Fields;

extern void func_001B9C60(void *);
s32 func_002DC1D0(s32);

void func_009EF7B0(Fields *arg0) {
    s32 value;
    void *entry;

    value = arg0->field_0;
    entry = arg0->field_4;
    if (value != 0) {
        func_002DC1D0(value);
        arg0->field_0 = 0;
    }
    if (entry != 0) {
        func_001B9C60(entry);
        arg0->field_4 = 0;
    }
}
