/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001514F8(s32);
extern s32 func_0016AF10(void);
extern s32 func_0016ADC0(void);
M2C_UNK func_0011E4E8(s32);                         /* extern */
M2C_UNK func_001202D0(M2C_UNK, s32);                /* extern */
M2C_UNK func_00163EE0(s32);                         /* extern */
extern char D_005B3744[];
extern char D_011E0A90[];
extern char D_011E0A94[];
extern char D_011E0AA0[];
extern char D_011E0AA8[];
extern char D_011E0AB0[];

s32 func_0014E5A0(void *arg0) {
    s32 *var_s0;
    s32 *var_s0_2;
    s32 *var_s1_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v1;
    s32 var_s1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v1 != 2) {
        if (temp_v1 < 3) {
            if (temp_v1 != 1) {
                return 0;
            }
            var_s0 = ((void *)D_011E0AA0);
            var_s1 = 1;
            do {
                if (*var_s0 == 0) {
                    var_s1 -= 1;
                } else {
                    if (func_0016ADC0() == *var_s0) {
                        func_0016AF10();
                    }
                    func_00163EE0(*var_s0);
                    func_0011E4E8(*var_s0);
                    func_001202D0(0, *var_s0);
                    func_001202D0(1, *var_s0);
                    temp_a0 = *var_s0;
                    if ((*(s32 *)D_005B3744) == temp_a0) {
                        (*(s32 *)D_005B3744) = 0;
                    }
                    var_s1 -= 1;
                    func_001514F8(temp_a0);
                    *var_s0 = 0;
                }
                var_s0 += 4;
            } while (var_s1 >= 0);
            goto block_46;
        }
        switch (temp_v1) {                          /* irregular */
        case 3:
            if (M2C_FIELD(((void *)D_011E0A94), s32 *, 0) != 0) {
                if (func_0016ADC0() == M2C_FIELD(((void *)D_011E0A94), s32 *, 0)) {
                    func_0016AF10();
                }
                func_00163EE0(M2C_FIELD(((void *)D_011E0A94), s32 *, 0xA94));
                func_0011E4E8(M2C_FIELD(((void *)D_011E0A94), s32 *, 0xA94));
                func_001202D0(0, M2C_FIELD(((void *)D_011E0A94), s32 *, 0xA94));
                func_001202D0(1, M2C_FIELD(((void *)D_011E0A94), s32 *, 0xA94));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011E0A94), s32 *, 0xA94)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011E0A94), s32 *, 0xA94));
                M2C_FIELD(((void *)D_011E0A94), s32 *, 0xA94) = 0;
            }
            goto block_46;
        case 5:
            if (M2C_FIELD(((void *)D_011E0A90), s32 *, 0) != 0) {
                if (func_0016ADC0() == M2C_FIELD(((void *)D_011E0A90), s32 *, 0)) {
                    func_0016AF10();
                }
                func_00163EE0(M2C_FIELD(((void *)D_011E0A90), s32 *, 0xA90));
                func_0011E4E8(M2C_FIELD(((void *)D_011E0A90), s32 *, 0xA90));
                func_001202D0(0, M2C_FIELD(((void *)D_011E0A90), s32 *, 0xA90));
                func_001202D0(1, M2C_FIELD(((void *)D_011E0A90), s32 *, 0xA90));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011E0A90), s32 *, 0xA90)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011E0A90), s32 *, 0xA90));
                M2C_FIELD(((void *)D_011E0A90), s32 *, 0xA90) = 0;
            }
            return 1;
        default:
            return 0;
        }
    } else {
        var_s1_2 = ((void *)D_011E0AA8);
        var_s0_2 = ((void *)D_011E0AB0);
        do {
            if (*var_s1_2 != 0) {
                if (func_0016ADC0() == *var_s1_2) {
                    func_0016AF10();
                }
                func_00163EE0(*var_s1_2);
                func_0011E4E8(*var_s1_2);
                func_001202D0(0, *var_s1_2);
                func_001202D0(1, *var_s1_2);
                temp_a0_2 = *var_s1_2;
                if ((*(s32 *)D_005B3744) == temp_a0_2) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(temp_a0_2);
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
                temp_a0_3 = *var_s0_2;
                if ((*(s32 *)D_005B3744) == temp_a0_3) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(temp_a0_3);
                *var_s0_2 = 0;
            }
            var_s0_2 += 4;
            var_s1_2 += 4;
        } while ((s32) var_s0_2 < (s32) (((void *)D_011E0AB0) + 8));
block_46:
        return 0;
    }
}
