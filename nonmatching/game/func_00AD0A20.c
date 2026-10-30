/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096B4A0(M2C_UNK *);                   /* extern */
M2C_UNK func_00973CA0(s32);                         /* extern */
M2C_UNK func_00973EC0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_00989920();                            /* extern */
M2C_UNK func_009B37F0(M2C_UNK *);                   /* extern */
M2C_UNK func_00ACFAB0(M2C_UNK *);                   /* extern */
M2C_UNK func_00AFBFD0();                            /* extern */
M2C_UNK func_00BBB260();                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_0058E7F0[];

void func_00AD0A20(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s1_2;
    M2C_UNK *var_s1_3;
    M2C_UNK *var_v1;
    s32 var_a0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    u8 temp_v0;

    func_00989920();
    func_00BBB260();
    var_a0 = 0;
    var_v1 = ((void *)D_0058E7F0);
    do {
        temp_v0 = M2C_FIELD(var_v1, u8 *, 0x48);
        if (((s32) temp_v0 > 0) && ((s32) temp_v0 < 0x17)) {
            M2C_FIELD(var_v1, u8 *, 0x49) = temp_v0;
        }
        var_a0 += 1;
        var_v1 += 0x240;
    } while (var_a0 < 0x16);
    func_00973CA0(var_a0);
    var_s1 = 0;
    var_s0 = ((void *)D_0058E7F0);
    do {
        func_00973EC0(var_s0, 0);
        func_0096B4A0(var_s0);
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0x16);
    var_s0_2 = 0;
    var_s1_2 = ((void *)Pes6MatchPlayers);
    do {
        if (M2C_FIELD(M2C_FIELD(var_s1_2, void **, 4), u8 *, 0x2C) != 0) {
            func_00ACFAB0(var_s1_2);
        }
        var_s0_2 += 1;
        var_s1_2 += 0x240;
    } while (var_s0_2 < 0x17);
    var_s0_3 = 0;
    var_s1_3 = ((void *)Pes6MatchPlayers);
    do {
        func_009B37F0(var_s1_3);
        var_s0_3 += 1;
        var_s1_3 += 0x240;
    } while (var_s0_3 < 0x17);
    func_00AFBFD0();
}
