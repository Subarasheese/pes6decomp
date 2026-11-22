/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x8];
    void *field_8;
    u8 pad_C[0x38];
    u16 field_44;
    u8 pad_46[0x22];
    void *field_68;
    s8 field_6C;
    u8 field_6D;
    u8 field_6E;
    u8 field_6F;
    u8 field_70;
    u8 field_71;
    u16 field_72;
    u8 pad_74[0x5];
    s8 field_79;
} Fields_arg0;

void func_001E4640(Fields_arg0 *arg0) {
    u16 value;
    u8 value2;
    void *entry;

    if (arg0->field_71 == 0) {
        entry = arg0->field_8;
        do {
            M2C_FIELD(entry, s8 *, 0x93) = 0;
            entry = M2C_FIELD(entry, void **, 0);
        } while (entry != NULL);
        arg0->field_79 = 0;
        arg0->field_71 = 1U;
    } else {
        arg0->field_79 = 1;
    }
    M2C_FIELD(arg0->field_68, u8 *, 0x93) = (u8)arg0->field_6F;
    arg0->field_6F = (u8)(arg0->field_6F + arg0->field_70);
    value2 = arg0->field_6E + 1;
    arg0->field_6E = value2;
    if ((value2 & 0xFF) >= (s32)arg0->field_6D) {
        arg0->field_6E = 0U;
        arg0->field_6F = 0U;
        M2C_FIELD(arg0->field_68, u8 *, 0x93) = 0xFFU;
        value = arg0->field_72 + 1;
        arg0->field_72 = value;
        if ((s32)arg0->field_44 < (value & 0xFFFF)) {
            arg0->field_6C = 0;
        } else {
            arg0->field_68 = (void *)M2C_FIELD(arg0->field_68, void **, 0);
        }
    }
}
