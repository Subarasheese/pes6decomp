/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    s32 field_0;
    u8 pad_4[0x4];
    void *field_8;
    u8 pad_C[0x4];
    s32 field_10;
    s32 field_14;
    u8 pad_18[0x2D];
    s8 field_45;
    s8 field_46;
} Fields;

extern void Pes6Heap_Free(void *);
extern void func_001D7F10(void *);
s32 func_0081A2B0(Fields *arg0) {
    void *entry;

    if (arg0 == 0) {
        return 0;
    }
    if (arg0 != 0) {
        if (arg0 != 0) {
            arg0->field_45 = 0;
            arg0->field_46 = 0;
            arg0->field_10 = 0;
            arg0->field_14 = 0;
        }
        if (arg0 != 0) {
            arg0->field_0 = 0;
        }
        entry = arg0->field_8;
        if (entry != 0) {
            func_001D7F10(entry);
            arg0->field_8 = 0;
        }
    }
    Pes6Heap_Free(arg0);
    return 1;
}
