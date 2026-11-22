/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x4];
    void *field_4;
    void *field_8;
    void *field_C;
    s32 field_10;
    s32 field_14;
    u8 pad_18[0x21];
    s8 field_39;
    u8 pad_3A[0x1];
    s8 field_3B;
    s8 field_3C;
    s8 field_3D;
} Fields;

extern void func_002E4570(void *);
extern void func_001D7F10(void *);
s32 func_00D07F40(Fields *arg0) {
    void *entry;
    void *entry2;
    void *entry3;

    if (arg0 == 0) {
        return 0;
    }
    if (arg0 != 0) {
        arg0->field_3C = 0;
        arg0->field_3D = 0;
    }
    if (arg0 != 0) {
        arg0->field_3B = 1;
        arg0->field_39 = 0;
    }
    entry = arg0->field_4;
    if (entry != 0) {
        func_001D7F10(entry);
        arg0->field_4 = 0;
    }
    arg0->field_10 = 0;
    entry2 = arg0->field_8;
    if (entry2 != 0) {
        func_001D7F10(entry2);
        arg0->field_8 = 0;
    }
    entry3 = arg0->field_C;
    if (entry3 != 0) {
        func_002E4570(entry3);
        arg0->field_C = 0;
    }
    arg0->field_14 = 0;
    return 1;
}
