/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x20];
    void *field_20;
    s32 field_24;
    s32 field_28;
    s32 field_2C;
    u8 pad_30[0xD];
    s8 field_3D;
    s8 field_3E;
} Fields;

extern void func_001D7F10(void *);
s32 func_001C48E8(void *, s32, s32);
s32 func_00D10EE0(void *);

s32 func_00D11310(Fields *arg0) {
    void *entry;

    if (arg0 == 0) {
        return 1;
    }
    if (arg0 != 0) {
        entry = arg0->field_20;
        if (entry != 0) {
            func_001D7F10(entry);
            arg0->field_20 = 0;
        }
        arg0->field_24 = 0;
        arg0->field_28 = 0;
        arg0->field_2C = 0;
        arg0->field_3D = 1;
        arg0->field_3E = 1;
    }
    func_00D10EE0(arg0);
    func_001C48E8(arg0, 0, 0x40);
    return 0;
}
