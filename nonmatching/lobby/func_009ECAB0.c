/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
void func_009ECAB0(void *arg0) {
    s32 var_a0;
    s32 var_s2;
    void *temp_v1;
    void *var_a1;
    void *var_s1;

    var_s2 = 0;
    var_s1 = arg0;
    do {
        func_001D7F10(M2C_FIELD(var_s1, void **, 0x1B8));
        var_s2 += 1;
        M2C_FIELD(var_s1, void **, 0x1B8) = NULL;
        var_s1 += 4;
    } while (var_s2 < 0xF);
    var_a0 = 0;
    var_a1 = arg0;
    do {
        M2C_FIELD(var_a1, s32 *, 0x1F4) = 0;
        var_a0 += 8;
        M2C_FIELD(var_a1, s32 *, 0x1F8) = 0;
        M2C_FIELD(var_a1, s32 *, 0x1FC) = 0;
        M2C_FIELD(var_a1, s32 *, 0x200) = 0;
        M2C_FIELD(var_a1, s32 *, 0x204) = 0;
        M2C_FIELD(var_a1, s32 *, 0x208) = 0;
        M2C_FIELD(var_a1, s32 *, 0x20C) = 0;
        M2C_FIELD(var_a1, s32 *, 0x210) = 0;
        var_a1 += 0x20;
    } while (var_a0 < 0x5B);
    temp_v1 = (var_a0 * 4) + arg0;
    M2C_FIELD(temp_v1, s32 *, 0x1F4) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x1F8) = 0;
    M2C_FIELD(temp_v1, s32 *, 0x1FC) = 0;
}
