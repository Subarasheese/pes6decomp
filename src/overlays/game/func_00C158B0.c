/* compiler: mwcc-3.0.1b151 */
#include "types.h"

typedef struct {
    u8 pad_0[0x1];
    s8 field_1;
    s8 field_2;
    u8 field_3;
    f32 field_4;
    f32 field_8;
} Fields;

extern s32 func_00C15110(s32, s32, s32, s32 *, s32);
extern s32 func_00C153C0(s32, s32, s32, s32 *, s32);
extern s32 func_00C18D20(s32);
extern char D_00591E58[];
extern char D_00591E60[];
extern char D_00CB35B8[];
extern char D_00CB35C0[];
extern char D_00CB35C8[];
extern char D_00CB35D0[];
extern char D_00CB35D8[];
extern char D_00CB35E0[];

s32 func_00C158B0(s32 arg0, s32 arg1, Fields *arg2) {
    s32 value;

    value = 0;
    if ((arg2 != 0) && (func_00C153C0(arg1, arg0, 0xFF, ((void *)D_00CB35D0), 3) != 0)) {
        value = 3;
        arg2->field_1 = func_00C18D20(arg0);
        arg2->field_2 = func_00C18D20(0xFF);
        arg2->field_3 = 0U;
        arg2->field_4 = (f32)(*(f32 *)D_00591E58);
        arg2->field_8 = (f32)(*(f32 *)D_00591E60);
        if (func_00C153C0(arg1, arg0, 0xFF, ((void *)D_00CB35B8), 2) != 0) {
            func_00C15110(arg1, arg0, 0xFF, ((void *)D_00CB35B8), 2);
            arg2->field_3 = (u8)(arg2->field_3 | 1);
        }
        if (func_00C153C0(arg1, arg0, 0xFF, ((void *)D_00CB35C0), 2) != 0) {
            func_00C15110(arg1, arg0, 0xFF, ((void *)D_00CB35C0), 2);
            arg2->field_3 = (u8)(arg2->field_3 | 2);
            arg2->field_3 = (u8)(arg2->field_3 | 4);
        }
        if (func_00C153C0(arg1, arg0, 0xFF, ((void *)D_00CB35C8), 2) != 0) {
            func_00C15110(arg1, arg0, 0xFF, ((void *)D_00CB35C8), 2);
            arg2->field_3 = (u8)(arg2->field_3 | 4);
        }
        if (func_00C153C0(arg1, 0xFF, arg0, ((void *)D_00CB35D8), 2) != 0) {
            func_00C15110(arg1, 0xFF, arg0, ((void *)D_00CB35D8), 2);
            arg2->field_3 = (u8)(arg2->field_3 | 0x10);
        }
        if (func_00C153C0(arg1, 0xFF, arg0, ((void *)D_00CB35E0), 2) != 0) {
            func_00C15110(arg1, 0xFF, arg0, ((void *)D_00CB35E0), 2);
            arg2->field_3 = (u8)(arg2->field_3 | 0x20);
        }
    }
    return value;
}
