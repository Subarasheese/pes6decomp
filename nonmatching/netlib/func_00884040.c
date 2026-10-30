/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001F08B0(M2C_UNK32);                       /* extern */
s32 func_00309440(M2C_UNK);                         /* extern */
M2C_UNK func_00818750(M2C_UNK);                     /* extern */
s32 func_00819460(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s64, s64, s64, s64); /* extern */
s32 func_0081F0F0();                                /* extern */
M2C_UNK func_0081F100(M2C_UNK);                     /* extern */
M2C_UNK func_00B26F20();                            /* extern */
M2C_UNK func_00B27010(M2C_UNK);                     /* extern */
extern char D_00887E60[];
extern char D_00887E64[];
extern char D_00887E68[];
extern char D_00887E6C[];
extern char D_00887E70[];
extern char D_00887E74[];
extern char D_00887E78[];
extern char D_00887E7C[];
extern char D_0088A908[];
extern char D_008B2520[];
extern char D_008B2524[];
extern char D_008B2528[];
extern char D_008B252C[];

s32 func_00884040(void) {
    M2C_UNK32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    s32 temp_v0;

    if ((*(s32 *)D_008B2520) == 0) {
        return -1;
    }
    if ((*(s32 *)D_008B252C) == 0) {
        (*(s32 *)D_008B252C) = (*(s32 *)D_0088A908);
        if (func_00309440(0) == 8) {
            func_00B27010(0);
        }
    }
    if (func_0081F0F0() == 0) {
        func_0081F100(1);
    }
    temp_v0 = func_00819460(0, func_001F08B0((*(M2C_UNK32 *)D_008B2524)), 0, 0, 8, 0, 1, 1, 0x40800000, 0x41000000, 0x40800000, 0x451C4000, 2, 1, 3, 1);
    (*(s32 *)D_008B2528) = temp_v0;
    if (temp_v0 == 2) {
        (*(s32 *)D_008B2528) = 0;
        (*(s32 *)D_008B2520) = 0;
        sp30 = (*(M2C_UNK32 *)D_00887E60);
        sp34 = (*(f32 *)D_00887E64);
        sp38 = (*(f32 *)D_00887E68);
        sp3C = (*(f32 *)D_00887E6C);
        sp40 = (*(f32 *)D_00887E70);
        sp44 = (*(f32 *)D_00887E74);
        sp48 = (*(f32 *)D_00887E78);
        sp4C = (*(f32 *)D_00887E7C);
        (*(M2C_UNK32 *)D_008B2524) = sp30;
        func_00818750(2);
        func_0081F100(0);
        if (func_00309440(0) != 8) {
            return 1;
        }
        func_00B27010(1);
        func_00B26F20();
        return 1;
    }
    return 0;
}
