/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
s32 func_0095C4D0(u8);                              /* extern */
M2C_UNK func_00973720(s32, M2C_UNK);                /* extern */
M2C_UNK func_00973760(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, s32, s32);               /* extern */
extern s32 D_003E77B4;

void func_009AB890(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg_sp0, s32 arg_sp8, s32 arg_sp10, s32 arg_sp18) {
    s32 var_a0_5;
    u16 var_a0_3;
    u16 var_a0_4;
    u8 var_a0;
    u8 var_a0_2;
    void *temp_v0;

    if (arg0 == 1) {
        if (arg2 != 0) {
            var_a0 = M2C_FIELD((((arg1 & 0xFF) * 0xC) + D_003E77B4), u8 *, 0x4BAE);
            if ((s32) var_a0 >= 0x3E8) {
                var_a0 = 0x3E7;
            }
            func_009737E0(arg2, arg7, func_0095C4D0(var_a0));
            func_00973760(arg2, 2);
        }
        if (arg3 != 0) {
            var_a0_2 = M2C_FIELD((((arg1 & 0xFF) * 0xC) + D_003E77B4), u8 *, 0x4BAF);
            if ((s32) var_a0_2 >= 0x3E8) {
                var_a0_2 = 0x3E7;
            }
            func_009737E0(arg3, arg_sp0, func_0095C4D0(var_a0_2));
            func_00973760(arg3, 2);
        }
        if (arg4 != 0) {
            var_a0_3 = M2C_FIELD((((arg1 & 0xFF) * 0xC) + D_003E77B4), u16 *, 0x4BA6);
            if ((s32) var_a0_3 >= 0x3E8) {
                var_a0_3 = 0x3E7;
            }
            func_009737E0(arg4, arg_sp8, func_0095C4D0((u8) var_a0_3));
            func_00973760(arg4, 2);
        }
        if (arg5 != 0) {
            var_a0_4 = M2C_FIELD((((arg1 & 0xFF) * 0xC) + D_003E77B4), u16 *, 0x4BA8);
            if ((s32) var_a0_4 >= 0x3E8) {
                var_a0_4 = 0x3E7;
            }
            func_009737E0(arg5, arg_sp10, func_0095C4D0((u8) var_a0_4));
            func_00973760(arg5, 2);
        }
        if (arg6 != 0) {
            temp_v0 = ((arg1 & 0xFF) * 0xC) + D_003E77B4;
            var_a0_5 = M2C_FIELD(temp_v0, u16 *, 0x4BA6) - M2C_FIELD(temp_v0, u16 *, 0x4BA8);
            if (var_a0_5 >= 0x3E8) {
                var_a0_5 = 0x3E7;
            }
            if (var_a0_5 < -0x3E7) {
                var_a0_5 = -0x3E7;
            }
            func_009737E0(arg6, arg_sp18, func_0095C4D0((u8) var_a0_5));
            func_00973720(arg6, 1);
        }
    } else {
        if (arg2 != 0) {
            func_009737E0(arg2, arg7, func_001F08B0(0x1A005E));
            func_00973760(arg2, 1);
        }
        if (arg3 != 0) {
            func_009737E0(arg3, arg_sp0, func_001F08B0(0x1A005E));
            func_00973760(arg3, 1);
        }
        if (arg4 != 0) {
            func_009737E0(arg4, arg_sp8, func_001F08B0(0x1A005E));
            func_00973760(arg4, 1);
        }
        if (arg5 != 0) {
            func_009737E0(arg5, arg_sp10, func_001F08B0(0x1A005E));
            func_00973760(arg5, 1);
        }
        if (arg6 != 0) {
            func_009737E0(arg6, arg_sp18, func_001F08B0(0x1A005E));
            func_00973760(arg6, 1);
        }
    }
}
