/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 pad_0[0x8];
    s32 field_8;
    u8 pad_C[0xC];
    s32 field_18;
} Fields;

extern s32 func_001F3D10(s32, u8);
extern void func_002E5D40(void *);
extern void func_002E60C0(s32, s32);
extern void func_002E6420(s32, s32);
extern void func_002E6630(s32, s32);
extern void func_002E6800(void *, s32);
extern void func_002E6D40(s32, s32);
extern void func_002E70B0(s32, s32);

s32 func_002E5F60(void *, s32);

void func_002E56A0(Fields *arg0, s32 arg1, s32 arg2) {
    if (arg0 != 0) {
        func_001F3D10(arg0->field_18, 1U);
        arg0->field_8 = arg1;
        switch (arg1) {
        case 0:
            func_002E70B0((s32)arg0, arg2);
            break;
        case 1:
            func_002E6D40((s32)arg0, arg2);
            break;
        case 2:
            func_002E6800(arg0, arg2);
            break;
        case 3:
            func_002E6630((s32)arg0, arg2);
            break;
        case 4:
            func_002E6420((s32)arg0, arg2);
            break;
        case 5:
            func_002E60C0((s32)arg0, arg2);
            break;
        case 6:
            func_002E5F60(arg0, arg2);
            break;
        default:
            arg0->field_8 = 7;
            break;
        }
        func_002E5D40(arg0);
        if (arg0->field_8 == 7) {
            func_001F3D10(arg0->field_18, 0U);
        }
    }
}
