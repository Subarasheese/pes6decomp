/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011E4E8(s32);                         /* extern */
M2C_UNK func_001202D0(M2C_UNK, s32);                /* extern */
M2C_UNK func_001514F8(s32);                         /* extern */
M2C_UNK func_00152010(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00163EE0(s32);                         /* extern */
s32 func_0016ADC0(s32);                             /* extern */
M2C_UNK func_0016AF10(s32);                         /* extern */
extern char D_005B3744[];
extern char D_005B592C[];
extern char D_011E0A20[];
extern char D_011E0A28[];

s32 func_0014D840(void *arg0) {
    s32 *var_s0;
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v1 != 2) {
        if (temp_v1 < 3) {
            if (temp_v1 != 1) {
                return 0;
            }
            func_00152010(0xFF, 0x28);
            return 0;
        }
        if (temp_v1 != 5) {
            return 0;
        }
        if (M2C_FIELD(((void *)D_011E0A20), s32 *, 0) != 0) {
            temp_v0 = func_0016ADC0((*(s32 *)D_005B592C));
            if (temp_v0 == M2C_FIELD(((void *)D_011E0A20), s32 *, 0)) {
                func_0016AF10(temp_v0);
            }
            func_00163EE0(M2C_FIELD(((void *)D_011E0A20), s32 *, 0xA20));
            func_0011E4E8(M2C_FIELD(((void *)D_011E0A20), s32 *, 0xA20));
            func_001202D0(0, M2C_FIELD(((void *)D_011E0A20), s32 *, 0xA20));
            func_001202D0(1, M2C_FIELD(((void *)D_011E0A20), s32 *, 0xA20));
            if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011E0A20), s32 *, 0xA20)) {
                (*(s32 *)D_005B3744) = 0;
            }
            func_001514F8(M2C_FIELD(((void *)D_011E0A20), s32 *, 0xA20));
            M2C_FIELD(((void *)D_011E0A20), s32 *, 0xA20) = 0;
        }
        return 1;
    }
    var_s0 = ((void *)D_011E0A28);
    var_s1 = 2;
    do {
        if (*var_s0 == 0) {
            var_s1 -= 1;
        } else {
            temp_v0_2 = func_0016ADC0(*(s32 *)0x5B592C);
            if (temp_v0_2 == *var_s0) {
                func_0016AF10(temp_v0_2);
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
    return 0;
}
