/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00363800(s32);
extern char D_0061EC60[];
extern char D_0061EC61[];
extern char D_0061EC62[];
extern char D_0061ECF4[];
extern char D_0061ECF5[];
extern char D_0061ED51[];

s32 func_00362EA0(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_a0;
    s32 var_a0_2;

    temp_s0 = (*(u8 *)D_0061ED51) & 0x22 & 0xFF;
    temp_s2 = (*(u8 *)D_0061ED51) & 0x44 & 0xFF;
    temp_s1 = (*(u8 *)D_0061ED51) & 0x11 & 0xFF;
    if (temp_s2 != 0) {
        if ((*(u8 *)D_0061EC62) == 0) {
            func_00363800(4);
        }
        temp_a0 = temp_s2 & 0xFF;
        (*(u8 *)D_0061EC62) = 0x80;
        if (temp_a0 & 0xF0) {
            (*(s8 *)D_0061ECF5) = 0x80;
        } else {
            (*(s8 *)D_0061ECF5) = 0;
        }
        if (temp_a0 & 0xF) {
            (*(s8 *)D_0061ECF4) = 0x80;
        } else {
            (*(s8 *)D_0061ECF4) = 0;
        }
    } else {
        (*(u8 *)D_0061EC62) = 0;
    }
    if (temp_s1 != 0) {
        if ((*(u8 *)D_0061EC61) == 0) {
            if ((*(u8 *)D_0061EC62) == 0) {
                var_a0 = 5;
            } else {
                var_a0 = 4;
            }
            func_00363800(var_a0);
        }
        (*(u8 *)D_0061EC61) = 0x80;
    } else {
        (*(u8 *)D_0061EC61) = 0;
    }
    if (temp_s0 != 0) {
        if ((*(u8 *)D_0061EC60) == 0) {
            if ((*(u8 *)D_0061EC62) == 0) {
                var_a0_2 = 5;
            } else {
                var_a0_2 = 4;
            }
            func_00363800(var_a0_2);
        }
        (*(u8 *)D_0061EC60) = 0x80;
    } else {
        (*(u8 *)D_0061EC60) = 0;
    }
    return 0;
}
