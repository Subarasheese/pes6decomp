/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0017E140(void);
extern char Pes6MatchPlayers[];

void func_0027AAB0(void) {
    M2C_UNK *var_a2;
    s32 var_a3;
    void *temp_a0;
    void *temp_a1;
    void *temp_v1;

    if (func_0017E140() != 0) {
        var_a2 = ((void *)Pes6MatchPlayers);
        var_a3 = 0x17;
        do {
            temp_a1 = M2C_FIELD(var_a2, void **, 4);
            temp_a0 = M2C_FIELD(temp_a1, void **, 0);
            if ((temp_a0 != NULL) && (M2C_FIELD(temp_a0, u8 *, 3) == 0) && ((s32) M2C_FIELD(temp_a0, u8 *, 0x1BA) <= 0)) {
                temp_v1 = M2C_FIELD(temp_a0, void **, 0x28);
                if (temp_v1 != NULL) {
                    M2C_FIELD(temp_v1, f32 *, 0x30) = (f32) (-0.03125f * M2C_FIELD(temp_a1, f32 *, 0x20));
                    M2C_FIELD(M2C_FIELD(temp_a0, void **, 0x28), f32 *, 0x34) = (f32) (-0.03125f * M2C_FIELD(M2C_FIELD(var_a2, void **, 4), f32 *, 0x24));
                }
            }
            var_a3 -= 1;
            var_a2 += 0x240;
        } while (var_a3 > 0);
    }
}
