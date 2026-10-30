/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0011E4E8(s32);                         /* extern */
M2C_UNK func_001202D0(M2C_UNK, s32);                /* extern */
M2C_UNK func_001514F8(s32);                         /* extern */
M2C_UNK func_00163EE0(s32);                         /* extern */
s32 func_0016ADC0(s32);                             /* extern */
M2C_UNK func_0016AF10(s32);                         /* extern */
extern char D_005B3744[];
extern char D_005B592C[];
extern char D_011E6B70[];
extern char D_011E6B80[];

void func_0015DBD8(void) {
    s32 *var_s0;
    s32 *var_s1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    var_s1 = ((void *)D_011E6B70);
    var_s0 = ((void *)D_011E6B80);
    do {
        if (*var_s1 != 0) {
            temp_v0 = func_0016ADC0(*(s32 *)0x5B592C);
            if (temp_v0 == *var_s1) {
                func_0016AF10(temp_v0);
            }
            func_00163EE0(*var_s1);
            func_0011E4E8(*var_s1);
            func_001202D0(0, *var_s1);
            func_001202D0(1, *var_s1);
            temp_a0 = *var_s1;
            if ((*(s32 *)D_005B3744) == temp_a0) {
                (*(s32 *)D_005B3744) = 0;
            }
            func_001514F8(temp_a0);
            *var_s1 = 0;
        }
        if (*var_s0 != 0) {
            temp_v0_2 = func_0016ADC0(*(s32 *)0x5B592C);
            if (temp_v0_2 == *var_s0) {
                func_0016AF10(temp_v0_2);
            }
            func_00163EE0(*var_s0);
            func_0011E4E8(*var_s0);
            func_001202D0(0, *var_s0);
            func_001202D0(1, *var_s0);
            temp_a0_2 = *var_s0;
            if ((*(s32 *)D_005B3744) == temp_a0_2) {
                (*(s32 *)D_005B3744) = 0;
            }
            func_001514F8(temp_a0_2);
            *var_s0 = 0;
        }
        var_s0 += 4;
        var_s1 += 4;
    } while ((s32) var_s0 < (s32) (((void *)D_011E6B80) + 0x10));
    if (*(s32 *)0x011E6B90 != 0) {
        temp_v0_3 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_3 == *(s32 *)0x011E6B90) {
            func_0016AF10(temp_v0_3);
        }
        func_00163EE0(*(s32 *)0x011E6B90);
        func_0011E4E8(*(s32 *)0x011E6B90);
        func_001202D0(0, *(s32 *)0x011E6B90);
        func_001202D0(1, *(s32 *)0x011E6B90);
        temp_a0_3 = *(s32 *)0x011E6B90;
        if ((*(s32 *)D_005B3744) == temp_a0_3) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_3);
        *(s32 *)0x011E6B90 = 0;
    }
    if (*(s32 *)0x011E6B94 != 0) {
        temp_v0_4 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_4 == *(s32 *)0x011E6B94) {
            func_0016AF10(temp_v0_4);
        }
        func_00163EE0(*(s32 *)0x011E6B94);
        func_0011E4E8(*(s32 *)0x011E6B94);
        func_001202D0(0, *(s32 *)0x011E6B94);
        func_001202D0(1, *(s32 *)0x011E6B94);
        temp_a0_4 = *(s32 *)0x011E6B94;
        if ((*(s32 *)D_005B3744) == temp_a0_4) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_4);
        *(s32 *)0x011E6B94 = 0;
    }
    if (*(s32 *)0x011E6B68 != 0) {
        temp_v0_5 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_5 == *(s32 *)0x011E6B68) {
            func_0016AF10(temp_v0_5);
        }
        func_00163EE0(*(s32 *)0x011E6B68);
        func_0011E4E8(*(s32 *)0x011E6B68);
        func_001202D0(0, *(s32 *)0x011E6B68);
        func_001202D0(1, *(s32 *)0x011E6B68);
        temp_a0_5 = *(s32 *)0x011E6B68;
        if ((*(s32 *)D_005B3744) == temp_a0_5) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_5);
        *(s32 *)0x011E6B68 = 0;
    }
    if (*(s32 *)0x011E6B64 != 0) {
        temp_v0_6 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_6 == *(s32 *)0x011E6B64) {
            func_0016AF10(temp_v0_6);
        }
        func_00163EE0(*(s32 *)0x011E6B64);
        func_0011E4E8(*(s32 *)0x011E6B64);
        func_001202D0(0, *(s32 *)0x011E6B64);
        func_001202D0(1, *(s32 *)0x011E6B64);
        temp_a0_6 = *(s32 *)0x011E6B64;
        if ((*(s32 *)D_005B3744) == temp_a0_6) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_6);
        *(s32 *)0x011E6B64 = 0;
    }
}
