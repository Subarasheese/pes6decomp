/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x8];
    s32 field_8;
    u8 field_C;
} Fields;

extern void Pes6Heap_Free(void *);
s32 func_001DF7B0(s32);

void func_00AEDE30(Fields *arg0) {
    if (arg0 != 0) {
        func_001DF7B0(arg0->field_8);
        arg0->field_8 = 0;
        if (arg0->field_C & 1) {
            Pes6Heap_Free(arg0);
        }
    }
}
