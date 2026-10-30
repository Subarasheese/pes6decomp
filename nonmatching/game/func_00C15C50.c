/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00C18D20(s32);
M2C_UNK func_00C15110(s32, s32, s32, M2C_UNK *, M2C_UNK); /* extern */
s32 func_00C153C0(s32, s32, s32, M2C_UNK *, M2C_UNK); /* extern */
extern char D_00591E58[];
extern char D_00591E60[];
extern char D_00CB35A8[];
extern char D_00CB35B0[];
extern char D_00CB35B8[];
extern char D_00CB35C0[];
extern char D_00CB35C8[];
extern char D_00CB35D8[];
extern char D_00CB35E0[];

s32 func_00C15C50(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    s32 var_s0;

    var_s0 = 0;
    if ((arg3 != NULL) && ((arg0 & 0xFF) != 0xFF)) {
        var_s0 = 2;
        M2C_FIELD(arg3, s8 *, 1) = func_00C18D20(arg0);
        M2C_FIELD(arg3, s8 *, 2) = func_00C18D20(arg1);
        M2C_FIELD(arg3, u8 *, 3) = 0U;
        M2C_FIELD(arg3, f32 *, 4) = (f32) (*(f32 *)D_00591E58);
        M2C_FIELD(arg3, f32 *, 8) = (f32) (*(f32 *)D_00591E60);
        if (func_00C153C0(arg2, 0xFF, 0xFF, ((void *)D_00CB35B0), 1) != 0) {
            func_00C15110(arg2, 0xFF, 0xFF, ((void *)D_00CB35B0), 1);
            M2C_FIELD(arg3, u8 *, 3) = (u8) (M2C_FIELD(arg3, u8 *, 3) | 8);
        }
        if (func_00C153C0(arg2, arg0, 0xFF, ((void *)D_00CB35B8), 2) != 0) {
            func_00C15110(arg2, arg0, 0xFF, ((void *)D_00CB35B8), 2);
            M2C_FIELD(arg3, u8 *, 3) = (u8) (M2C_FIELD(arg3, u8 *, 3) | 1);
        }
        if (func_00C153C0(arg2, arg0, 0xFF, ((void *)D_00CB35C0), 2) != 0) {
            func_00C15110(arg2, arg0, 0xFF, ((void *)D_00CB35C0), 2);
            M2C_FIELD(arg3, u8 *, 3) = (u8) (M2C_FIELD(arg3, u8 *, 3) | 2);
            M2C_FIELD(arg3, u8 *, 3) = (u8) (M2C_FIELD(arg3, u8 *, 3) | 4);
        }
        if (func_00C153C0(arg2, arg0, 0xFF, ((void *)D_00CB35C8), 2) != 0) {
            func_00C15110(arg2, arg0, 0xFF, ((void *)D_00CB35C8), 2);
            M2C_FIELD(arg3, u8 *, 3) = (u8) (M2C_FIELD(arg3, u8 *, 3) | 4);
        }
        if (func_00C153C0(arg2, 0xFF, arg1, ((void *)D_00CB35D8), 2) != 0) {
            func_00C15110(arg2, 0xFF, arg1, ((void *)D_00CB35D8), 2);
            M2C_FIELD(arg3, u8 *, 3) = (u8) (M2C_FIELD(arg3, u8 *, 3) | 0x10);
        }
        if (func_00C153C0(arg2, 0xFF, arg1, ((void *)D_00CB35E0), 2) != 0) {
            func_00C15110(arg2, 0xFF, arg1, ((void *)D_00CB35E0), 2);
            M2C_FIELD(arg3, u8 *, 3) = (u8) (M2C_FIELD(arg3, u8 *, 3) | 0x20);
        }
        func_00C15110(arg2, arg0, 0xFF, ((void *)D_00CB35A8), 5);
    }
    return var_s0;
}
