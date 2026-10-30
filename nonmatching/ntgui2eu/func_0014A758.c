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
extern char D_011DFF50[];
extern char D_011DFF60[];
extern char D_011DFF70[];
extern char D_011DFF88[];

s32 func_0014A758(void *arg0) {
    s32 *var_s0;
    s32 *var_s1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v1 != 2) {
        if (temp_v1 < 3) {
            if (temp_v1 != 1) {
                return 0;
            }
            if (M2C_FIELD(((void *)D_011DFF60), s32 *, 0) != 0) {
                temp_v0 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0 == M2C_FIELD(((void *)D_011DFF60), s32 *, 0)) {
                    func_0016AF10(temp_v0);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DFF60), s32 *, -0xA0));
                func_0011E4E8(M2C_FIELD(((void *)D_011DFF60), s32 *, -0xA0));
                func_001202D0(0, M2C_FIELD(((void *)D_011DFF60), s32 *, -0xA0));
                func_001202D0(1, M2C_FIELD(((void *)D_011DFF60), s32 *, -0xA0));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFF60), s32 *, -0xA0)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DFF60), s32 *, -0xA0));
                M2C_FIELD(((void *)D_011DFF60), s32 *, -0xA0) = 0;
            }
            goto block_41;
        }
        switch (temp_v1) {                          /* irregular */
        case 3:
            var_s1 = ((void *)D_011DFF88);
            var_s0 = ((void *)D_011DFF70);
            do {
                if (*var_s1 != 0) {
                    temp_v0_2 = func_0016ADC0(*(s32 *)0x5B592C);
                    if (temp_v0_2 == *var_s1) {
                        func_0016AF10(temp_v0_2);
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
                    temp_v0_3 = func_0016ADC0(*(s32 *)0x5B592C);
                    if (temp_v0_3 == *var_s0) {
                        func_0016AF10(temp_v0_3);
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
            } while ((s32) var_s0 < (s32) (((void *)D_011DFF70) + 0x14));
            goto block_41;
        case 5:
            if (M2C_FIELD(((void *)D_011DFF50), s32 *, 0) != 0) {
                temp_v0_4 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0_4 == M2C_FIELD(((void *)D_011DFF50), s32 *, 0)) {
                    func_0016AF10(temp_v0_4);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DFF50), s32 *, -0xB0));
                func_0011E4E8(M2C_FIELD(((void *)D_011DFF50), s32 *, -0xB0));
                func_001202D0(0, M2C_FIELD(((void *)D_011DFF50), s32 *, -0xB0));
                func_001202D0(1, M2C_FIELD(((void *)D_011DFF50), s32 *, -0xB0));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFF50), s32 *, -0xB0)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DFF50), s32 *, -0xB0));
                M2C_FIELD(((void *)D_011DFF50), s32 *, -0xB0) = 0;
            }
            return 1;
        default:
            return 0;
        }
    } else {
        if (M2C_FIELD(((void *)D_011DFF60), s32 *, 4) != 0) {
            temp_v0_5 = func_0016ADC0((*(s32 *)D_005B592C));
            if (temp_v0_5 == M2C_FIELD(((void *)D_011DFF60), s32 *, 4)) {
                func_0016AF10(temp_v0_5);
            }
            func_00163EE0(M2C_FIELD(((void *)D_011DFF60), s32 *, 4));
            func_0011E4E8(M2C_FIELD(((void *)D_011DFF60), s32 *, 4));
            func_001202D0(0, M2C_FIELD(((void *)D_011DFF60), s32 *, 4));
            func_001202D0(1, M2C_FIELD(((void *)D_011DFF60), s32 *, 4));
            if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFF60), s32 *, 4)) {
                (*(s32 *)D_005B3744) = 0;
            }
            func_001514F8(M2C_FIELD(((void *)D_011DFF60), s32 *, 4));
            M2C_FIELD(((void *)D_011DFF60), s32 *, 4) = 0;
        }
block_41:
        return 0;
    }
}
