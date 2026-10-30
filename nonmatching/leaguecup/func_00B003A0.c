/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
extern u8 func_00225820(void);
M2C_UNK func_00AFA090();                            /* extern */
M2C_UNK func_00B00700(s32, void *, void *);         /* extern */
extern s32 D_003EAD54;

void func_00B003A0(void) {
    s16 temp_v0;
    s32 temp_a0;
    s32 temp_s0;
    s32 var_a0;
    void *var_a1;
    void *var_a2;

    temp_s0 = D_003EAD54;
    temp_a0 = func_00225820() & 0xFF;
    if (temp_s0 != 0) {
        var_a2 = temp_s0 + 0x8A0;
        var_a1 = func_002260F0(temp_a0) + 0x4C;
        var_a0 = 0x5B;
        do {
            var_a0 -= 1;
            temp_v0 = M2C_FIELD(var_a2, s16 *, 2);
            M2C_FIELD(var_a1, s16 *, 0) = (s16) M2C_FIELD(var_a2, s16 *, 0);
            var_a2 += 4;
            M2C_FIELD(var_a1, s16 *, 2) = temp_v0;
            var_a1 += 4;
        } while (var_a0 > 0);
        func_00B00700(var_a0, var_a1, var_a2);
        func_00AFA090();
    }
}
