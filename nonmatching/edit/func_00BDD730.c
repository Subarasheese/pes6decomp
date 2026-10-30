/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BC57E0(s32, s32, s32);
extern s32 func_00BCF390(void);
s32 func_00221500(s32);                             /* extern */
M2C_UNK func_00BC8D40(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC90A0(M2C_UNK);                     /* extern */
M2C_UNK func_00BC91D0(M2C_UNK, s32 *);              /* extern */
s32 func_00BF4420(M2C_UNK);                         /* extern */
s32 func_00BF4480(M2C_UNK);                         /* extern */
s32 *func_00C1B400(M2C_UNK);                        /* extern */
s32 func_00C1B460(M2C_UNK, s32 *);                  /* extern */

void func_00BDD730(s32 *arg0) {
    s32 sp30;
    s8 sp9F;
    s32 *var_a1;
    s32 *var_v0;
    s32 temp_s1;
    s32 var_a0;

    if (func_00221500(func_00BF4420(0) & 0xFFFF) == 0) {
        if ((*arg0 == 1) && (!(func_00BCF390() & 0x5012) == 1)) {
            var_v0 = func_00C1B400(0);
            var_a1 = &sp30;
            var_a0 = 0x1F;
            do {
                var_a0 -= 1;
                *var_a1 = *var_v0;
                var_v0 += 4;
                var_a1 += 4;
            } while (var_a0 > 0);
            temp_s1 = func_00C1B460(0, var_a1) & 0xFFFF;
            sp9F = func_00BC57E0(func_00BF4480(0) & 0xFFFF, temp_s1, 0);
            func_00BC91D0(0, &sp30);
            func_00BC8D40(0, 8);
            goto block_9;
        }
    } else {
        func_00BC90A0(0);
block_9:
        *arg0 = 0;
    }
}
