/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    u8 pad_0[0x8];
    s32 field_8;
    s32 field_C;
} Fields;

typedef struct {
    s32 field_0;
    u8 pad_4[0x3C];
    s32 field_40;
    s32 field_44;
} Fields_arg0;

s32 Pes6Heap_Free(s32);
void *func_00153FD0(s32, s32, s32);
s32 func_001E7A00(void *, s32);
s32 func_001E7C30(s32);

void func_001E7980(Fields_arg0 *arg0) {
    s32 value;
    Fields *value2;

    value = arg0->field_0;
    func_001E7C30(arg0->field_44);
    value2 = func_00153FD0(value, 1, 0x1C);
    value2->field_8 = (s32)arg0->field_40;
    value2->field_C = (s32)arg0->field_44;
    if (value2 != 0) {
        func_001E7A00(value2, value);
        Pes6Heap_Free(value2->field_C);
        value2->field_C = 0;
    }
}
