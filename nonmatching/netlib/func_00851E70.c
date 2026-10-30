/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C47E0(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_008483C0(void *);                      /* extern */
M2C_UNK func_008495B0(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s16 func_00855150(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591E00[];
extern char D_00592700[];
extern char D_00592800[];
extern char D_00CBCD90[];

s32 func_00851E70(void *arg0) {
    M2C_UNK *var_s1;
    M2C_UNK *var_s3;
    M2C_UNK *var_s3_2;
    s32 var_s1_2;
    s32 var_s4;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s2;
    void *var_s2_2;

    M2C_FIELD(arg0, s16 *, 4) = func_00855150(1);
    var_s4 = 0;
    var_s3 = ((void *)D_00591E00);
    var_s2 = arg0;
    var_s1 = ((void *)D_00592800);
    M2C_FIELD(arg0, u8 *, 6) = (u8) (*(u8 *)D_00592700);
    do {
        func_001C47E0(var_s2 + 0x35, var_s3 + 0x4F, 2);
        func_001C47E0(var_s2 + 0x39, var_s3 + 0x53, 2);
        temp_v1 = arg0 + var_s4;
        var_s4 += 1;
        var_s3 += 2;
        var_s2 += 2;
        M2C_FIELD(temp_v1, u8 *, 0x3D) = (u8) M2C_FIELD(var_s1, u8 *, 0x140);
        var_s1 += 1;
    } while (var_s4 < 2);
    var_s1_2 = 0;
    var_s3_2 = ((void *)Pes6MatchPlayers);
    var_s2_2 = arg0;
    do {
        temp_v1_2 = arg0 + var_s1_2;
        M2C_FIELD(temp_v1_2, u8 *, 7) = (u8) M2C_FIELD(var_s3_2, u8 *, 0x16);
        M2C_FIELD(temp_v1_2, s8 *, 0x1E) = (s8) M2C_FIELD(var_s3_2, u16 *, 0x18);
        func_008495B0(var_s2_2 + 0x88, var_s3_2, 1, 0);
        var_s1_2 += 1;
        var_s2_2 += 0x1A;
        var_s3_2 += 0x240;
    } while (var_s1_2 < 0x17);
    func_008483C0(arg0 + 0x40);
    func_001C47E0(arg0 + 0x2E0, ((void *)D_00CBCD90), 0x3C);
    return 0;
}
