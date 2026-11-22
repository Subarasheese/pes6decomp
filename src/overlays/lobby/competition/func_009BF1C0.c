/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x4];
    void *field_4;
    void *field_8;
    void *field_C;
} Fields;

extern void func_001D7F10(void *);
s32 func_0099C7C0(void *);

s32 func_009BF1C0(Fields *arg0) {
    void *entry;
    void *entry2;
    void *entry3;

    if (arg0 == 0) {
        return 4;
    }
    entry = arg0->field_4;
    if (entry != 0) {
        func_001D7F10(entry);
        arg0->field_4 = 0;
    }
    entry2 = arg0->field_8;
    if (entry2 != 0) {
        func_001D7F10(entry2);
        arg0->field_8 = 0;
    }
    entry3 = arg0->field_C;
    if (entry3 != 0) {
        func_001D7F10(entry3);
        arg0->field_C = 0;
    }
    func_0099C7C0(arg0);
    return 0;
}
