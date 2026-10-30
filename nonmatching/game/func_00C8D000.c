/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_00C8D120(M2C_UNK *, s32);              /* extern */
M2C_UNK func_00C8E460();                            /* extern */
extern s8 D_003EA898;
extern u8 D_003EA89C;
extern char D_00591A90[];
extern char Pes6MatchSquads[];
extern char D_00CCD570[];
extern char D_00CCD88D[];

void func_00C8D000(void) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a1;
    M2C_UNK *var_s1;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    s32 var_s0;
    s8 var_v0;
    u8 var_a2;

    D_003EA89C = 0xB;
    if (func_002DCA30() == 0) {
        var_v0 = 0xB;
    } else {
        var_v0 = 7;
    }
    D_003EA898 = var_v0;
    if ((*(u8 *)D_00CCD88D) == 0) {
        var_a2 = D_003EA89C;
        var_a5 = 0;
        var_a1 = ((void *)Pes6MatchSquads);
        var_a0 = ((void *)D_00591A90);
        do {
            var_a3 = 0;
            var_a4 = 0;
loop_7:
            if (M2C_FIELD((var_a1 + (M2C_FIELD((var_a0 + var_a4), u8 *, 7) * 0x348)), u8 *, 0xD4) != 0) {
                var_a3 += 1;
            }
            var_a4 += 1;
            if (var_a4 < 0xB) {
                goto loop_7;
            }
            if (var_a3 < (var_a2 & 0xFF)) {
                var_a2 = var_a3 & 0xFF;
            }
            var_a5 += 1;
            var_a1 += 0x6900;
            var_a0 += 0x8B;
        } while (var_a5 < 2);
        D_003EA89C = var_a2;
    }
    var_s0 = 0;
    var_s1 = ((void *)D_00CCD570);
    do {
        func_00C8D120(var_s1, var_s0);
        var_s0 += 1;
        var_s1 += 0x18C;
    } while (var_s0 < 2);
    func_00C8E460();
}
