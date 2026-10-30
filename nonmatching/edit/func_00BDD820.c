/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00221500(s32);                             /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00BC40A0();                            /* extern */
M2C_UNK func_00BC93A0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC9B60(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BC9EE0(M2C_UNK);                         /* extern */
s32 func_00BC9F00();                                /* extern */
s32 func_00BCF3A0(M2C_UNK);                         /* extern */
M2C_UNK func_00BDD730(M2C_UNK *);                   /* extern */
s32 func_00BDD9D0(M2C_UNK *);                       /* extern */
M2C_UNK func_00BDDF60(M2C_UNK);                     /* extern */
s32 func_00BF3B70(M2C_UNK);                         /* extern */
s32 func_00BF4480(M2C_UNK);                         /* extern */
void *func_00C1B3E0(M2C_UNK);                       /* extern */
s32 func_00C1B460(M2C_UNK);                         /* extern */
extern char D_00CBD730[];

s32 func_00BDD820(s32 *arg0, s32 *arg1) {
    M2C_UNK var_a1;
    M2C_UNK var_s2;
    s32 *var_s0;
    s32 *var_s1;
    s32 temp_v0;
    s32 var_v1;

    var_s1 = arg0;
    var_s0 = arg1;
    if (func_00BDD9D0(((void *)D_00CBD730)) == 0) {
        if ((func_00BCF3A0(0x08000000) != 0) && ((func_00C1B460(0) & 0xFFFF) == 0xFFFF)) {
            func_0026E840(0x84028400);
            return 3;
        }
        if (((u64) ((s64) M2C_FIELD(func_00C1B3E0(0), u8 *, 1) << 0x38) >> 0x3C) != 0xD) {
            func_00BC40A0();
        }
        if ((func_00BC9F00() != 0) && (func_00BCF3A0(0x02000000) != 0) && (func_00221500(func_00BF4480(0) & 0xFFFF) == 0)) {
            var_s2 = 1;
            if (func_00BC9EE0(0) != 1) {
                var_a1 = 1;
                var_s2 = 0;
            } else {
                var_a1 = 0xC;
            }
            func_00BC9B60(0, var_a1);
            func_00BC93A0(0, var_s2);
            func_0026E840(0x84028400);
        }
        temp_v0 = func_00BF3B70(0);
        if (temp_v0 == 1) {
            var_v1 = 0x1F;
            do {
                var_v1 -= 1;
                *var_s0 = *var_s1;
                var_s1 += 4;
                var_s0 += 4;
            } while (var_v1 > 0);
        }
        if (func_00BC9F00() != 0) {
            func_00BDD730(((void *)D_00CBD730));
        }
        func_00BDDF60(1);
        return temp_v0;
    }
    func_0026E840(0x8400F803);
    return 0;
}
