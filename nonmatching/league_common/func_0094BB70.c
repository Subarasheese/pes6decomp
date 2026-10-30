/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002260A0(void);
s32 func_00230410();                                /* extern */
M2C_UNK func_00931150(void *, M2C_UNK, s32, s32);   /* extern */
M2C_UNK func_00986580(s32, s32);                    /* extern */
M2C_UNK func_00986830(s32, s32);                    /* extern */

void func_0094BB70(s32 arg0) {
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_s0;
    s32 var_s1;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_002260A0();
    if (temp_v0 != NULL) {
        temp_a3 = arg0 & 0xFF;
        temp_a2 = temp_a3 * 0x1A;
        temp_v0_2 = temp_a2 + temp_v0;
        M2C_FIELD(temp_v0_2, s16 *, 0x19B20) = 0;
        M2C_FIELD(temp_v0_2, s8 *, 0x19B22) = 0xFF;
        func_00931150(temp_v0_2 + 0x19B24, 0xFF, temp_a2, temp_a3);
        temp_s0 = arg0 & 0xFF;
        var_s1 = 0;
        do {
            if (func_00230410() == 1) {
                func_00986830(var_s1 & 0xFF, temp_s0);
            } else {
                func_00986580(var_s1 & 0xFF, temp_s0);
            }
            var_s1 += 1;
        } while (var_s1 < 4);
    }
}
