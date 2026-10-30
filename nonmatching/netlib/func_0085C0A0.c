/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C47E0(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_002B34B0(M2C_UNK *, u16, M2C_UNK, f32); /* extern */
M2C_UNK func_00848220(void *);                      /* extern */
M2C_UNK func_00849420(M2C_UNK *, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00849C70(M2C_UNK *);                   /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E00[];
extern char D_00592700[];
extern char D_00592800[];
extern char D_00CBCD90[];

s32 func_0085C0A0(void *arg0) {
    M2C_UNK *var_s2;
    M2C_UNK *var_s3;
    M2C_UNK *var_s3_2;
    s32 var_s2_2;
    s32 var_s5;
    u8 temp_v1;
    void *temp_v1_2;
    void *var_s0;
    void *var_s4;

    var_s5 = 0;
    var_s0 = arg0 + 0x88;
    var_s4 = arg0;
    var_s3 = ((void *)D_00591E00);
    var_s2 = ((void *)D_00592800);
    (*(s8 *)D_00592700) = M2C_FIELD(arg0, s8 *, 6);
    do {
        func_001C47E0(var_s3 + 0x4F, var_s4 + 0x35, 2);
        func_001C47E0(var_s3 + 0x53, var_s4 + 0x39, 2);
        var_s4 += 2;
        temp_v1 = M2C_FIELD((arg0 + var_s5), u8 *, 0x3D);
        var_s5 += 1;
        var_s3 += 2;
        M2C_FIELD(var_s2, u8 *, 0x140) = temp_v1;
        var_s2 += 1;
    } while (var_s5 < 2);
    var_s2_2 = 0;
    var_s3_2 = ((void *)Pes6MatchPlayers);
    do {
        temp_v1_2 = arg0 + var_s2_2;
        M2C_FIELD(var_s3_2, u8 *, 0x16) = (u8) M2C_FIELD(temp_v1_2, u8 *, 7);
        M2C_FIELD(var_s3_2, s16 *, 0x18) = (s16) M2C_FIELD(temp_v1_2, u8 *, 0x1E);
        func_00849C70(var_s3_2);
        func_002B34B0(var_s3_2, M2C_FIELD(var_s0, u16 *, 0x10), 1, (f32) M2C_FIELD(var_s0, s16 *, 0x14));
        func_00849420(var_s3_2, var_s0, 1, 0);
        var_s2_2 += 1;
        var_s0 += 0x1A;
        var_s3_2 += 0x240;
    } while (var_s2_2 < 0x17);
    func_00848220(arg0 + 0x40);
    func_001C47E0(((void *)D_00CBCD90), arg0 + 0x2E0, 0x3C);
    return 0;
}
