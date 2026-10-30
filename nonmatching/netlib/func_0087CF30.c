/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK **func_00154060(M2C_UNK, M2C_UNK);          /* extern */
M2C_UNK func_001D7A20(s32, M2C_UNK **, u16);        /* extern */
M2C_UNK func_001D7D80(s32, M2C_UNK);                /* extern */
s32 func_002DCA50();                                /* extern */
M2C_UNK func_002DF6E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_002DF8E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_0081CC20(M2C_UNK);                     /* extern */
M2C_UNK func_0081D200(M2C_UNK, s32);                /* extern */
M2C_UNK func_0087D490();                            /* extern */
M2C_UNK func_0087D5B0();                            /* extern */
M2C_UNK func_0087F260();                            /* extern */
M2C_UNK func_008F9C50();                            /* extern */
M2C_UNK func_00C75070(M2C_UNK **, M2C_UNK);         /* extern */
M2C_UNK func_00C75440(M2C_UNK **, M2C_UNK **, M2C_UNK, s32, M2C_UNK *, M2C_UNK); /* extern */
extern char D_003AE983[];
extern char D_003AE99C[];
extern M2C_UNK **D_003AE9D8;
extern M2C_UNK **D_003EA380;
extern char D_00591DCC[];
extern char D_00887A60[];
extern char D_008B144E[];

s32 func_0087CF30(void) {
    M2C_UNK **temp_v0;
    M2C_UNK **temp_v0_2;
    s32 var_a1;

    func_008F9C50();
    temp_v0 = func_00154060(1, 0x98);
    D_003AE9D8 = temp_v0;
    *temp_v0 = ((void *)D_00887A60);
    func_00C75440(D_003AE9D8 + 4, D_003AE9D8 + 0x1C, 0, (*(s32 *)D_003AE99C), M2C_FIELD(D_003AE9D8, M2C_UNK **, 0), 0xD);
    func_001D7D80(M2C_FIELD(D_003AE9D8, s32 *, 0xC), 0xC);
    func_001D7A20(M2C_FIELD(D_003AE9D8, s32 *, 0xC), D_003AE9D8 + 0x6C, M2C_FIELD(M2C_FIELD(D_003AE9D8, M2C_UNK **, 0), u16 *, 0x2A));
    func_001D7D80(M2C_FIELD(D_003AE9D8, s32 *, 0x10), 0xC);
    func_001D7A20(M2C_FIELD(D_003AE9D8, s32 *, 0x10), D_003AE9D8 + 0x7C, M2C_FIELD(M2C_FIELD(D_003AE9D8, M2C_UNK **, 0), u16 *, 0x2E));
    func_002DF6E0(M2C_FIELD(D_003AE9D8, s32 *, 0x14), 0x45066000);
    func_002DF8E0(M2C_FIELD(D_003AE9D8, s32 *, 0x14), 0);
    temp_v0_2 = func_00154060(1, 0x20);
    D_003EA380 = temp_v0_2;
    M2C_FIELD(temp_v0_2, s32 *, 4) = 1;
    M2C_FIELD(D_003EA380, s32 *, 8) = 0;
    M2C_FIELD(D_003EA380, s32 *, 0xC) = 0;
    M2C_FIELD(D_003EA380, s32 *, 0x10) = 0;
    M2C_FIELD(D_003EA380, s8 *, 0x1C) = 0;
    func_0081CC20(3);
    if (func_002DCA50() != 0) {
        var_a1 = (*(s8 *)D_008B144E) & 1;
    } else {
        var_a1 = ((*(s8 *)D_008B144E) & 1) ^ 1;
    }
    M2C_FIELD(D_003EA380, s32 *, 0x18) = (s32) ((*(u8 *)D_00591DCC) ^ var_a1);
    func_0081D200(1, var_a1);
    func_0087F260();
    if ((*(s8 *)D_003AE983) == 1) {
        func_0087D5B0();
    } else {
        func_0087D490();
    }
    M2C_FIELD(D_003EA380, s32 *, 4) = 1;
    func_00C75070(D_003AE9D8 + 4, 0);
    return 1;
}
