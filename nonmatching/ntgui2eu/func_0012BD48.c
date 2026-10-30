/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0011E4E8(s32);                         /* extern */
M2C_UNK func_001202D0(M2C_UNK, s32);                /* extern */
M2C_UNK func_001514F8(s32);                         /* extern */
M2C_UNK func_0015C760(void *, M2C_UNK);             /* extern */
M2C_UNK func_00163EE0(s32);                         /* extern */
s32 func_0016ADC0(s32);                             /* extern */
M2C_UNK func_0016AF10(s32);                         /* extern */
extern char D_005B3744[];
extern char D_005B592C[];
extern char D_011D4CA0[];
extern char D_011D4CCC[];
extern char D_011D4CD0[];
extern char D_011D4CD4[];
extern char D_011D4CE8[];

void func_0012BD48(void) {
    s32 *var_s3;
    s32 *var_v0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 var_v0_2;

    if (M2C_FIELD(((void *)D_011D4CA0), s32 *, 0xC) != 0) {
        var_s3 = (s32 *)0x011D0000;
        var_v0 = M2C_FIELD(((void *)D_011D4CA0), s32 **, 0);
        do {
            temp_s0 = *var_v0;
            if (temp_s0 != 0) {
                if (func_0016ADC0((*(s32 *)D_005B592C)) == temp_s0) {
                    func_0016AF10(temp_s0);
                }
                func_00163EE0(temp_s0);
                func_0011E4E8(temp_s0);
                func_001202D0(0, temp_s0);
                func_001202D0(1, temp_s0);
                if ((*(s32 *)D_005B3744) == temp_s0) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(temp_s0);
            }
            func_0015C760(((void *)D_011D4CA0) + 0x4CA0, 0);
            temp_s0_2 = **(s32 **)0x011D4CB8;
            if (temp_s0_2 != 0) {
                if (func_0016ADC0((*(s32 *)D_005B592C)) == temp_s0_2) {
                    func_0016AF10(temp_s0_2);
                }
                func_00163EE0(temp_s0_2);
                func_0011E4E8(temp_s0_2);
                func_001202D0(0, temp_s0_2);
                func_001202D0(1, temp_s0_2);
                if ((*(s32 *)D_005B3744) == temp_s0_2) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(temp_s0_2);
            }
            func_0015C760((s32 **)0x011D0000 + 0x4CB8, 0);
            var_v0 = M2C_FIELD(((void *)D_011D4CA0), s32 **, 0x4CA0);
        } while (M2C_FIELD((((void *)D_011D4CA0) + 0x4CA0), s32 *, 0xC) != 0);
        var_v0_2 = *(s32 *)0x011D4CE8;
    } else {
        var_s3 = ((void *)D_011D4CE8);
        var_v0_2 = (*(s32 *)D_011D4CE8);
    }
    if (var_v0_2 != 0) {
        temp_v0 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0 == M2C_FIELD(var_s3, s32 *, 0x4CE8)) {
            func_0016AF10(temp_v0);
        }
        func_00163EE0(M2C_FIELD(var_s3, s32 *, 0x4CE8));
        func_0011E4E8(M2C_FIELD(var_s3, s32 *, 0x4CE8));
        func_001202D0(0, M2C_FIELD(var_s3, s32 *, 0x4CE8));
        func_001202D0(1, M2C_FIELD(var_s3, s32 *, 0x4CE8));
        temp_a0 = M2C_FIELD(var_s3, s32 *, 0x4CE8);
        if ((*(s32 *)D_005B3744) == temp_a0) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0);
        M2C_FIELD(var_s3, s32 *, 0x4CE8) = 0;
    }
    if (*(s32 *)0x011D4CEC != 0) {
        temp_v0_2 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_2 == *(s32 *)0x011D4CEC) {
            func_0016AF10(temp_v0_2);
        }
        func_00163EE0(*(s32 *)0x011D4CEC);
        func_0011E4E8(*(s32 *)0x011D4CEC);
        func_001202D0(0, *(s32 *)0x011D4CEC);
        func_001202D0(1, *(s32 *)0x011D4CEC);
        temp_a0_2 = *(s32 *)0x011D4CEC;
        if ((*(s32 *)D_005B3744) == temp_a0_2) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_2);
        *(s32 *)0x011D4CEC = 0;
    }
    if (*(s32 *)0x011D4CE4 != 0) {
        temp_v0_3 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_3 == *(s32 *)0x011D4CE4) {
            func_0016AF10(temp_v0_3);
        }
        func_00163EE0(*(s32 *)0x011D4CE4);
        func_0011E4E8(*(s32 *)0x011D4CE4);
        func_001202D0(0, *(s32 *)0x011D4CE4);
        func_001202D0(1, *(s32 *)0x011D4CE4);
        temp_a0_3 = *(s32 *)0x011D4CE4;
        if ((*(s32 *)D_005B3744) == temp_a0_3) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_3);
        *(s32 *)0x011D4CE4 = 0;
    }
    if (*(s32 *)0x011D4CE0 != 0) {
        temp_v0_4 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_4 == *(s32 *)0x011D4CE0) {
            func_0016AF10(temp_v0_4);
        }
        func_00163EE0(*(s32 *)0x011D4CE0);
        func_0011E4E8(*(s32 *)0x011D4CE0);
        func_001202D0(0, *(s32 *)0x011D4CE0);
        func_001202D0(1, *(s32 *)0x011D4CE0);
        temp_a0_4 = *(s32 *)0x011D4CE0;
        if ((*(s32 *)D_005B3744) == temp_a0_4) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_4);
        *(s32 *)0x011D4CE0 = 0;
    }
    if (*(s32 *)0x011D4CDC != 0) {
        temp_v0_5 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_5 == *(s32 *)0x011D4CDC) {
            func_0016AF10(temp_v0_5);
        }
        func_00163EE0(*(s32 *)0x011D4CDC);
        func_0011E4E8(*(s32 *)0x011D4CDC);
        func_001202D0(0, *(s32 *)0x011D4CDC);
        func_001202D0(1, *(s32 *)0x011D4CDC);
        temp_a0_5 = *(s32 *)0x011D4CDC;
        if ((*(s32 *)D_005B3744) == temp_a0_5) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_5);
        *(s32 *)0x011D4CDC = 0;
    }
    if (*(s32 *)0x011D4CD8 != 0) {
        temp_v0_6 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_6 == *(s32 *)0x011D4CD8) {
            func_0016AF10(temp_v0_6);
        }
        func_00163EE0(*(s32 *)0x011D4CD8);
        func_0011E4E8(*(s32 *)0x011D4CD8);
        func_001202D0(0, *(s32 *)0x011D4CD8);
        func_001202D0(1, *(s32 *)0x011D4CD8);
        temp_a0_6 = *(s32 *)0x011D4CD8;
        if ((*(s32 *)D_005B3744) == temp_a0_6) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_6);
        *(s32 *)0x011D4CD8 = 0;
    }
    if ((*(s32 *)D_011D4CD4) != 0) {
        temp_v0_7 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_7 == (*(s32 *)D_011D4CD4)) {
            func_0016AF10(temp_v0_7);
        }
        func_00163EE0(*(s32 *)0x011D4CD4);
        func_0011E4E8((*(s32 *)D_011D4CD4));
        func_001202D0(0, (*(s32 *)D_011D4CD4));
        func_001202D0(1, (*(s32 *)D_011D4CD4));
        if ((*(s32 *)D_005B3744) == (*(s32 *)D_011D4CD4)) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8((*(s32 *)D_011D4CD4));
        (*(s32 *)D_011D4CD4) = 0;
    }
    if ((*(s32 *)D_011D4CD0) != 0) {
        temp_v0_8 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_8 == (*(s32 *)D_011D4CD0)) {
            func_0016AF10(temp_v0_8);
        }
        func_00163EE0(*(s32 *)0x011D4CD0);
        func_0011E4E8((*(s32 *)D_011D4CD0));
        func_001202D0(0, (*(s32 *)D_011D4CD0));
        func_001202D0(1, (*(s32 *)D_011D4CD0));
        if ((*(s32 *)D_005B3744) == (*(s32 *)D_011D4CD0)) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8((*(s32 *)D_011D4CD0));
        (*(s32 *)D_011D4CD0) = 0;
    }
    if ((*(s32 *)D_011D4CCC) != 0) {
        temp_v0_9 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_9 == (*(s32 *)D_011D4CCC)) {
            func_0016AF10(temp_v0_9);
        }
        func_00163EE0(*(s32 *)0x011D4CCC);
        func_0011E4E8((*(s32 *)D_011D4CCC));
        func_001202D0(0, (*(s32 *)D_011D4CCC));
        func_001202D0(1, (*(s32 *)D_011D4CCC));
        if ((*(s32 *)D_005B3744) == (*(s32 *)D_011D4CCC)) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8((*(s32 *)D_011D4CCC));
        (*(s32 *)D_011D4CCC) = 0;
    }
}
