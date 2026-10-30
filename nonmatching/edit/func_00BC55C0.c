/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * Pes6Player_GetParams(int);
M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */

void func_00BC55C0(void *arg0) {
    s32 temp_v1;
    s32 var_a1;
    void *temp_s0;
    void *var_a2;
    void *var_a3;

    if (arg0 != NULL) {
        func_001C48E8(0, 0x7C);
        temp_s0 = arg0 + 0x34;
        var_a3 = Pes6Player_GetParams(0x6000);
        var_a1 = 9;
        var_a2 = temp_s0;
        do {
            var_a1 -= 1;
            temp_v1 = M2C_FIELD(var_a3, s32 *, 4);
            M2C_FIELD(var_a2, s32 *, 0) = (s32) M2C_FIELD(var_a3, s32 *, 0);
            var_a3 += 8;
            M2C_FIELD(var_a2, s32 *, 4) = temp_v1;
            var_a2 += 8;
        } while (var_a1 > 0);
        M2C_FIELD(temp_s0, u16 *, 0x3C) = (u16) ((M2C_FIELD(temp_s0, u16 *, 0x3C) & ~0x1FF) | 0x69);
        M2C_FIELD(temp_s0, s8 *, 0x3B) = 0xFE;
        M2C_FIELD(arg0, s16 *, 0x30) = 0xCDCD;
    }
}
