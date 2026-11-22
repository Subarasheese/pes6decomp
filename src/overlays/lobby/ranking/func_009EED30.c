/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad_0[0x34];
    s32 field_34;
    u8 pad_38[0x4];
    f32 field_3C;
} Fields;

extern f32 func_002DB850(void *);
extern s32 func_002DB870(void *);
s32 func_009ECC80(void *, f32);
s32 func_009ECCD0(void *, s32);
s32 func_009ECCE0(void *, s32);

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
void func_009EED30(Fields *arg0, s32 arg1) {
    f32 value;
    f32 value2;
    s32 value3;
    void **value4;

    value4 = M2C_FIELD(arg0, void ***, 0x38);
    value = arg0->field_3C;
    value2 = value + func_002DB850(*value4);
    value3 = func_002DB870(*value4) & 0xFF;
    func_009ECC80(arg0, value2);
    func_009ECCD0(arg0, value3);
    if (arg0->field_34 != arg1) {
        func_009ECCE0(arg0, arg1 == 1);
        arg0->field_34 = (s32)(arg1 == 1);
    }
}
