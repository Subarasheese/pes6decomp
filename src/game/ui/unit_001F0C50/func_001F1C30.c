/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x2];
    u8 field_2;
    u8 pad_3[0x19];
    void *field_1C;
    u8 pad_20[0x34];
    void *field_54;
} Fields_arg0;

void func_001DEA50(void *, void *, s32, s32);

void func_001F1C30(Fields_arg0 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *entry;

    if (arg0->field_2 == 0) {
        return;
    }
    entry = arg0->field_54;
    if (M2C_FIELD(entry, u8 *, 0x79) == 0) {
        return;
    }
    M2C_FIELD(M2C_FIELD(entry, void **, 0x58), s32 *, 0x1C) =
        (s32)M2C_FIELD(arg0->field_1C, s32 *, 0x1C);
    func_001DEA50(arg0->field_54, entry, arg2, arg3);
}
