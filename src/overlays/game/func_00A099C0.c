/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x4];
    void *field_4;
    u8 pad_8[0x14];
    s32 field_1C;
    s32 field_20;
    u8 pad_24[0x2];
    u16 field_26;
    u8 pad_28[0xC];
    s16 field_34;
} Fields_arg0;

s32 func_00207390(void *, s32);
s32 func_00209A00(void *, s32, s32);
s32 func_009B30B0(u16, s32);

s32 func_00A099C0(Fields_arg0 *arg0, s16 arg1, s32 arg2) {
    void *entry;

    if ((func_009B30B0(arg0->field_26, arg2) & 0xFFFF) >= 0x10) {
        return 0;
    }
    entry = arg0->field_4;
    if (M2C_FIELD(entry, u16 *, 0x30) == 0x11F) {
        func_00209A00(entry, 0x12F, 0);
        arg0->field_34 = arg1;
        arg0->field_20 = (s32)arg0->field_1C;
        func_00207390(arg0->field_4, 2);
        return 1;
    }
    return 0;
}
