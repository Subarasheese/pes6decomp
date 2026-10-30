/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001A4800(M2C_UNK);                     /* extern */
M2C_UNK func_001A4880(M2C_UNK);                     /* extern */
M2C_UNK func_001A48A0(M2C_UNK);                     /* extern */
M2C_UNK func_001A56D0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001A5750();                            /* extern */
M2C_UNK func_001AFD70(s32);                         /* extern */
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00207360(s32 *);                       /* extern */
M2C_UNK func_0027A770();                            /* extern */
M2C_UNK func_002A8C00(M2C_UNK);                     /* extern */
M2C_UNK func_002A9520(M2C_UNK);                     /* extern */
M2C_UNK func_002B8690();                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_005E19A0[];
extern char D_005E19A4[];
extern char D_005E19B0[];
extern char D_005E19B2[];
extern char D_005E19B4[];
extern char D_005E19B5[];
extern char D_005E19B6[];
extern char D_005E19B8[];
extern char D_005E19BC[];
extern char D_005E19C0[];
extern char D_005E19C8[];
extern char D_005E19CC[];
extern char D_005E19D0[];
extern char D_005E19E0[];
extern char Pes6MatchObj28_Heading[];
extern char D_005E1D00[];
extern char D_005E1D02[];
extern char D_005E1D10[];
extern char D_005E1D14[];
extern char D_005E1D18[];
extern char D_005E1D1C[];
extern char D_005E1D20[];
extern char D_005E1D32[];
extern char D_005E1D33[];
extern char D_005E1D34[];
extern char D_005E1D35[];
extern char D_005E1DF4[];
extern char D_005E1F30[];
extern char D_005E2130[];
extern char D_005E2131[];
extern char D_005E2132[];
extern char D_005E2133[];
extern char D_005E21A0[];
extern char D_005E21A4[];
extern char D_005E21A8[];
extern char D_005E21AC[];
extern char D_005E2200[];
extern char D_005E2204[];
extern char D_005E2208[];
extern char D_005E2210[];
extern char D_005E2464[];
extern char D_005E2468[];

void func_002A96D0(void) {
    M2C_UNK *var_s0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_s1;

    temp_s1 = (*(s32 *)D_005E2464);
    temp_s0 = (*(s32 *)D_005E2468);
    func_001C48E8(((void *)D_005E19A0), 0, 0xB10);
    (*(s32 *)D_005E2464) = temp_s1;
    (*(s32 *)D_005E2468) = temp_s0;
    func_002A9520(0);
    if ((*(u8 *)D_005E19B0) != 0x1D) {
        (*(u16 *)D_005E19B6) &= 0xFEFF;
    }
    (*(u8 *)D_005E19B0) = 0x1D;
    (*(s8 *)D_005E19B2) = 0x1D;
    (*(s8 *)D_005E19B4) = 1;
    (*(s8 *)D_005E19B5) = 1;
    (*(s16 *)Pes6MatchObj28_Heading) = 0xC000;
    var_s0 = ((void *)Pes6MatchPlayers);
    (*(s32 *)D_005E19BC) = 0;
    var_s1 = 0;
    (*(s32 *)D_005E19C0) = 0;
    (*(s32 *)D_005E19B8) = 0;
    (*(s32 *)D_005E19C8) = 0;
    (*(s32 *)D_005E19CC) = 0;
    (*(s32 *)D_005E19D0) = 0;
    (*(s16 *)D_005E1D02) = 1;
    (*(u16 *)D_005E19B6) &= ~0x1F;
    (*(s32 *)D_005E1D10) = 0;
    (*(s32 *)D_005E1D14) = 0;
    (*(s32 *)D_005E1D18) = 0;
    (*(s32 *)D_005E1D1C) = 0;
    (*(s32 *)D_005E1D20) = 0;
    (*(s8 *)D_005E2130) = 0;
    (*(s8 *)D_005E2131) = 0;
    (*(s8 *)D_005E2132) = 0;
    (*(s8 *)D_005E2133) = 0;
    (*(s32 *)D_005E21A0) = 0;
    (*(s32 *)D_005E2208) = 0;
    (*(s32 *)D_005E19E0) = 0;
    do {
        func_00207360(M2C_FIELD(var_s0, s32 **, 4));
        func_001AFD70(*M2C_FIELD(var_s0, s32 **, 4));
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x17);
    func_002B8690();
    func_0027A770();
    func_002A8C00(0);
    (*(s32 *)D_005E21A4) = 0;
    (*(s32 *)D_005E21A8) = 0x3E9EB852;
    (*(s8 *)D_005E21AC) = 0;
    if (!((*(f32 *)D_005E2200) <= 0.0f)) {
        func_001A56D0(0x42480000, 0x467A0000);
    }
    (*(f32 *)D_005E2200) = 0.0f;
    temp_v1 = (*(s32 *)D_005E19A0) & ~0x200;
    (*(s32 *)D_005E19A0) = temp_v1;
    if (!(temp_v1 & 2)) {
        func_001A4880(0);
    } else {
        func_001A4880(1);
    }
    (*(s16 *)D_005E1D00) = 0;
    (*(s32 *)D_005E2204) = 0x43DE0000;
    (*(s32 *)D_005E19A0) = 0;
    if (!((*(s32 *)D_005E19A0) & 2)) {
        func_001A4880(0);
    } else {
        func_001A4880(1);
    }
    (*(s32 *)D_005E19A4) = 0;
    (*(s32 *)D_005E1F30) = 0x3F800000;
    (*(s8 *)D_005E1D32) = 0;
    (*(s8 *)D_005E1D33) = 0;
    (*(s8 *)D_005E1D34) = 0;
    (*(s8 *)D_005E1D35) = 0;
    func_001A48A0(0);
    (*(s32 *)D_005E1DF4) = 0;
    (*(s32 *)D_005E2210) = 0x40000000;
    func_001A5750();
    func_001A4800(0);
}
