/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00145590(s32);                         /* extern */
M2C_UNK func_00145750(s32);                         /* extern */
s32 func_001515E0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00153FA0(s32);                         /* extern */
s32 func_0017F9A0(s32, M2C_UNK *, s32 *, M2C_UNK, M2C_UNK *); /* extern */
s32 func_0017FA00(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00183050();                            /* extern */
M2C_UNK func_001830B0();                            /* extern */
M2C_UNK func_00183160();                            /* extern */
M2C_UNK func_00186420();                            /* extern */
M2C_UNK func_001A27A0(M2C_UNK);                     /* extern */
M2C_UNK func_001A2B30(M2C_UNK);                     /* extern */
s32 func_001CE760();                                /* extern */
extern char D_0051FF80[];
extern char D_0051FF84[];
extern char D_0051FF88[];
extern char D_0051FF8C[];
extern char D_0051FF90[];
extern char D_0051FF94[];
extern char D_0051FF98[];
extern char D_00520358[];
extern char D_0052035C[];
extern char D_00520360[];
extern M2C_UNK func_001A25E0;
extern M2C_UNK func_001A2D00;

void func_001A11E0(void) {
    s32 sp3C;
    s32 *var_s0;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;

    func_00186420();
    var_s1 = 0;
    var_s0 = ((void *)D_00520358);
    do {
        temp_a0 = *var_s0;
        if (temp_a0 != 0) {
            func_00145590(temp_a0);
            func_00153FA0(*var_s0);
            *var_s0 = 0;
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2);
    func_00183160();
    func_001830B0();
    func_00183050();
    if ((*(s32 *)D_0051FF80) != 0) {
        func_00153FA0((*(s32 *)D_0051FF80));
        (*(s32 *)D_0051FF80) = 0;
    }
    if ((*(s32 *)D_0051FF84) != 0) {
        func_00153FA0((*(s32 *)D_0051FF84));
        (*(s32 *)D_0051FF84) = 0;
    }
    if ((*(s32 *)D_0051FF88) != 0) {
        func_00153FA0((*(s32 *)D_0051FF88));
        (*(s32 *)D_0051FF88) = 0;
    }
    if ((*(s32 *)D_0051FF8C) != 0) {
        func_00153FA0((*(s32 *)D_0051FF8C));
        (*(s32 *)D_0051FF8C) = 0;
    }
    if ((*(s32 *)D_0051FF90) != 0) {
        func_00153FA0((*(s32 *)D_0051FF90));
        (*(s32 *)D_0051FF90) = 0;
    }
    if ((*(s32 *)D_0051FF94) != 0) {
        func_00153FA0((*(s32 *)D_0051FF94));
        (*(s32 *)D_0051FF94) = 0;
    }
    if ((*(s32 *)D_0051FF98) != 0) {
        func_00153FA0((*(s32 *)D_0051FF98));
        (*(s32 *)D_0051FF98) = 0;
    }
    temp_v0 = func_001515E0(0, 0x4266, 2, 0x40, 0x30);
    (*(s32 *)D_00520358) = temp_v0;
    func_00145750(temp_v0);
    temp_v0_2 = func_001515E0(0, 0x4267, 2, 0x40, 0x30);
    (*(s32 *)D_0052035C) = temp_v0_2;
    func_00145750(temp_v0_2);
    do {

    } while (func_0017FA00(0x124F9, &func_001A25E0, 0, 0) != 1);
    func_001A2B30(1);
    temp_s0 = func_001CE760();
    (*(s32 *)D_0051FF80) = 0;
    (*(s32 *)D_0051FF84) = 0;
    sp3C = 1;
    do {

    } while (func_0017F9A0(temp_s0, &func_001A2D00, &sp3C, 4, ((void *)D_00520360)) != 1);
    func_001A27A0(1);
}
