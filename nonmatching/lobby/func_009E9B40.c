/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 (*D_00A003A0)(s32 (**)());
extern s32 (*D_00A003A4)();
extern s32 (*D_00A003A8)();
extern s32 (*D_00A003AC)();
extern s32 (*D_00A003B0)();
extern s32 (*D_00A003B4)();
extern s32 (*D_00A003B8)();
extern s32 (*D_00A003BC)();

void func_009E9B40(void *arg0) {
    s32 (*sp20)(s32 (**)());
    s32 (*sp24)();
    s32 (*sp28)();
    s32 (*sp2C)();
    s32 (*sp30)();
    s32 (*sp34)();
    s32 (*sp38)();
    s32 (*sp3C)();
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;

    sp20 = D_00A003A0;
    sp24 = D_00A003A4;
    sp28 = D_00A003A8;
    sp2C = D_00A003AC;
    sp30 = D_00A003B0;
    sp34 = D_00A003B4;
    sp38 = D_00A003B8;
    sp3C = D_00A003BC;
    if (sp20 == NULL) {
        var_v1 = 0;
    } else {
        var_v1 = sp20(&D_00A003AC);
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_v1;
    if (sp24 == NULL) {
        var_v1_2 = 0;
    } else {
        var_v1_2 = sp24();
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_v1_2;
    if (sp28 == NULL) {
        var_v1_3 = 0;
    } else {
        var_v1_3 = sp28();
    }
    M2C_FIELD(arg0, s32 *, 0x14) = var_v1_3;
    if (sp2C == NULL) {
        var_v1_4 = 0;
    } else {
        var_v1_4 = sp2C();
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_v1_4;
    if (sp30 == NULL) {
        var_v1_5 = 0;
    } else {
        var_v1_5 = sp30();
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_v1_5;
    if (sp34 == NULL) {
        var_v1_6 = 0;
    } else {
        var_v1_6 = sp34();
    }
    M2C_FIELD(arg0, s32 *, 0x20) = var_v1_6;
    if (sp38 == NULL) {
        var_v1_7 = 0;
    } else {
        var_v1_7 = sp38();
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_v1_7;
    if (sp3C == NULL) {
        var_v1_8 = 0;
    } else {
        var_v1_8 = sp3C() - 1;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_v1_8;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x20);
}
