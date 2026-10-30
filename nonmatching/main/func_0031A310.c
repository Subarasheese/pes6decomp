/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern s32 func_00338A60(void *, void *);
void *func_00338AD0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_003394E0(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_00351E00(void *);                      /* extern */
extern char D_003E1510[];
extern M2C_UNK func_00319E80;

s32 func_0031A310(void *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x40);
    if (M2C_FIELD(temp_s0, u8 *, 8) == 0) {
        return 0;
    }
    if (M2C_FIELD(temp_s0, s32 *, 0x74) != 2) {
        return 0;
    }
    func_003394E0(temp_s1, 2, Pes6MatchPlayer_GetSquadIndex(M2C_FIELD((temp_s0 + 0x74), u8 *, 4)), 2);
    func_00338A60(func_00338AD0(0x80000015, &func_00319E80, 4, ((void *)D_003E1510)), arg0);
    func_00351E00(temp_s0);
    return 1;
}
