/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0011E4E8(s32);                         /* extern */
M2C_UNK func_001202D0(M2C_UNK, s32);                /* extern */
M2C_UNK func_001236B8(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_001514F8(s32);                         /* extern */
M2C_UNK func_0015C760(void *, M2C_UNK);             /* extern */
M2C_UNK func_00163EE0(s32);                         /* extern */
M2C_UNK func_00165AC0(s32, s32, s32 *);             /* extern */
s32 func_0016ADC0(s32);                             /* extern */
M2C_UNK func_0016AF10(s32);                         /* extern */
extern char D_005B3744[];
extern char D_005B592C[];
extern char D_005B59B4[];
extern char D_005B59B8[];
extern char D_005B59C8[];
extern char D_011D4C90[];
extern char D_011D4CA0[];
extern char D_011D4D38[];
extern char D_011D4D40[];
extern char D_011D4D44[];
extern char D_011D4D48[];
extern char D_011D4D4C[];
extern char D_011D4D50[];

void func_0012D630(void) {
    M2C_UNK *var_v0_2;
    s32 *var_v0;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_v1;

    if (M2C_FIELD(((void *)D_011D4CA0), s32 *, 0xC) != 0) {
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
        var_v0_2 = (M2C_UNK *)0x5B59C8;
    } else {
        var_v0_2 = ((void *)D_005B59C8);
    }
    temp_a1 = *(s32 *)0x5B59BC;
    *(s32 *)0x011D4D3C = M2C_FIELD(var_v0_2, s32 *, 0xC);
    if ((temp_a1 == -1) || (temp_v1 = *(s32 *)0x011D4CF8, ((temp_a1 < temp_v1) != 0))) {
        *(s32 *)0x011D4D34 = 0;
    } else {
        *(s32 *)0x011D4D34 = (temp_a1 - temp_v1) + 1;
    }
    temp_a1_2 = *(s32 *)0x011D4D3C;
    (*(s32 *)D_005B59B8) = -1;
    temp_s0_3 = *(s32 *)0x011D4CF8 < temp_a1_2;
    (*(s32 *)D_011D4D38) = 0;
    (*(s32 *)D_011D4C90) = 1;
    (*(s32 *)D_005B59B4) = -1;
    (*(s32 *)D_011D4D40) = 1;
    (*(s32 *)D_011D4D48) = 0;
    (*(s32 *)D_011D4D44) = 0;
    (*(s32 *)D_011D4D50) = 0;
    (*(s32 *)D_011D4D4C) = 0;
    if (temp_s0_3 != 0) {
        temp_a0 = *(s32 *)0x011D4CDC;
        if (temp_a0 != 0) {
            func_00165AC0(temp_a0, temp_a1_2, ((void *)D_011D4D50));
            temp_a0_2 = *(s32 *)0x011D4CDC;
            if (temp_a0_2 != 0) {
                func_001236B8(temp_a0_2, temp_s0_3, 0x40);
            }
        }
    } else {
        temp_a0_3 = *(s32 *)0x011D4CDC;
        if (temp_a0_3 != 0) {
            func_001236B8(temp_a0_3, 0, 0);
        }
    }
}
