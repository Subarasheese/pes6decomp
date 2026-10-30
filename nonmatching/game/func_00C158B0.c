/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C15110(s32, s32, s32, M2C_UNK *, M2C_UNK); /* extern */
s32 func_00C153C0(s32, s32, s32, M2C_UNK *, M2C_UNK); /* extern */
s8 func_00C18D20(s32);                              /* extern */
extern char D_00591E58[];
extern char D_00591E60[];
extern char D_00CB35B8[];
extern char D_00CB35C0[];
extern char D_00CB35C8[];
extern char D_00CB35D0[];
extern char D_00CB35D8[];
extern char D_00CB35E0[];

s32 func_00C158B0(s32 arg0, s32 arg1, void *arg2) {
    s32 var_s0;

    var_s0 = 0;
    if ((arg2 != NULL) && (func_00C153C0(arg1, arg0, 0xFF, ((void *)D_00CB35D0), 3) != 0)) {
        var_s0 = 3;
        M2C_FIELD(arg2, s8 *, 1) = func_00C18D20(arg0);
        M2C_FIELD(arg2, s8 *, 2) = func_00C18D20(0xFF);
        M2C_FIELD(arg2, u8 *, 3) = 0U;
        M2C_FIELD(arg2, f32 *, 4) = (f32) (*(f32 *)D_00591E58);
        M2C_FIELD(arg2, f32 *, 8) = (f32) (*(f32 *)D_00591E60);
        if (func_00C153C0(arg1, arg0, 0xFF, ((void *)D_00CB35B8), 2) != 0) {
            func_00C15110(arg1, arg0, 0xFF, ((void *)D_00CB35B8), 2);
            M2C_FIELD(arg2, u8 *, 3) = (u8) (M2C_FIELD(arg2, u8 *, 3) | 1);
        }
        if (func_00C153C0(arg1, arg0, 0xFF, ((void *)D_00CB35C0), 2) != 0) {
            func_00C15110(arg1, arg0, 0xFF, ((void *)D_00CB35C0), 2);
            M2C_FIELD(arg2, u8 *, 3) = (u8) (M2C_FIELD(arg2, u8 *, 3) | 2);
            M2C_FIELD(arg2, u8 *, 3) = (u8) (M2C_FIELD(arg2, u8 *, 3) | 4);
        }
        if (func_00C153C0(arg1, arg0, 0xFF, ((void *)D_00CB35C8), 2) != 0) {
            func_00C15110(arg1, arg0, 0xFF, ((void *)D_00CB35C8), 2);
            M2C_FIELD(arg2, u8 *, 3) = (u8) (M2C_FIELD(arg2, u8 *, 3) | 4);
        }
        if (func_00C153C0(arg1, 0xFF, arg0, ((void *)D_00CB35D8), 2) != 0) {
            func_00C15110(arg1, 0xFF, arg0, ((void *)D_00CB35D8), 2);
            M2C_FIELD(arg2, u8 *, 3) = (u8) (M2C_FIELD(arg2, u8 *, 3) | 0x10);
        }
        if (func_00C153C0(arg1, 0xFF, arg0, ((void *)D_00CB35E0), 2) != 0) {
            func_00C15110(arg1, 0xFF, arg0, ((void *)D_00CB35E0), 2);
            M2C_FIELD(arg2, u8 *, 3) = (u8) (M2C_FIELD(arg2, u8 *, 3) | 0x20);
        }
    }
    return var_s0;
}
