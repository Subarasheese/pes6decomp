/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    s32 field_0;
    s32 field_4;
    s32 field_8;
    s32 field_C;
} Fields;

s32 func_001D4E00(s32);
s32 func_001D7F10(s32);
s32 func_0099C7C0(void *);
extern void *D_003EAD10;

void func_009B1A80(void) {
    s32 value;
    s32 value2;
    Fields *value3;

    value3 = D_003EAD10;
    value3->field_8 = 0;
    value3->field_C = 0;
    value = value3->field_4;
    if (value != 0) {
        func_001D7F10(value);
        value3->field_4 = 0;
    }
    value2 = value3->field_0;
    if (value2 != 0) {
        func_001D4E00(value2);
        value3->field_0 = 0;
    }
    if (value3 != 0) {
        func_0099C7C0(value3);
    }
}
