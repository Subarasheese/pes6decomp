/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x3];
    u8 field_3;
    u8 pad_4[0x28];
    void *field_2C;
    void *field_30;
} Fields_arg0;

void func_001F3FB0(Fields_arg0 *arg0, void *arg1) {
    void *entry;

    if (arg0 == NULL) {
        return;
    }
    if (arg1 == NULL) {
        return;
    }
    if (arg0 == arg1) {
        return;
    }
    if (!(M2C_FIELD(arg1, u8 *, 0) != 0)) {
        return;
    }
    M2C_FIELD(arg1, void **, 0x28) = arg0;
    if (arg0->field_2C != NULL) {
        entry = arg0->field_30;
        M2C_FIELD(entry, void **, 0x38) = arg1;
        M2C_FIELD(arg1, void **, 0x34) = entry;
    } else {
        arg0->field_2C = arg1;
        M2C_FIELD(arg1, void **, 0x34) = NULL;
    }
    arg0->field_30 = arg1;
    M2C_FIELD(arg1, s32 *, 0x38) = 0;
    M2C_FIELD(arg1, s8 *, 3) = (s8)(arg0->field_3 + 1);
}
