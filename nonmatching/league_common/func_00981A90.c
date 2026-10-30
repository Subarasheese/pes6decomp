/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00225820();                                /* extern */
s32 func_00226710();                                /* extern */
s32 func_00230410();                                /* extern */
s32 func_00230930();                                /* extern */
s32 func_00230AA0();                                /* extern */
s32 func_00230EF0();                                /* extern */
s32 func_00231130();                                /* extern */
u16 func_002371A0(u16);                             /* extern */
s32 func_00292440(M2C_UNK, M2C_UNK);                /* extern */
s32 func_00292660(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_00292CD0(M2C_UNK);                     /* extern */
s8 func_00295590();                                 /* extern */
M2C_UNK func_003520A0(s32, M2C_UNK, M2C_UNK);       /* extern */
extern void *D_003E77B0;
extern char D_00591BB0[];
extern char D_00591BB7[];

void func_00981A90(void) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_s6;
    s32 var_s4;
    u16 temp_s3;
    u8 temp_s0_2;
    u8 temp_s7;

    temp_s3 = (*(u16 *)D_00591BB0);
    var_s4 = 3;
    func_00292CD0(0);
    func_00292CD0(1);
    temp_s2 = temp_s3 & 0xFFFF;
    if ((u32) (temp_s2 - 0x126) < 2U) {
        (*(u16 *)D_00591BB0) = func_002371A0(temp_s3);
    }
    if (func_00231130() == 1) {
        var_s4 = 0;
    }
    if (func_00230EF0() == 1) {
        var_s4 = 0;
    }
    if (func_00230AA0() == 1) {
        var_s4 = 0;
    }
    if (func_00230930() == 1) {
        var_s4 = 0;
    }
    if ((func_00230410() == 1) && (((func_00226710() & 0xFF) == 0x1C) || ((func_00226710() & 0xFF) == 0x20))) {
        temp_s1 = func_00292660(0, 0) & 0xFF;
        temp_s0 = func_00292440(0, 0);
        temp_s5 = func_00292660(1, 0) & 0xFF;
        temp_s6 = func_00292440(1, 0);
        temp_s7 = M2C_FIELD(D_003E77B0, u8 *, 0x2C);
        if ((temp_s7 == (func_00225820() & 0xFF)) && ((temp_s1 & 0xFF) == 2) && (temp_s0 == 1)) {
            var_s4 = 0;
        }
        temp_s0_2 = M2C_FIELD(D_003E77B0, u8 *, 0x2D);
        if ((temp_s0_2 == (func_00225820() & 0xFF)) && ((temp_s5 & 0xFF) == 2) && (temp_s6 == 1)) {
            var_s4 = 0;
        }
    }
    if ((var_s4 & 0xFF) == 3) {
        func_003520A0(var_s4, 0, 0);
    } else {
        func_003520A0(var_s4, 0xFF, 0);
    }
    if ((u32) (temp_s2 - 0x126) < 2U) {
        (*(u16 *)D_00591BB0) = temp_s3;
    }
    (*(s8 *)D_00591BB7) = func_00295590();
}
