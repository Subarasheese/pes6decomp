/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0030EF70(void);
extern int func_00333600(int);
extern u8 func_0030E540(s32);
extern u8 func_0030DBA0(void);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern int func_003395B0(void *);
extern s32 func_00338A60(void *, void *);
extern int Pes6MatchPlayer_GetSide(u8);
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_003E1510[];
extern M2C_UNK func_0031A7A0;

s32 func_0031A840(void *arg0) {
    s32 temp_s2;
    u8 temp_s2_2;
    void *temp_s0;
    void *temp_s3;
    void *temp_v0;
    void *temp_v1;

    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    temp_s3 = M2C_FIELD(arg0, void **, 0x40);
    temp_s2 = func_0030E540(0) & 0xFF;
    switch (temp_s2) {                              /* irregular */
    case 0x0:
        return 0;
    case 0xFF:
        return 0;
    default:
        if (func_0030DBA0() != 0) {
            if (func_00333600(0xB) != 0) {
                return 0;
            }
            if (func_00333600(0xA) == 0) {
                temp_s2_2 = temp_s2 & 0xFF;
                Pes6MatchPlayer_GetSide(temp_s2_2);
                if (func_0030EF70() != 0) {
                    if ((M2C_FIELD(temp_s0, s32 *, 4) + 0x12C) < func_003395B0(temp_s3)) {
                        temp_v1 = (Pes6MatchPlayer_GetSquadIndex(temp_s2_2) * 4) + temp_s0;
                        M2C_FIELD(temp_v1, s32 *, 8) = (s32) (M2C_FIELD(temp_v1, s32 *, 8) + 1);
                        temp_v0 = func_00338AD0(0x80000009, &func_0031A7A0, 5, ((void *)D_003E1510));
                        if (temp_v0 != NULL) {
                            func_00338A60(temp_v0, arg0);
                        }
                    }
                    return 1;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
}
