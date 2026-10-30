/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00228A80(void);
void func_00AFFEB0(void) {
    s32 var_a6;
    void *temp_a5;
    void *temp_v0;

    temp_v0 = func_00228A80();
    if (temp_v0 != NULL) {
        var_a6 = 0;
        do {
            temp_a5 = temp_v0 + ((var_a6 & 0xFF) * 0xC);
            M2C_FIELD(temp_a5, s16 *, 0xC336) = 0;
            M2C_FIELD(temp_a5, s8 *, 0xC338) = 0xFF;
            M2C_FIELD(temp_a5, s8 *, 0xC339) = 0;
            M2C_FIELD(temp_a5, s16 *, 0xC33A) = 0;
            M2C_FIELD(temp_a5, s8 *, 0xC33C) = 0xFF;
            M2C_FIELD(temp_a5, s8 *, 0xC33D) = 0;
            M2C_FIELD(temp_a5, s16 *, 0xC33E) = 0;
            M2C_FIELD(temp_a5, s8 *, 0xC340) = 0xFF;
            var_a6 = (var_a6 + 1) & 0xFF;
            M2C_FIELD(temp_a5, s8 *, 0xC341) = 0;
        } while (var_a6 < 3);
    }
}
