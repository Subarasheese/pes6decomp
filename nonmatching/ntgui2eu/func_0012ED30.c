/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0011E4E8(s32);                         /* extern */
M2C_UNK func_00120298(M2C_UNK);                     /* extern */
M2C_UNK func_001202D0(M2C_UNK, s32);                /* extern */
M2C_UNK func_001514F8(s32);                         /* extern */
M2C_UNK func_0015CF18(void *, M2C_UNK);             /* extern */
M2C_UNK func_00163EE0(s32);                         /* extern */
s32 func_0016ADC0(s32);                             /* extern */
M2C_UNK func_0016AF10(s32);                         /* extern */
extern char D_005B3744[];
extern char D_005B592C[];
extern char D_011D4D78[];
extern char D_011D4D8C[];
extern char D_011D4D90[];
extern char D_011D4D94[];

void func_0012ED30(void) {
    s32 *var_v0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    void *temp_s0;

    func_00120298(1);
    if (M2C_FIELD(((void *)D_011D4D78), s32 *, 0xC) != 0) {
        var_v0 = M2C_FIELD(((void *)D_011D4D78), s32 **, 0);
        do {
            temp_s0_2 = *var_v0;
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
            temp_s0 = ((void *)D_011D4D78) + 0x4D78;
            func_0015CF18(temp_s0, 0);
            var_v0 = M2C_FIELD(((void *)D_011D4D78), s32 **, 0x4D78);
        } while (M2C_FIELD(temp_s0, s32 *, 0xC) != 0);
    }
    if (*(s32 *)0x011D4D9C != 0) {
        temp_v0 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0 == *(s32 *)0x011D4D9C) {
            func_0016AF10(temp_v0);
        }
        func_00163EE0(*(s32 *)0x011D4D9C);
        func_0011E4E8(*(s32 *)0x011D4D9C);
        func_001202D0(0, *(s32 *)0x011D4D9C);
        func_001202D0(1, *(s32 *)0x011D4D9C);
        temp_a0 = *(s32 *)0x011D4D9C;
        if ((*(s32 *)D_005B3744) == temp_a0) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0);
        *(s32 *)0x011D4D9C = 0;
    }
    if (*(s32 *)0x011D4DA0 != 0) {
        temp_v0_2 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_2 == *(s32 *)0x011D4DA0) {
            func_0016AF10(temp_v0_2);
        }
        func_00163EE0(*(s32 *)0x011D4DA0);
        func_0011E4E8(*(s32 *)0x011D4DA0);
        func_001202D0(0, *(s32 *)0x011D4DA0);
        func_001202D0(1, *(s32 *)0x011D4DA0);
        temp_a0_2 = *(s32 *)0x011D4DA0;
        if ((*(s32 *)D_005B3744) == temp_a0_2) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_2);
        *(s32 *)0x011D4DA0 = 0;
    }
    if (*(s32 *)0x011D4DA4 != 0) {
        temp_v0_3 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_3 == *(s32 *)0x011D4DA4) {
            func_0016AF10(temp_v0_3);
        }
        func_00163EE0(*(s32 *)0x011D4DA4);
        func_0011E4E8(*(s32 *)0x011D4DA4);
        func_001202D0(0, *(s32 *)0x011D4DA4);
        func_001202D0(1, *(s32 *)0x011D4DA4);
        temp_a0_3 = *(s32 *)0x011D4DA4;
        if ((*(s32 *)D_005B3744) == temp_a0_3) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_3);
        *(s32 *)0x011D4DA4 = 0;
    }
    if (*(s32 *)0x011D4DA8 != 0) {
        temp_v0_4 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_4 == *(s32 *)0x011D4DA8) {
            func_0016AF10(temp_v0_4);
        }
        func_00163EE0(*(s32 *)0x011D4DA8);
        func_0011E4E8(*(s32 *)0x011D4DA8);
        func_001202D0(0, *(s32 *)0x011D4DA8);
        func_001202D0(1, *(s32 *)0x011D4DA8);
        temp_a0_4 = *(s32 *)0x011D4DA8;
        if ((*(s32 *)D_005B3744) == temp_a0_4) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_4);
        *(s32 *)0x011D4DA8 = 0;
    }
    if (*(s32 *)0x011D4DAC != 0) {
        temp_v0_5 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_5 == *(s32 *)0x011D4DAC) {
            func_0016AF10(temp_v0_5);
        }
        func_00163EE0(*(s32 *)0x011D4DAC);
        func_0011E4E8(*(s32 *)0x011D4DAC);
        func_001202D0(0, *(s32 *)0x011D4DAC);
        func_001202D0(1, *(s32 *)0x011D4DAC);
        temp_a0_5 = *(s32 *)0x011D4DAC;
        if ((*(s32 *)D_005B3744) == temp_a0_5) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_5);
        *(s32 *)0x011D4DAC = 0;
    }
    if (*(s32 *)0x011D4DB0 != 0) {
        temp_v0_6 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_6 == *(s32 *)0x011D4DB0) {
            func_0016AF10(temp_v0_6);
        }
        func_00163EE0(*(s32 *)0x011D4DB0);
        func_0011E4E8(*(s32 *)0x011D4DB0);
        func_001202D0(0, *(s32 *)0x011D4DB0);
        func_001202D0(1, *(s32 *)0x011D4DB0);
        temp_a0_6 = *(s32 *)0x011D4DB0;
        if ((*(s32 *)D_005B3744) == temp_a0_6) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_6);
        *(s32 *)0x011D4DB0 = 0;
    }
    if (*(s32 *)0x011D4D98 != 0) {
        temp_v0_7 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_7 == *(s32 *)0x011D4D98) {
            func_0016AF10(temp_v0_7);
        }
        func_00163EE0(*(s32 *)0x011D4D98);
        func_0011E4E8(*(s32 *)0x011D4D98);
        func_001202D0(0, *(s32 *)0x011D4D98);
        func_001202D0(1, *(s32 *)0x011D4D98);
        temp_a0_7 = *(s32 *)0x011D4D98;
        if ((*(s32 *)D_005B3744) == temp_a0_7) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8(temp_a0_7);
        *(s32 *)0x011D4D98 = 0;
    }
    if ((*(s32 *)D_011D4D94) != 0) {
        temp_v0_8 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_8 == (*(s32 *)D_011D4D94)) {
            func_0016AF10(temp_v0_8);
        }
        func_00163EE0(*(s32 *)0x011D4D94);
        func_0011E4E8((*(s32 *)D_011D4D94));
        func_001202D0(0, (*(s32 *)D_011D4D94));
        func_001202D0(1, (*(s32 *)D_011D4D94));
        if ((*(s32 *)D_005B3744) == (*(s32 *)D_011D4D94)) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8((*(s32 *)D_011D4D94));
        (*(s32 *)D_011D4D94) = 0;
    }
    if ((*(s32 *)D_011D4D90) != 0) {
        temp_v0_9 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_9 == (*(s32 *)D_011D4D90)) {
            func_0016AF10(temp_v0_9);
        }
        func_00163EE0(*(s32 *)0x011D4D90);
        func_0011E4E8((*(s32 *)D_011D4D90));
        func_001202D0(0, (*(s32 *)D_011D4D90));
        func_001202D0(1, (*(s32 *)D_011D4D90));
        if ((*(s32 *)D_005B3744) == (*(s32 *)D_011D4D90)) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8((*(s32 *)D_011D4D90));
        (*(s32 *)D_011D4D90) = 0;
    }
    if ((*(s32 *)D_011D4D8C) != 0) {
        temp_v0_10 = func_0016ADC0((*(s32 *)D_005B592C));
        if (temp_v0_10 == (*(s32 *)D_011D4D8C)) {
            func_0016AF10(temp_v0_10);
        }
        func_00163EE0(*(s32 *)0x011D4D8C);
        func_0011E4E8((*(s32 *)D_011D4D8C));
        func_001202D0(0, (*(s32 *)D_011D4D8C));
        func_001202D0(1, (*(s32 *)D_011D4D8C));
        if ((*(s32 *)D_005B3744) == (*(s32 *)D_011D4D8C)) {
            (*(s32 *)D_005B3744) = 0;
        }
        func_001514F8((*(s32 *)D_011D4D8C));
        (*(s32 *)D_011D4D8C) = 0;
    }
}
