/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    s32 field_0;
    s32 field_4;
    u8 pad_8[0x4];
    void *field_C;
    u8 pad_10[0x4];
    void *field_14;
} Fields;

extern void Pes6Heap_Free(void *);
s32 func_00C89850(s32);
extern void *D_003EA8B4;

void func_00C93C70(void) {
    s32 value;
    Fields *value2;

    value2 = D_003EA8B4;
    if (value2 != 0) {
        value = 0;
        if (value2->field_4 > 0) {
            do {
                func_00C89850(value2->field_0 + value);
                value += 1;
            } while (value < value2->field_4);
        }
        Pes6Heap_Free(value2->field_C);
        Pes6Heap_Free(value2->field_14);
        Pes6Heap_Free(value2);
    }
    D_003EA8B4 = 0;
}
