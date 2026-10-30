/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
void func_009B5020(void *arg0) {
    s32 var_a0;
    s32 var_a2;
    s32 var_s1;
    void *temp_a0;
    void *temp_v1;
    void *var_a1;
    void *var_s0;

    var_s1 = 0;
    var_s0 = arg0;
    do {
        var_a2 = 0;
        var_a1 = arg0;
        var_a0 = 0;
loop_2:
        temp_v1 = var_a1 + var_a0;
        M2C_FIELD(temp_v1, s32 *, 0x8C) = 0;
        var_a2 += 3;
        M2C_FIELD(temp_v1, s32 *, 0xBC) = 0;
        var_a1 += 0x84;
        M2C_FIELD(temp_v1, s32 *, 0xEC) = 0;
        var_a0 += 0xC;
        if (var_a2 < 9) {
            goto loop_2;
        }
        temp_a0 = M2C_FIELD(var_s0, void **, 0x84);
        if (temp_a0 != NULL) {
            func_001D7F10(temp_a0);
            M2C_FIELD(var_s0, void **, 0x84) = NULL;
        }
        if (M2C_FIELD(var_s0, s32 *, 0x88) != 0) {
            func_001D7F10(M2C_FIELD(var_s0, void **, 0x84));
            M2C_FIELD(var_s0, s32 *, 0x88) = 0;
        }
        var_s1 += 1;
        var_s0 += 0x2C;
    } while (var_s1 < 0xC);
}
