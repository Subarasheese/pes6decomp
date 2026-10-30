/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK sprintf(s32, M2C_UNK *, M2C_UNK *);   /* extern */
s32 func_001C80F0(M2C_UNK *);                       /* extern */
M2C_UNK *func_001F08B0(M2C_UNK);                    /* extern */
M2C_UNK func_00817CC0();                            /* extern */
s32 func_008186E0(s32, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0099C7C0(s32);                         /* extern */
s32 func_0099C7E0(s32);                             /* extern */
M2C_UNK *func_009D57D0();                           /* extern */
M2C_UNK func_00D0C090();                            /* extern */
extern char D_00A02C60[];
extern s8 *D_00A7DD60;

s32 func_009C5220(void) {
    M2C_UNK *temp_s0;
    M2C_UNK *temp_s1;
    M2C_UNK *temp_s3;
    M2C_UNK *var_s2;
    s32 temp_s0_2;
    s32 temp_s4;
    s32 temp_v0;
    s8 var_v1;

    if ((M2C_FIELD(D_00A7DD60, u8 *, 2) != 0) || (M2C_FIELD(D_00A7DD60, u8 *, 4) != 0)) {
        func_00817CC0();
    }
    var_s2 = func_009D57D0();
    if (var_s2 == NULL) {
        var_s2 = ((void *)D_00A02C60);
    }
    temp_s3 = func_001F08B0(0x0200000F);
    temp_s1 = func_001F08B0(0x6C0006);
    temp_s0 = func_001F08B0(0x6C0007);
    temp_s4 = func_001C80F0(temp_s3);
    temp_v0 = func_0099C7E0(temp_s4 + func_001C80F0(var_s2) + 1);
    sprintf(temp_v0, temp_s3, var_s2);
    temp_s0_2 = func_008186E0(temp_v0, temp_s1, temp_s0, 0, 1);
    func_0099C7C0(temp_v0);
    switch (temp_s0_2) {                            /* irregular */
    case 0:
        break;
    case 2:
        var_v1 = 0x11;
block_12:
        M2C_FIELD(D_00A7DD60, s8 *, 0) = var_v1;
        break;
    default:
    case 1:
    case 3:
        func_00D0C090();
        var_v1 = 0xF;
        goto block_12;
    }
    return 0;
}
