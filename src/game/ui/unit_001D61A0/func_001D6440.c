/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x10];
    s32 field_10;
    void *field_14;
    void *field_18;
} Fields_arg0;

void *Pes6Heap_Alloc(s32, s32);

void *func_001D6440(Fields_arg0 *arg0) {
    void *entry;

    if (arg0 == NULL) {
        return NULL;
    }
    entry = Pes6Heap_Alloc(0x28, 1);
    if (arg0->field_14 == NULL) {
        arg0->field_14 = entry;
        M2C_FIELD(entry, void **, 0x1C) = NULL;
    } else {
        M2C_FIELD(arg0->field_18, void **, 0x20) = entry;
        M2C_FIELD(entry, void **, 0x1C) = (void *)arg0->field_18;
    }
    arg0->field_18 = entry;
    arg0->field_10 = (s32)(arg0->field_10 + 1);
    M2C_FIELD(entry, void **, 0x10) = arg0;
    return entry;
}
