/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern int func_003395B0(void *);
extern s32 func_00338A60(void *, void *);
extern s32 func_00338990(s32, s32);
s32 func_003384E0(M2C_UNK, M2C_UNK *);              /* extern */
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
s32 func_00991F40(void *, s8 *);                    /* extern */
extern char D_003E1510[];
extern char Pes6MatchPlayers[];
extern M2C_UNK func_003198C0;
extern M2C_UNK func_0031B0E0;
extern M2C_UNK func_00329560;

s32 func_00319BD0(void *arg0) {
    s8 sp3F;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a0_2;
    void *temp_s0;
    void *temp_v0;

    sp3F = 0;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x30);
    temp_s0 = M2C_FIELD(arg0, void **, 0x44);
    if (temp_v1 != 0xFF) {
        var_a0 = temp_v1 % 23;
    } else {
        var_a0 = 1;
    }
    if (M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x16) == 0x14) {
        M2C_FIELD(arg0, s32 *, 0x38) = func_003395B0(M2C_FIELD(arg0, void **, 0x40));
    }
    temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v1_2 == 0xFF) {
        var_a0_2 = 1;
    } else {
        var_a0_2 = temp_v1_2 % 23;
    }
    temp_v1_3 = func_00991F40(((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240), &sp3F) & 0xFF;
    if ((temp_v1_3 != 0xFF) && (temp_v1_3 != 2) && (temp_v1_3 != 1)) {

    } else {
        if ((func_003384E0(0xC, &func_00329560) == 0) && (M2C_FIELD(temp_s0, s32 *, 0x14) == 0)) {
            temp_v0 = func_00338AD0(0x80000004, &func_003198C0, 9, ((void *)D_003E1510));
            func_00338A60(temp_v0, arg0);
            func_00338990((s32) temp_v0, (s32) arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
        func_003387D0(arg0, (s32) &func_0031B0E0);
    }
    return 1;
}
