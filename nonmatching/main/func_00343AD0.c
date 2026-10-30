/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_003112E0(void);
extern int func_003387D0(void *, int);
extern int func_00333600(int);
extern int Pes6MatchPlayer_GetSquadIndex(u8);
extern s32 func_00338A60(void *, void *);
extern s32 func_0030D990(s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
extern char D_003E61A8[];
extern M2C_UNK func_00343920;
extern M2C_UNK func_00343A10;
extern M2C_UNK func_00343C90;

s32 func_00343AD0(void *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s3;
    s32 var_s4;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;

    var_s4 = 0;
    temp_v0 = M2C_FIELD(arg0, void **, 0x3C);
    temp_s2 = temp_v0 + 0x74;
    var_s3 = 0;
    if (M2C_FIELD(temp_v0, u8 *, 8) != 0) {
        temp_s0 = Pes6MatchPlayer_GetSquadIndex(M2C_FIELD(temp_s2, u8 *, 4));
        if ((temp_s0 != Pes6MatchPlayer_GetSquadIndex(M2C_FIELD((temp_v0 + 0xB4), u8 *, 4))) && (func_0030D990((s32) M2C_FIELD(temp_s2, u8 *, 4)) == 1) && (M2C_FIELD(temp_v0, s32 *, 0x74) == 5)) {
            var_s4 = 1;
        }
        if (var_s4 == 0) {
            func_003387D0(arg0, (s32) &func_00343C90);
            return 0;
        }
        goto block_7;
    }
block_7:
    temp_s1 = func_00333600(4);
    temp_s0_2 = func_00333600(6);
    if (((u64) ((s64) M2C_FIELD(temp_s2, u8 *, 6) << 0x3D) >> 0x3F) != 0) {
        var_s3 = func_003112E0();
    }
    temp_v1 = temp_s0_2 | temp_s1;
    if ((var_s3 | (var_s4 | temp_v1)) != 0) {
        var_s0 = 0;
        if (temp_v1 != 0) {
            var_s0 = 1;
        }
        if (var_s4 != 0) {
            var_s0 |= 2;
        }
        if (var_s3 != 0) {
            var_s0 |= 4;
        }
        temp_v0_2 = func_00338AD0(0x8000001A, &func_00343920, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E61A8));
        func_00338A60(temp_v0_2, arg0);
        M2C_FIELD(temp_v0_2, s32 *, 0x2C) = var_s0;
        if (var_s3 != 0) {
            func_003387D0(arg0, (s32) &func_00343A10);
        } else {
            func_003387D0(arg0, (s32) &func_00343C90);
        }
        return 1;
    }
    return 0;
}
