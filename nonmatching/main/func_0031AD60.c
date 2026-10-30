/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern s32 func_00338990(s32, s32);
extern s32 func_00338A60(void *, void *);
extern s32 func_003389F0(void *, s32, s32);
s32 func_003384E0(M2C_UNK, M2C_UNK *);              /* extern */
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
s32 func_00991F40(void *, u8 *);                    /* extern */
extern char D_003E1510[];
extern char Pes6MatchPlayers[];
extern M2C_UNK func_0031A9D0;
extern M2C_UNK func_0031AEB0;
extern M2C_UNK func_00329560;

s32 func_0031AD60(void *arg0) {
    u8 sp3F;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    void *temp_s0;
    void *temp_v0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x44);
    sp3F = 0;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x2C);
    if (temp_v1 != 0xFF) {
        var_a0 = temp_v1 % 23;
    } else {
        var_a0 = 1;
    }
    temp_v1_2 = func_00991F40(((void *)Pes6MatchPlayers) + (var_a0 * 0x240), &sp3F) & 0xFF;
    switch (temp_v1_2) {                            /* irregular */
    case 0x2:
    case 0x1:
        if ((func_003384E0(0xC, &func_00329560) == 0) && (M2C_FIELD(temp_s0, s32 *, 0x14) == 0)) {
            temp_v0 = func_00338AD0(0x80000006, &func_0031A9D0, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E1510));
            func_00338A60(temp_v0, arg0);
            func_00338990((s32) temp_v0, (s32) arg0);
            func_003389F0(temp_v0, 2, (s32) sp3F);
        }
        func_003387D0(arg0, (s32) &func_0031AEB0);
        break;
    case 0xFF:
        func_003387D0(arg0, (s32) &func_0031AEB0);
        break;
    }
    return 1;
}
