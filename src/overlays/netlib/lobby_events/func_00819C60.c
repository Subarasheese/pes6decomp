/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    s32 field_0;
    u8 pad_4[0x4];
    void *field_8;
    u8 pad_C[0x8];
    s32 field_14;
    s32 field_18;
    s32 field_1C;
    s32 field_20;
    u8 pad_24[0x21];
    s8 field_45;
    s8 field_46;
} Fields;

extern void Pes6Heap_Free(void *);
extern void func_001D7F10(void *);
s32 func_00819C60(Fields *arg0) {
    if (arg0 == 0) {
        return 0;
    }
    if (arg0 != 0) {
        if (arg0 != 0) {
            arg0->field_45 = 0;
            arg0->field_46 = 0;
            arg0->field_14 = 0;
            arg0->field_18 = 0;
            arg0->field_1C = 0;
            arg0->field_20 = 0;
        }
        if (arg0 != 0) {
            arg0->field_0 = 0;
        }
        func_001D7F10(arg0->field_8);
        arg0->field_8 = 0;
    }
    Pes6Heap_Free(arg0);
    return 1;
}
