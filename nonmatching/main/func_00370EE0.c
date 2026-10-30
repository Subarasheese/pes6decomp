/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003258F0(int, int);
extern int func_00335370(void);
extern int func_003387D0(void *, int);
s32 func_008FFAA0();                                /* extern */
extern char D_003BD4B0[];
extern M2C_UNK func_00370D10;

s32 func_00370EE0(void *arg0) {
    M2C_UNK *var_v1;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 var_a0;
    void *temp_s0;

    temp_s1 = M2C_FIELD(arg0, s32 *, 0x40);
    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    M2C_FIELD(temp_s0, s32 *, 4) = 0xC;
    M2C_FIELD(temp_s0, s32 *, 8) = 0;
    M2C_FIELD(temp_s0, s32 *, 0) = func_008FFAA0();
    var_v1 = ((void *)D_003BD4B0);
    var_a0 = 0;
    if (M2C_FIELD(temp_s0, s32 *, 4) > 0) {
        do {
            M2C_FIELD(var_v1, s32 *, 0xC) = 0;
            var_a0 += 1;
            var_v1 += 0x10;
        } while (var_a0 < M2C_FIELD(temp_s0, s32 *, 4));
    }
    temp_s0_2 = M2C_FIELD(temp_s0, s32 *, 0) != func_003258F0(temp_s1, 0);
    M2C_FIELD(func_00335370(), s32 *, 0x1008) = temp_s0_2;
    func_003387D0(arg0, (s32) &func_00370D10);
    return 1;
}
