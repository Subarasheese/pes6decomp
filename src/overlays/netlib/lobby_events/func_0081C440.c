/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x8];
    void *field_8;
    void *field_C;
    u8 pad_10[0x6E];
    s8 field_7E;
    s8 field_7F;
    s8 field_80;
    s8 field_81;
    s8 field_82;
    s8 field_83;
    s32 field_84;
    s32 field_88;
} Fields;

extern void Pes6Heap_Free(void *);
extern void func_001D7F10(void *);
s32 func_0081C440(Fields *arg0) {
    void *entry;
    void *entry2;

    if (arg0 == 0) {
        return 0;
    }
    if (arg0 != 0) {
        if (arg0 != 0) {
            arg0->field_84 = 1;
            arg0->field_88 = 1;
            arg0->field_7E = 0;
            arg0->field_7F = 0;
            arg0->field_80 = 0;
            arg0->field_81 = 0;
            arg0->field_82 = 1;
            arg0->field_83 = 1;
        }
        entry = arg0->field_8;
        if (entry != 0) {
            func_001D7F10(entry);
            arg0->field_8 = 0;
        }
        entry2 = arg0->field_C;
        if (entry2 != 0) {
            func_001D7F10(entry2);
            arg0->field_C = 0;
        }
    }
    Pes6Heap_Free(arg0);
    return 1;
}
