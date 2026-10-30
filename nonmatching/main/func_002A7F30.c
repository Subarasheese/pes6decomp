/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001A4880(M2C_UNK);                     /* extern */
M2C_UNK func_001A56D0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001AFD70(s32);                         /* extern */
M2C_UNK func_00207360(s32 *);                       /* extern */
M2C_UNK func_0027A770();                            /* extern */
s16 func_002A1110(u8);                              /* extern */
M2C_UNK func_002A81F0(s32, s32);                    /* extern */
M2C_UNK func_002A8C00(M2C_UNK);                     /* extern */
M2C_UNK func_002A9520(s32);                         /* extern */
M2C_UNK func_002B8690();                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_005E19A0[];
extern char D_005E19A4[];
extern char D_005E19B2[];
extern char D_005E19DC[];
extern char D_005E19E0[];
extern char Pes6MatchObj28_Heading[];
extern char D_005E1D00[];
extern char D_005E1D02[];
extern char D_005E1D10[];
extern char D_005E1D14[];
extern char D_005E1D18[];
extern char D_005E1D1C[];
extern char D_005E1D20[];
extern char D_005E1D33[];
extern char D_005E1D34[];
extern char D_005E1D35[];
extern char D_005E1DF4[];
extern char D_005E1F34[];
extern char D_005E1F38[];
extern char D_005E2130[];
extern char D_005E2131[];
extern char D_005E2132[];
extern char D_005E2133[];
extern char D_005E21A0[];
extern char D_005E2208[];

void func_002A7F30(s32 arg0, s32 arg1, s32 arg2, s8 arg3, s32 arg4) {
    M2C_UNK *var_s0;
    f32 var_f1;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s1;

    temp_v1 = (*(s32 *)D_005E19A0) & ~0x400;
    (*(s32 *)D_005E19A0) = temp_v1;
    if (temp_v1 & 2) {
        func_001A4880(1);
    } else {
        func_001A4880(0);
    }
    func_002A9520(arg0);
    if (arg4 < 0) {
        var_f1 = 2.0f * (f32) (((u32) arg4 >> 1) | (arg4 & 1));
    } else {
        var_f1 = (f32) arg4;
    }
    (*(s32 *)D_005E1F34) = 0;
    (*(f32 *)D_005E1F38) = var_f1;
    if (var_f1 == 0.0f) {
        (*(f32 *)D_005E1F38) = 1.0f;
    }
    func_002A81F0(arg1, arg2);
    (*(s8 *)D_005E1D35) = arg3;
    (*(s8 *)D_005E1D33) = 2;
    (*(s8 *)D_005E1D34) = 1;
    if ((*(u8 *)D_005E19DC) & 2) {
        (*(s16 *)Pes6MatchObj28_Heading) = func_002A1110((*(u8 *)D_005E19B2));
    }
    if (!((*(u8 *)D_005E19DC) & 1)) {
        func_002A8C00(0);
    }
    (*(s32 *)D_005E1DF4) = 0;
    temp_v1_2 = (*(s32 *)D_005E19A0) & ~0x100;
    (*(s32 *)D_005E19A0) = temp_v1_2;
    if (!(temp_v1_2 & 2)) {
        func_001A4880(0);
    } else {
        func_001A4880(1);
    }
    (*(s32 *)D_005E1D20) = 0;
    (*(s8 *)D_005E2130) = 0;
    (*(s8 *)D_005E2131) = 0;
    (*(s8 *)D_005E2132) = 0;
    (*(s8 *)D_005E2133) = 0;
    (*(s32 *)D_005E21A0) = 0;
    (*(s32 *)D_005E2208) = 0;
    var_s0 = ((void *)Pes6MatchPlayers);
    (*(s32 *)D_005E19E0) = 0;
    var_s1 = 0;
    do {
        func_00207360(M2C_FIELD(var_s0, s32 **, 4));
        func_001AFD70(*M2C_FIELD(var_s0, s32 **, 4));
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x17);
    func_002B8690();
    func_0027A770();
    (*(s16 *)D_005E1D00) = 0;
    (*(s16 *)D_005E1D02) = 0;
    (*(s32 *)D_005E1D10) = 0;
    (*(s32 *)D_005E1D14) = 0;
    (*(s32 *)D_005E1D18) = 0;
    (*(s32 *)D_005E1D1C) = 0;
    temp_v1_3 = (*(s32 *)D_005E19A0) & ~0x1000;
    (*(s32 *)D_005E19A0) = temp_v1_3;
    if (!(temp_v1_3 & 2)) {
        func_001A4880(0);
    } else {
        func_001A4880(1);
    }
    (*(s32 *)D_005E19A4) = 0;
    func_001A56D0(0x42480000, 0x467A0000);
}
