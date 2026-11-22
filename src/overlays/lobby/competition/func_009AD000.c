/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    s32 field_0;
    void *field_4;
    s32 field_8;
    s32 field_C;
    s32 field_10;
    s32 field_14;
    s32 field_18;
    s32 field_1C;
    s32 field_20;
} Fields;

extern void func_001D7F10(void *);
s32 func_002DF960(s32);
s32 func_0099AE80(s32);

void func_009AD000(Fields *arg0) {
    s32 value;
    s32 value2;
    void *entry;

    arg0->field_8 = 0;
    arg0->field_C = 0;
    arg0->field_10 = 0;
    arg0->field_14 = 0;
    arg0->field_18 = 0;
    entry = arg0->field_4;
    if (entry != 0) {
        func_001D7F10(entry);
        arg0->field_4 = 0;
    }
    value = arg0->field_20;
    if (value != 0) {
        func_0099AE80(value);
        arg0->field_20 = 0;
    }
    value2 = arg0->field_1C;
    if (value2 != 0) {
        func_002DF960(value2);
        arg0->field_1C = 0;
    }
    if (arg0->field_0 != 0) {
        arg0->field_0 = 0;
    }
}
