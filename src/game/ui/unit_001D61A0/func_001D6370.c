/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x10];
    s32 field_10;
    void *field_14;
    s32 field_18;
} Fields_arg0;

void func_001D6370(Fields_arg0 *arg0) {
    void *entry;
    void *entry2;

    if (arg0 == NULL) {
        return;
    }
    if (arg0->field_10 == 0) {
        return;
    }
    entry2 = arg0->field_14;
    do {
        entry = M2C_FIELD(entry2, void **, 0x20);
        M2C_FIELD(entry2, s32(**)(void *), 0x18)(entry2);
        entry2 = entry;
    } while (entry != NULL);
    arg0->field_10 = 0;
    arg0->field_14 = NULL;
    arg0->field_18 = 0;
}
