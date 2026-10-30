/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 Pes6MatchPlayer_GetSquadIndex(u8);                              /* extern */
s32 func_00332FA0();                                /* extern */
M2C_UNK func_00338930(void *);                      /* extern */
M2C_UNK func_00338A60(s32, void *);                 /* extern */
s32 func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00342250();                            /* extern */
extern char D_003E15C0[];
extern M2C_UNK func_0031E8A0;

s32 func_0031EB20(void *arg0) {
    u8 temp_s3;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x3C);
    temp_s0 = M2C_FIELD(arg0, void **, 0x54);
    if ((M2C_FIELD(temp_s1, u8 *, 8) != 0) && (M2C_FIELD(temp_s1, s32 *, 0x74) == 3)) {
        temp_s3 = M2C_FIELD(temp_s1, u8 *, 0x60);
        if (temp_s3 == Pes6MatchPlayer_GetSquadIndex(M2C_FIELD(temp_s1, u8 *, 0x78))) {
            M2C_FIELD(temp_s1, s8 *, 0x4B) = 1;
        }
    }
    if (func_00332FA0() == 0) {
        func_00338A60(func_00338AD0(0x80000065, &func_0031E8A0, 4, ((void *)D_003E15C0)), arg0);
        func_00342250();
        M2C_FIELD(temp_s0, s32 *, 0x28) = 1;
        func_00338930(arg0);
        return 1;
    }
    return 0;
}
