/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001514F8(s32);
extern s32 func_0016AF10(void);
extern s32 func_0016ADC0(void);
M2C_UNK func_0011E4E8(s32);                         /* extern */
M2C_UNK func_001202D0(M2C_UNK, s32);                /* extern */
M2C_UNK func_00163EE0(s32);                         /* extern */
extern char D_005B3744[];
extern char D_011E6BC0[];
extern char D_011E6BC8[];
extern char D_011E6BD0[];
extern char D_011E6BD8[];

s32 func_0015FCC8(void *arg0) {
    s32 *var_s0;
    s32 *var_s0_2;
    s32 *var_s1;
    s32 *var_s1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v1 != 2) {
        if (temp_v1 < 3) {
            if (temp_v1 != 1) {
                return 0;
            }
            var_s1 = ((void *)D_011E6BD0);
            var_s0 = ((void *)D_011E6BD8);
            do {
                if (*var_s1 != 0) {
                    if (func_0016ADC0() == *var_s1) {
                        func_0016AF10();
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
                    if (func_0016ADC0() == *var_s0) {
                        func_0016AF10();
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
            } while ((s32) var_s0 < (s32) (((void *)D_011E6BD8) + 8));
            return 0;
        }
        if (temp_v1 != 5) {
            return 0;
        }
        return 1;
    }
    var_s1_2 = ((void *)D_011E6BC8);
    var_s0_2 = ((void *)D_011E6BC0);
    do {
        if (*var_s1_2 != 0) {
            if (func_0016ADC0() == *var_s1_2) {
                func_0016AF10();
            }
            func_00163EE0(*var_s1_2);
            func_0011E4E8(*var_s1_2);
            func_001202D0(0, *var_s1_2);
            func_001202D0(1, *var_s1_2);
            temp_a0_3 = *var_s1_2;
            if ((*(s32 *)D_005B3744) == temp_a0_3) {
                (*(s32 *)D_005B3744) = 0;
            }
            func_001514F8(temp_a0_3);
            *var_s1_2 = 0;
        }
        if (*var_s0_2 != 0) {
            if (func_0016ADC0() == *var_s0_2) {
                func_0016AF10();
            }
            func_00163EE0(*var_s0_2);
            func_0011E4E8(*var_s0_2);
            func_001202D0(0, *var_s0_2);
            func_001202D0(1, *var_s0_2);
            temp_a0_4 = *var_s0_2;
            if ((*(s32 *)D_005B3744) == temp_a0_4) {
                (*(s32 *)D_005B3744) = 0;
            }
            func_001514F8(temp_a0_4);
            *var_s0_2 = 0;
        }
        var_s0_2 += 4;
        var_s1_2 += 4;
    } while ((s32) var_s0_2 < (s32) (((void *)D_011E6BC0) + 8));
    return 0;
}
