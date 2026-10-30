/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern void func_00207360(int);
extern u8 func_002645A0(void *, s32);
M2C_UNK func_00204D90();                            /* extern */
M2C_UNK func_00209A00(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00271E40();                            /* extern */
s32 func_009B45F0();                                /* extern */
M2C_UNK func_009B6810();                            /* extern */
M2C_UNK func_00C74810();                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591DB5[];

void func_00804190(void *arg0) {
    M2C_UNK *var_s1_2;
    s32 var_s1;
    s32 var_s2;

    var_s1 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x4E8) != 0) {
        func_00271E40();
        func_009B6810();
        if ((*(s8 *)D_00591DB5) == 0) {
            func_00204D90();
        }
        func_00C74810();
        if (!(func_009B45F0() & 0xFF)) {
            M2C_FIELD(arg0, s32 *, 0x4E8) = 0;
            goto block_5;
        }
    } else {
block_5:
        var_s1 = 1;
    }
    if (var_s1 != 0) {
        var_s2 = 0;
        var_s1_2 = ((void *)Pes6MatchPlayers);
        do {
            func_00209A00(M2C_FIELD(var_s1_2, s32 *, 4), 0, 0);
            func_00207360(M2C_FIELD(var_s1_2, s32 *, 4));
            var_s2 = (var_s2 + 1) & 0xFF;
            var_s1_2 += 0x240;
        } while (var_s2 < 0x17);
        func_00264790(arg0, func_002645A0(arg0, 1));
    }
}
