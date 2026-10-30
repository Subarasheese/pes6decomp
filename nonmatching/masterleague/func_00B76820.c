/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern u8 func_002243B0(s32, s32);
s8 func_0094DC80(s32, s32);                         /* extern */
M2C_UNK func_0094DCE0(s32, s32);                    /* extern */
extern void *D_003EAF00;

void func_00B76820(void) {
    s32 temp_s0;
    s32 var_s2;
    s32 var_s2_2;
    void *temp_s1;

    temp_s1 = D_003EAF00;
    if (temp_s1 != NULL) {
        temp_s0 = func_00225820() & 0xFF;
        var_s2 = 0;
        do {
            if (M2C_FIELD((temp_s1 + var_s2), u8 *, 0xB84) == 1) {
                func_0094DCE0(temp_s0 & 0xFF, func_002243B0(temp_s0 & 0xFF, var_s2 & 0xFF) & 0xFF);
            }
            var_s2 += 1;
        } while (var_s2 < 0x20);
        var_s2_2 = 0;
        if ((s32) M2C_FIELD(temp_s1, u8 *, 0x7A1) > 0) {
            do {
                M2C_FIELD((temp_s1 + var_s2_2), s8 *, 0x8F8) = func_0094DC80(temp_s0 & 0xFF, func_002243B0(temp_s0 & 0xFF, var_s2_2 & 0xFF) & 0xFF);
                var_s2_2 += 1;
            } while (var_s2_2 < (s32) M2C_FIELD(temp_s1, u8 *, 0x7A1));
        }
    }
}
