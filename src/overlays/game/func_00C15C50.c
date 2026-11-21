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

extern s32 func_00C18D20(s32);
extern s32 func_00C15110(s32, s32, s32, s32 *, s32);
extern s32 func_00C153C0(s32, s32, s32, s32 *, s32);
extern char D_00591E58[];
extern char D_00591E60[];
extern char D_00CB35A8[];
extern char D_00CB35B0[];
extern char D_00CB35B8[];
extern char D_00CB35C0[];
extern char D_00CB35C8[];
extern char D_00CB35D8[];
extern char D_00CB35E0[];

s32 func_00C15C50(s32 arg0, s32 arg1, s32 arg2, Fields *arg3) {
    s32 value;

    value = 0;
    if ((arg3 != 0) && ((arg0 & 0xFF) != 0xFF)) {
        value = 2;
        arg3->field_1 = func_00C18D20(arg0);
        arg3->field_2 = func_00C18D20(arg1);
        arg3->field_3 = 0U;
        arg3->field_4 = (f32)(*(f32 *)D_00591E58);
        arg3->field_8 = (f32)(*(f32 *)D_00591E60);
        if (func_00C153C0(arg2, 0xFF, 0xFF, ((void *)D_00CB35B0), 1) != 0) {
            func_00C15110(arg2, 0xFF, 0xFF, ((void *)D_00CB35B0), 1);
            arg3->field_3 = (u8)(arg3->field_3 | 8);
        }
        if (func_00C153C0(arg2, arg0, 0xFF, ((void *)D_00CB35B8), 2) != 0) {
            func_00C15110(arg2, arg0, 0xFF, ((void *)D_00CB35B8), 2);
            arg3->field_3 = (u8)(arg3->field_3 | 1);
        }
        if (func_00C153C0(arg2, arg0, 0xFF, ((void *)D_00CB35C0), 2) != 0) {
            func_00C15110(arg2, arg0, 0xFF, ((void *)D_00CB35C0), 2);
            arg3->field_3 = (u8)(arg3->field_3 | 2);
            arg3->field_3 = (u8)(arg3->field_3 | 4);
        }
        if (func_00C153C0(arg2, arg0, 0xFF, ((void *)D_00CB35C8), 2) != 0) {
            func_00C15110(arg2, arg0, 0xFF, ((void *)D_00CB35C8), 2);
            arg3->field_3 = (u8)(arg3->field_3 | 4);
        }
        if (func_00C153C0(arg2, 0xFF, arg1, ((void *)D_00CB35D8), 2) != 0) {
            func_00C15110(arg2, 0xFF, arg1, ((void *)D_00CB35D8), 2);
            arg3->field_3 = (u8)(arg3->field_3 | 0x10);
        }
        if (func_00C153C0(arg2, 0xFF, arg1, ((void *)D_00CB35E0), 2) != 0) {
            func_00C15110(arg2, 0xFF, arg1, ((void *)D_00CB35E0), 2);
            arg3->field_3 = (u8)(arg3->field_3 | 0x20);
        }
        func_00C15110(arg2, arg0, 0xFF, ((void *)D_00CB35A8), 5);
    }
    return value;
}
