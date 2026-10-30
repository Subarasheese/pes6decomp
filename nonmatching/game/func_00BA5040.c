/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void Pes6Ball_Update(void);
extern s32 func_00207920(void *);
extern u8 func_00BF6270(void);
M2C_UNK func_009832C0(void *, M2C_UNK);             /* extern */
M2C_UNK func_00AD0A20();                            /* extern */
s32 func_00BBB8C0(s32);                             /* extern */
s32 func_00BF7550(void *);                          /* extern */
extern u16 D_003EA76E;
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];

s32 func_00BA5040(void) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s1;
    s32 var_s2;
    u16 temp_a0;
    u16 temp_v1;
    void *temp_s0;
    void *temp_s3;

    var_s1 = 0;
    if (func_00BF6270() == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = func_00BF6270() % 23;
    }
    var_s2 = 1;
    temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    do {
        if (var_s2 == 0xFF) {
            var_a0_2 = 1;
        } else {
            var_a0_2 = var_s2 % 23;
        }
        temp_s3 = ((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240);
        if ((M2C_FIELD(M2C_FIELD(temp_s3, void **, 4), u8 *, 0x2C) != 0) && (M2C_FIELD(temp_s3, u8 *, 0x16) != 0x51) && (func_00BF7550(temp_s3) != 0)) {
            func_009832C0(temp_s3, 0x37);
            M2C_FIELD(temp_s3, u8 *, 0x16) = 0x51U;
            M2C_FIELD(temp_s3, s16 *, 0x18) = 0;
        }
        var_s2 += 1;
    } while (var_s2 < 0x17);
    func_00AD0A20();
    Pes6Ball_Update();
    temp_v1 = M2C_FIELD(temp_s0, u16 *, 0x18);
    switch (temp_v1) {                              /* irregular */
    case 3:
        if ((func_00207920(M2C_FIELD(temp_s0, void **, 4)) >= 0x1389) && (func_00BBB8C0((*(u8 *)D_00591BE4) * 3) == 0)) {
block_25:
            var_s1 = 1;
        }
        break;
    case 14:
    case 13:
        goto block_25;
    default:
        temp_a0 = D_003EA76E;
        D_003EA76E = temp_a0 + 1;
        if ((s32) temp_a0 >= (*(u8 *)0x591BE4 * 7)) {
            goto block_25;
        }
        break;
    }
    return var_s1;
}
