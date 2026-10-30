/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00165778(void *);
void func_00187980(void *arg0) {
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s1;
    void **temp_v0;

    var_s1 = 0;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x984) * M2C_FIELD(arg0, s32 *, 0x9C8);
    temp_s2 = (s32) ((temp_v1 > -1) ? temp_v1 : (temp_v1 + 0xFFF)) >> 0xC;
    if (M2C_FIELD(arg0, s32 *, 0x9C4) > 0) {
        do {
            temp_v0 = (var_s1 * 4) + M2C_FIELD(arg0, s32 *, 0x980);
            var_s1 += 1;
            func_00165778(*temp_v0);
        } while (var_s1 < M2C_FIELD(arg0, s32 *, 0x9C4));
    }
}
