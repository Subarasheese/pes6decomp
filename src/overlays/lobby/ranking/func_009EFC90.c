/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x4];
    s32 field_4;
    s32 field_8;
    void *field_C;
    u8 pad_10[0x4];
    s32 field_14;
    s32 field_18;
    void *field_1C;
} Fields_arg0;

s32 func_009F06D0(s32, s32, s32, s32, s32);

void func_009EFC90(Fields_arg0 *arg0, s32 arg1) {
    s32 value;
    void *entry;
    void *entry2;

    value = M2C_FIELD(arg0->field_C, s32 *, 0xC);
    if (value != arg0->field_8) {
        entry = arg0->field_1C;
        func_009F06D0(arg0->field_14, *M2C_FIELD(arg0, s32 **, 0x10), M2C_FIELD(entry, s32 *, 0),
                      M2C_FIELD(entry, s32 *, 4), value);
        arg0->field_8 = value;
    }
    if (arg1 != arg0->field_4) {
        entry2 = arg0->field_1C;
        func_009F06D0(arg0->field_18, *M2C_FIELD(arg0, s32 **, 0x10), M2C_FIELD(entry2, s32 *, 8),
                      M2C_FIELD(entry2, s32 *, 0xC), arg1);
        arg0->field_4 = arg1;
    }
}
