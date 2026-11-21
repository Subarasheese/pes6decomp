/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_0027D0B0(s32, s32);

extern char D_00591E6C[];
extern char D_00591E70[];
extern char D_00591E74[];

s32 func_00AEFE50(void *arg0, s32 arg1) {
    s32 value;
    f32 value2;
    s32 value3;
    f32 value4;
    f32 value5;
    f32 value6;
    void *entry;
    s32 value7;
    s32 value8;
    s32 value9;
    s32 value10;
    f32 value11;
    if (!(*((u8 *)(((s8 *)(*((void **)(((s8 *)arg0) + 4)))) + 0x2D)))) {
        func_0027D0B0((s32)arg0, 5);
    } else {
        entry = arg0;
        func_0027D0B0((s32)entry, 4);
    }
    value2 = *((f32 *)D_00591E6C);
    value5 = *((f32 *)D_00591E70);
    value11 = *((f32 *)D_00591E74);
    func_0027D0B0(arg1, 5);
    value9 = (s32)((*((f32 *)D_00591E70)) - value5);
    if (value9 <= 0) {
        value9 = -value9;
    }
    value4 = value5;
    if (value9 < 0x31) {
        value7 = (s32)(value2 - (*((f32 *)D_00591E6C)));
        value3 = (s32)(value11 - (*((f32 *)D_00591E74)));
        if (((value7 * value7) + (((s32)(value11 - (*((f32 *)D_00591E74)))) *
                                  ((s32)(value11 - (value6 = *((f32 *)D_00591E74)))))) < 0x641) {
            return 1;
        }
    }
    func_0027D0B0(arg1, 4);
    value10 = (s32)((*((f32 *)D_00591E70)) - value4);
    if (value10 <= 0) {
        value10 = -value10;
    }
    if (value10 < 0x31) {
        value8 = (s32)(value2 - (*((f32 *)D_00591E6C)));
        value = (s32)(value11 - (*((f32 *)D_00591E74)));
        if (((value8 * value8) + (value * value)) < 0x641) {
            return 1;
        }
    }
    return 0;
}
