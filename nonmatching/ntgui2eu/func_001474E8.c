/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0011E4E8(s32);                         /* extern */
M2C_UNK func_001202D0(M2C_UNK, s32);                /* extern */
M2C_UNK func_001514F8(s32);                         /* extern */
M2C_UNK func_00163EE0(s32);                         /* extern */
s32 func_0016ADC0(s32);                             /* extern */
M2C_UNK func_0016AF10(s32);                         /* extern */
extern char D_005B3744[];
extern char D_005B592C[];
extern char D_011DFB68[];
extern char D_011DFB70[];
extern char D_011DFB78[];
extern char D_011DFB88[];
extern char D_011DFB98[];
extern char D_011DFBA8[];

s32 func_001474E8(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_14;
    s32 temp_v0_15;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
    if (temp_v1 != 2) {
        if (temp_v1 < 3) {
            if (temp_v1 != 1) {
                return 0;
            }
            if (M2C_FIELD(((void *)D_011DFB68), s32 *, 0) != 0) {
                temp_v0 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0 == M2C_FIELD(((void *)D_011DFB68), s32 *, 0)) {
                    func_0016AF10(temp_v0);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DFB68), s32 *, -0x498));
                func_0011E4E8(M2C_FIELD(((void *)D_011DFB68), s32 *, -0x498));
                func_001202D0(0, M2C_FIELD(((void *)D_011DFB68), s32 *, -0x498));
                func_001202D0(1, M2C_FIELD(((void *)D_011DFB68), s32 *, -0x498));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFB68), s32 *, -0x498)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DFB68), s32 *, -0x498));
                M2C_FIELD(((void *)D_011DFB68), s32 *, -0x498) = 0;
            }
            if (M2C_FIELD(((void *)D_011DFB88), s32 *, 0) != 0) {
                temp_v0_2 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0_2 == M2C_FIELD(((void *)D_011DFB88), s32 *, 0)) {
                    func_0016AF10(temp_v0_2);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DFB88), s32 *, -0x478));
                func_0011E4E8(M2C_FIELD(((void *)D_011DFB88), s32 *, -0x478));
                func_001202D0(0, M2C_FIELD(((void *)D_011DFB88), s32 *, -0x478));
                func_001202D0(1, M2C_FIELD(((void *)D_011DFB88), s32 *, -0x478));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFB88), s32 *, -0x478)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DFB88), s32 *, -0x478));
                M2C_FIELD(((void *)D_011DFB88), s32 *, -0x478) = 0;
            }
            if (M2C_FIELD(((void *)D_011DFB98), s32 *, 0) != 0) {
                temp_v0_3 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0_3 == M2C_FIELD(((void *)D_011DFB98), s32 *, 0)) {
                    func_0016AF10(temp_v0_3);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DFB98), s32 *, -0x468));
                func_0011E4E8(M2C_FIELD(((void *)D_011DFB98), s32 *, -0x468));
                func_001202D0(0, M2C_FIELD(((void *)D_011DFB98), s32 *, -0x468));
                func_001202D0(1, M2C_FIELD(((void *)D_011DFB98), s32 *, -0x468));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFB98), s32 *, -0x468)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DFB98), s32 *, -0x468));
                M2C_FIELD(((void *)D_011DFB98), s32 *, -0x468) = 0;
            }
            if (M2C_FIELD(((void *)D_011DFB78), s32 *, 0) != 0) {
                temp_v0_4 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0_4 == M2C_FIELD(((void *)D_011DFB78), s32 *, 0)) {
                    func_0016AF10(temp_v0_4);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DFB78), s32 *, -0x488));
                func_0011E4E8(M2C_FIELD(((void *)D_011DFB78), s32 *, -0x488));
                func_001202D0(0, M2C_FIELD(((void *)D_011DFB78), s32 *, -0x488));
                func_001202D0(1, M2C_FIELD(((void *)D_011DFB78), s32 *, -0x488));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFB78), s32 *, -0x488)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DFB78), s32 *, -0x488));
                M2C_FIELD(((void *)D_011DFB78), s32 *, -0x488) = 0;
            }
            if (M2C_FIELD(((void *)D_011DFBA8), s32 *, 0) != 0) {
                temp_v0_5 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0_5 == M2C_FIELD(((void *)D_011DFBA8), s32 *, 0)) {
                    func_0016AF10(temp_v0_5);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DFBA8), s32 *, -0x458));
                func_0011E4E8(M2C_FIELD(((void *)D_011DFBA8), s32 *, -0x458));
                func_001202D0(0, M2C_FIELD(((void *)D_011DFBA8), s32 *, -0x458));
                func_001202D0(1, M2C_FIELD(((void *)D_011DFBA8), s32 *, -0x458));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFBA8), s32 *, -0x458)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DFBA8), s32 *, -0x458));
                M2C_FIELD(((void *)D_011DFBA8), s32 *, -0x458) = 0;
            }
            goto block_98;
        }
        switch (temp_v1) {                          /* irregular */
        case 3:
            if (M2C_FIELD(((void *)D_011DFB88), s32 *, 8) != 0) {
                temp_v0_6 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0_6 == M2C_FIELD(((void *)D_011DFB88), s32 *, 8)) {
                    func_0016AF10(temp_v0_6);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DFB88), s32 *, 8));
                func_0011E4E8(M2C_FIELD(((void *)D_011DFB88), s32 *, 8));
                func_001202D0(0, M2C_FIELD(((void *)D_011DFB88), s32 *, 8));
                func_001202D0(1, M2C_FIELD(((void *)D_011DFB88), s32 *, 8));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFB88), s32 *, 8)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DFB88), s32 *, 8));
                M2C_FIELD(((void *)D_011DFB88), s32 *, 8) = 0;
            }
            if (M2C_FIELD(((void *)D_011DFB98), s32 *, 8) != 0) {
                temp_v0_7 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0_7 == M2C_FIELD(((void *)D_011DFB98), s32 *, 8)) {
                    func_0016AF10(temp_v0_7);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DFB98), s32 *, 8));
                func_0011E4E8(M2C_FIELD(((void *)D_011DFB98), s32 *, 8));
                func_001202D0(0, M2C_FIELD(((void *)D_011DFB98), s32 *, 8));
                func_001202D0(1, M2C_FIELD(((void *)D_011DFB98), s32 *, 8));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFB98), s32 *, 8)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DFB98), s32 *, 8));
                M2C_FIELD(((void *)D_011DFB98), s32 *, 8) = 0;
            }
            if (M2C_FIELD(((void *)D_011DFB78), s32 *, 8) != 0) {
                temp_v0_8 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0_8 == M2C_FIELD(((void *)D_011DFB78), s32 *, 8)) {
                    func_0016AF10(temp_v0_8);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DFB78), s32 *, 8));
                func_0011E4E8(M2C_FIELD(((void *)D_011DFB78), s32 *, 8));
                func_001202D0(0, M2C_FIELD(((void *)D_011DFB78), s32 *, 8));
                func_001202D0(1, M2C_FIELD(((void *)D_011DFB78), s32 *, 8));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFB78), s32 *, 8)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DFB78), s32 *, 8));
                M2C_FIELD(((void *)D_011DFB78), s32 *, 8) = 0;
            }
            if (M2C_FIELD(((void *)D_011DFBA8), s32 *, 8) != 0) {
                temp_v0_9 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0_9 == M2C_FIELD(((void *)D_011DFBA8), s32 *, 8)) {
                    func_0016AF10(temp_v0_9);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DFBA8), s32 *, 8));
                func_0011E4E8(M2C_FIELD(((void *)D_011DFBA8), s32 *, 8));
                func_001202D0(0, M2C_FIELD(((void *)D_011DFBA8), s32 *, 8));
                func_001202D0(1, M2C_FIELD(((void *)D_011DFBA8), s32 *, 8));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFBA8), s32 *, 8)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DFBA8), s32 *, 8));
                M2C_FIELD(((void *)D_011DFBA8), s32 *, 8) = 0;
            }
            goto block_98;
        case 5:
            if (M2C_FIELD(((void *)D_011DFB70), s32 *, 0) != 0) {
                temp_v0_10 = func_0016ADC0((*(s32 *)D_005B592C));
                if (temp_v0_10 == M2C_FIELD(((void *)D_011DFB70), s32 *, 0)) {
                    func_0016AF10(temp_v0_10);
                }
                func_00163EE0(M2C_FIELD(((void *)D_011DFB70), s32 *, -0x490));
                func_0011E4E8(M2C_FIELD(((void *)D_011DFB70), s32 *, -0x490));
                func_001202D0(0, M2C_FIELD(((void *)D_011DFB70), s32 *, -0x490));
                func_001202D0(1, M2C_FIELD(((void *)D_011DFB70), s32 *, -0x490));
                if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFB70), s32 *, -0x490)) {
                    (*(s32 *)D_005B3744) = 0;
                }
                func_001514F8(M2C_FIELD(((void *)D_011DFB70), s32 *, -0x490));
                M2C_FIELD(((void *)D_011DFB70), s32 *, -0x490) = 0;
            }
            return 1;
        default:
            return 0;
        }
    } else {
        if (M2C_FIELD(((void *)D_011DFB68), s32 *, 4) != 0) {
            temp_v0_11 = func_0016ADC0((*(s32 *)D_005B592C));
            if (temp_v0_11 == M2C_FIELD(((void *)D_011DFB68), s32 *, 4)) {
                func_0016AF10(temp_v0_11);
            }
            func_00163EE0(M2C_FIELD(((void *)D_011DFB68), s32 *, 4));
            func_0011E4E8(M2C_FIELD(((void *)D_011DFB68), s32 *, 4));
            func_001202D0(0, M2C_FIELD(((void *)D_011DFB68), s32 *, 4));
            func_001202D0(1, M2C_FIELD(((void *)D_011DFB68), s32 *, 4));
            if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFB68), s32 *, 4)) {
                (*(s32 *)D_005B3744) = 0;
            }
            func_001514F8(M2C_FIELD(((void *)D_011DFB68), s32 *, 4));
            M2C_FIELD(((void *)D_011DFB68), s32 *, 4) = 0;
        }
        if (M2C_FIELD(((void *)D_011DFB88), s32 *, 4) != 0) {
            temp_v0_12 = func_0016ADC0((*(s32 *)D_005B592C));
            if (temp_v0_12 == M2C_FIELD(((void *)D_011DFB88), s32 *, 4)) {
                func_0016AF10(temp_v0_12);
            }
            func_00163EE0(M2C_FIELD(((void *)D_011DFB88), s32 *, 4));
            func_0011E4E8(M2C_FIELD(((void *)D_011DFB88), s32 *, 4));
            func_001202D0(0, M2C_FIELD(((void *)D_011DFB88), s32 *, 4));
            func_001202D0(1, M2C_FIELD(((void *)D_011DFB88), s32 *, 4));
            if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFB88), s32 *, 4)) {
                (*(s32 *)D_005B3744) = 0;
            }
            func_001514F8(M2C_FIELD(((void *)D_011DFB88), s32 *, 4));
            M2C_FIELD(((void *)D_011DFB88), s32 *, 4) = 0;
        }
        if (M2C_FIELD(((void *)D_011DFB98), s32 *, 4) != 0) {
            temp_v0_13 = func_0016ADC0((*(s32 *)D_005B592C));
            if (temp_v0_13 == M2C_FIELD(((void *)D_011DFB98), s32 *, 4)) {
                func_0016AF10(temp_v0_13);
            }
            func_00163EE0(M2C_FIELD(((void *)D_011DFB98), s32 *, 4));
            func_0011E4E8(M2C_FIELD(((void *)D_011DFB98), s32 *, 4));
            func_001202D0(0, M2C_FIELD(((void *)D_011DFB98), s32 *, 4));
            func_001202D0(1, M2C_FIELD(((void *)D_011DFB98), s32 *, 4));
            if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFB98), s32 *, 4)) {
                (*(s32 *)D_005B3744) = 0;
            }
            func_001514F8(M2C_FIELD(((void *)D_011DFB98), s32 *, 4));
            M2C_FIELD(((void *)D_011DFB98), s32 *, 4) = 0;
        }
        if (M2C_FIELD(((void *)D_011DFB78), s32 *, 4) != 0) {
            temp_v0_14 = func_0016ADC0((*(s32 *)D_005B592C));
            if (temp_v0_14 == M2C_FIELD(((void *)D_011DFB78), s32 *, 4)) {
                func_0016AF10(temp_v0_14);
            }
            func_00163EE0(M2C_FIELD(((void *)D_011DFB78), s32 *, 4));
            func_0011E4E8(M2C_FIELD(((void *)D_011DFB78), s32 *, 4));
            func_001202D0(0, M2C_FIELD(((void *)D_011DFB78), s32 *, 4));
            func_001202D0(1, M2C_FIELD(((void *)D_011DFB78), s32 *, 4));
            if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFB78), s32 *, 4)) {
                (*(s32 *)D_005B3744) = 0;
            }
            func_001514F8(M2C_FIELD(((void *)D_011DFB78), s32 *, 4));
            M2C_FIELD(((void *)D_011DFB78), s32 *, 4) = 0;
        }
        if (M2C_FIELD(((void *)D_011DFBA8), s32 *, 4) != 0) {
            temp_v0_15 = func_0016ADC0((*(s32 *)D_005B592C));
            if (temp_v0_15 == M2C_FIELD(((void *)D_011DFBA8), s32 *, 4)) {
                func_0016AF10(temp_v0_15);
            }
            func_00163EE0(M2C_FIELD(((void *)D_011DFBA8), s32 *, 4));
            func_0011E4E8(M2C_FIELD(((void *)D_011DFBA8), s32 *, 4));
            func_001202D0(0, M2C_FIELD(((void *)D_011DFBA8), s32 *, 4));
            func_001202D0(1, M2C_FIELD(((void *)D_011DFBA8), s32 *, 4));
            if ((*(s32 *)D_005B3744) == M2C_FIELD(((void *)D_011DFBA8), s32 *, 4)) {
                (*(s32 *)D_005B3744) = 0;
            }
            func_001514F8(M2C_FIELD(((void *)D_011DFBA8), s32 *, 4));
            M2C_FIELD(((void *)D_011DFBA8), s32 *, 4) = 0;
        }
block_98:
        return 0;
    }
}
