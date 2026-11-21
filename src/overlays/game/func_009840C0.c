/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    u8 pad_0[0x16];
    u8 field_16;
    u8 pad_17[0x55];
    f32 field_6C;
    f32 field_70;
    u8 pad_74[0x3C];
    s32 field_B0;
} Fields;

extern s32 func_00907CC0(void *, u32);
extern s32 func_00908140(void *, s32);
extern s32 func_0096BF00(void *);
extern s32 func_009B33A0(void *, s32, s32);

void func_009840C0(Fields *arg0, f32 arg1, f32 arg2) {
    s32 value;

    if (arg0->field_16 != 7) {
        return;
    }
    arg0->field_6C = arg1;
    arg0->field_70 = arg2;
    func_0096BF00(arg0);
    value = func_009B33A0(arg0, (s32)arg0->field_6C, (s32)arg0->field_70);
    func_00908140(arg0, value);
    if (func_00907CC0(arg0, (u32)value) != 0) {
        arg0->field_B0 = (s32)(arg0->field_B0 | 0x800);
    }
}
