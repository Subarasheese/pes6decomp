/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x4];
    void *field_4;
    u8 pad_8[0xE];
    u8 field_16;
    u8 pad_17[0x89];
    s32 field_A0;
    s32 field_A4;
    s32 field_A8;
    u8 pad_AC[0x34];
    f32 field_E0;
    u8 pad_E4[0x4];
    f32 field_E8;
} Fields_arg0;

extern f32 *D_003E74CC;

void func_00849C70(Fields_arg0 *arg0) {
    u8 value;
    void *entry;

    entry = arg0->field_4;
    if (M2C_FIELD(entry, f32 *, 0x28) < 0.5f) {
        M2C_FIELD(entry, f32 *, 0x28) = (f32)*D_003E74CC;
    }
    value = arg0->field_16;
    if (value != 0) {
        if (value == 2) {
            if (arg0->field_A8 == 0x7FFF) {
                arg0->field_A8 = 0x7800;
            }
        }
    } else {
        arg0->field_A0 = (s32)arg0->field_E0;
        arg0->field_A4 = (s32)arg0->field_E8;
    }
}
