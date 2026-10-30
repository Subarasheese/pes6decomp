/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern void func_00BBB960(u32);
M2C_UNK func_00849420(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00973EC0(void *, M2C_UNK);             /* extern */
s32 func_00C01090(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_005926D8[];
extern char D_008B1180[];
extern char D_008B145C[];
extern char D_008B14F2[];

void func_00C36410(void) {
    M2C_UNK *var_s0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0_2;
    s32 var_s1;

    if ((func_00C01090(0x2A) == 0) && (func_002DCA30() != 0)) {
        func_00BBB960((*(u32 *)D_008B145C));
        var_s1 = 0;
        var_s0 = ((void *)D_008B1180);
        (*(f32 *)D_005926D8) = (f32) (*(s16 *)D_008B14F2);
        do {
            if (var_s1 == 0xFF) {
                var_a0 = 1;
            } else {
                var_a0 = var_s1 % 23;
            }
            func_00849420(((void *)Pes6MatchPlayers) + (var_a0 * 0x240), var_s0, 0, 1);
            var_s1 += 1;
            var_s0 += 0x1A;
        } while (var_s1 < 0x17);
        var_s0_2 = 0;
        do {
            if (var_s0_2 == 0xFF) {
                var_a0_2 = 1;
            } else {
                var_a0_2 = var_s0_2 % 23;
            }
            func_00973EC0(((void *)Pes6MatchPlayers) + (var_a0_2 * 0x240), 1);
            var_s0_2 += 1;
        } while (var_s0_2 < 0x17);
    }
}
