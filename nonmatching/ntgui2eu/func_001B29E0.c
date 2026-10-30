/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B2D08(void *);                      /* extern */
s32 func_001B3700(void *, s32 (*)(void *));         /* extern */
extern void *D_005CC508;

s32 func_001B29E0(void *arg0) {
    s16 temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_s2;
    s32 var_v0;
    void *var_v1;

    if (arg0 == NULL) {
        return func_001B3700(D_005CC508, func_001B29E0);
    }
    var_v1 = M2C_FIELD(arg0, void **, 0x54);
    if (var_v1 != NULL) {
        var_v0 = M2C_FIELD(var_v1, s32 *, 0x38);
    } else {
        var_v1 = D_005CC508;
        M2C_FIELD(arg0, void **, 0x54) = var_v1;
        var_v0 = M2C_FIELD(var_v1, s32 *, 0x38);
    }
    if (var_v0 == 0) {
        func_001B2D08(var_v1);
    }
    temp_v1 = M2C_FIELD(arg0, s16 *, 0xC);
    if (temp_v1 & 8) {
        var_s2 = M2C_FIELD(arg0, s32 *, 0x10);
        var_a0 = 0;
        if (var_s2 != 0) {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0);
            M2C_FIELD(arg0, s32 *, 0) = var_s2;
            var_s0 = temp_v0 - var_s2;
            if (!(temp_v1 & 3)) {
                var_a0 = M2C_FIELD(arg0, s32 *, 0x14);
            }
            M2C_FIELD(arg0, s32 *, 8) = var_a0;
            if (var_s0 > 0) {
loop_16:
                temp_v0_2 = M2C_FIELD(arg0, s32 (**)(s32, s32, s32), 0x24)(M2C_FIELD(arg0, s32 *, 0x1C), var_s2, var_s0);
                temp_v1_2 = temp_v0_2;
                var_s0 -= temp_v1_2;
                if (temp_v1_2 > 0) {
                    var_s2 += temp_v1_2;
                    if (var_s0 <= 0) {
                        goto block_18;
                    }
                    goto loop_16;
                }
                M2C_FIELD(arg0, s16 *, 0xC) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0xC) | 0x40);
                return -1;
            }
block_18:
            /* Duplicate return node #19. Try simplifying control flow for better match */
            return 0;
        }
    }
    return 0;
}
