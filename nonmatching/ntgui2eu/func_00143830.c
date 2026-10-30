/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011E4E8(s32);                         /* extern */
M2C_UNK func_001202D0(M2C_UNK, s32);                /* extern */
M2C_UNK func_001514F8(s32);                         /* extern */
M2C_UNK func_00163EE0(s32);                         /* extern */
M2C_UNK func_00165AE0(s32);                         /* extern */
s32 func_0016ADC0(s32);                             /* extern */
M2C_UNK func_0016AF10(s32);                         /* extern */
extern char D_005B3744[];
extern char D_005B592C[];
extern char D_011DF838[];
extern char D_011DF83C[];
extern char D_011DF848[];
extern char D_011DF850[];
extern char D_011DF858[];

s32 func_00143830(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v1 != 2) {
        if (temp_v1 < 3) {
            if (temp_v1 != 1) {
                return 0;
            }
            if (M2C_FIELD(((void *)D_011DF848), s32 *, 0) != 0) {
                temp_v0 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0 == M2C_FIELD(((void *)D_011DF848), s32 *, 0)) {
                    func_0016AF10(temp_v0);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DF848), s32 *, -0x7B8));
                func_0011E4E8(M2C_FIELD(((void *)D_011DF848), s32 *, -0x7B8));
                func_001202D0(0, M2C_FIELD(((void *)D_011DF848), s32 *, -0x7B8));
                func_001202D0(1, M2C_FIELD(((void *)D_011DF848), s32 *, -0x7B8));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DF848), s32 *, -0x7B8)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DF848), s32 *, -0x7B8));
                M2C_FIELD(((void *)D_011DF848), s32 *, -0x7B8) = 0;
            }
            if (M2C_FIELD(((void *)D_011DF858), s32 *, 0) != 0) {
                temp_v0_2 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0_2 == M2C_FIELD(((void *)D_011DF858), s32 *, 0)) {
                    func_0016AF10(temp_v0_2);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DF858), s32 *, -0x7A8));
                func_0011E4E8(M2C_FIELD(((void *)D_011DF858), s32 *, -0x7A8));
                func_001202D0(0, M2C_FIELD(((void *)D_011DF858), s32 *, -0x7A8));
                func_001202D0(1, M2C_FIELD(((void *)D_011DF858), s32 *, -0x7A8));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DF858), s32 *, -0x7A8)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DF858), s32 *, -0x7A8));
                M2C_FIELD(((void *)D_011DF858), s32 *, -0x7A8) = 0;
            }
            if (M2C_FIELD(((void *)D_011DF850), s32 *, 0) != 0) {
                temp_v0_3 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0_3 == M2C_FIELD(((void *)D_011DF850), s32 *, 0)) {
                    func_0016AF10(temp_v0_3);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DF850), s32 *, -0x7B0));
                func_0011E4E8(M2C_FIELD(((void *)D_011DF850), s32 *, -0x7B0));
                func_001202D0(0, M2C_FIELD(((void *)D_011DF850), s32 *, -0x7B0));
                func_001202D0(1, M2C_FIELD(((void *)D_011DF850), s32 *, -0x7B0));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DF850), s32 *, -0x7B0)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DF850), s32 *, -0x7B0));
                M2C_FIELD(((void *)D_011DF850), s32 *, -0x7B0) = 0;
            }
            goto block_51;
        }
        switch (temp_v1) {                          /* irregular */
        case 4:
            if (M2C_FIELD(((void *)D_011DF83C), s32 *, 0) != 0) {
                temp_v0_4 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0_4 == M2C_FIELD(((void *)D_011DF83C), s32 *, 0)) {
                    func_0016AF10(temp_v0_4);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DF83C), s32 *, -0x7C4));
                func_0011E4E8(M2C_FIELD(((void *)D_011DF83C), s32 *, -0x7C4));
                func_001202D0(0, M2C_FIELD(((void *)D_011DF83C), s32 *, -0x7C4));
                func_001202D0(1, M2C_FIELD(((void *)D_011DF83C), s32 *, -0x7C4));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DF83C), s32 *, -0x7C4)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DF83C), s32 *, -0x7C4));
                M2C_FIELD(((void *)D_011DF83C), s32 *, -0x7C4) = 0;
            }
            goto block_51;
        case 5:
            var_v0 = 1;
            if ((*(s32 *)D_011DF838) != 0) {
                func_00165AE0((*(s32 *)D_011DF838));
                return 1;
            }
            /* Duplicate return node #52. Try simplifying control flow for better match */
            return var_v0;
        default:
            return 0;
        }
    } else {
        if (M2C_FIELD(((void *)D_011DF848), s32 *, 4) != 0) {
            temp_v0_5 = func_0016ADC0((*(s32 *)D_005B592C));
            if (temp_v0_5 == M2C_FIELD(((void *)D_011DF848), s32 *, 4)) {
                func_0016AF10(temp_v0_5);
            }
            func_00163EE0(M2C_FIELD(((void *)D_011DF848), s32 *, 4));
            func_0011E4E8(M2C_FIELD(((void *)D_011DF848), s32 *, 4));
            func_001202D0(0, M2C_FIELD(((void *)D_011DF848), s32 *, 4));
            func_001202D0(1, M2C_FIELD(((void *)D_011DF848), s32 *, 4));
            if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DF848), s32 *, 4)) {
                (*(s32 *)D_005B3744) = 0;
            }
            func_001514F8(M2C_FIELD(((void *)D_011DF848), s32 *, 4));
            M2C_FIELD(((void *)D_011DF848), s32 *, 4) = 0;
        }
        if (M2C_FIELD(((void *)D_011DF858), s32 *, 4) != 0) {
            temp_v0_6 = func_0016ADC0((*(s32 *)D_005B592C));
            if (temp_v0_6 == M2C_FIELD(((void *)D_011DF858), s32 *, 4)) {
                func_0016AF10(temp_v0_6);
            }
            func_00163EE0(M2C_FIELD(((void *)D_011DF858), s32 *, 4));
            func_0011E4E8(M2C_FIELD(((void *)D_011DF858), s32 *, 4));
            func_001202D0(0, M2C_FIELD(((void *)D_011DF858), s32 *, 4));
            func_001202D0(1, M2C_FIELD(((void *)D_011DF858), s32 *, 4));
            if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DF858), s32 *, 4)) {
                (*(s32 *)D_005B3744) = 0;
            }
            func_001514F8(M2C_FIELD(((void *)D_011DF858), s32 *, 4));
            M2C_FIELD(((void *)D_011DF858), s32 *, 4) = 0;
        }
        if (M2C_FIELD(((void *)D_011DF850), s32 *, 4) != 0) {
            temp_v0_7 = func_0016ADC0((*(s32 *)D_005B592C));
            if (temp_v0_7 == M2C_FIELD(((void *)D_011DF850), s32 *, 4)) {
                func_0016AF10(temp_v0_7);
            }
            func_00163EE0(M2C_FIELD(((void *)D_011DF850), s32 *, 4));
            func_0011E4E8(M2C_FIELD(((void *)D_011DF850), s32 *, 4));
            func_001202D0(0, M2C_FIELD(((void *)D_011DF850), s32 *, 4));
            func_001202D0(1, M2C_FIELD(((void *)D_011DF850), s32 *, 4));
            if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DF850), s32 *, 4)) {
                (*(s32 *)D_005B3744) = 0;
            }
            func_001514F8(M2C_FIELD(((void *)D_011DF850), s32 *, 4));
            M2C_FIELD(((void *)D_011DF850), s32 *, 4) = 0;
        }
block_51:
        var_v0 = 0;
        return var_v0;
    }
}
