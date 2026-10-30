/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008214E0();                                /* extern */
M2C_UNK func_009E2CD0();                            /* extern */
M2C_UNK func_009E2CF0();                            /* extern */
s32 func_009E2DA0();                                /* extern */
M2C_UNK func_009E3510(s32, M2C_UNK);                /* extern */
extern char D_00A7DF88[];
extern char D_00A7DF90[];

s32 func_009E8BB0(void *arg0, s32 (*arg1)(s32), s32 (*arg2)(s32), M2C_UNK (*arg3)(void *), s32 (*arg4)(void *), M2C_UNK (*arg5)(void *, s32)) {
    M2C_UNK (*temp_v0_2)(s32);
    M2C_UNK (*temp_v1_2)(s32, s32);
    s32 (*temp_v0)(s32);
    s32 temp_s1;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s5;
    s32 var_v0;
    void *temp_s3;
    void *temp_s4;

    var_s5 = 0;
    temp_s3 = arg0 + 0x70;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x74);
    temp_s4 = M2C_FIELD(arg0, void **, 0x54);
    switch (temp_v1) {                              /* irregular */
    case 1:
        if (M2C_FIELD(arg0, u8 *, 0x5D) != 0) {
            func_009E2CD0();
        }
        if (func_009E2DA0() != 0) {
            M2C_FIELD(temp_s3, s32 *, 4) = (s32) (M2C_FIELD(temp_s3, s32 *, 4) + 1);
        }
        break;
    case 0:
        temp_v0 = M2C_FIELD(temp_s4, s32 (**)(s32), 0x28);
        if (temp_v0 != NULL) {
            var_s2 = temp_v0(M2C_FIELD(temp_s4, s32 *, 0));
        } else {
            var_s2 = -1;
        }
        temp_s1 = arg1(var_s2);
        (*(s32 *)D_00A7DF88) = arg2(var_s2);
        if (arg4 == NULL) {
            var_v0 = 0;
        } else {
            var_v0 = arg4(temp_s4);
        }
        (*(s32 *)D_00A7DF90) = var_v0;
        arg3(temp_s4);
        func_009E3510(temp_s1, 0);
        M2C_FIELD(temp_s3, s32 *, 4) = (s32) (M2C_FIELD(temp_s3, s32 *, 4) + 1);
        break;
    case 2:
        func_009E2CF0();
        M2C_FIELD(temp_s3, s32 *, 4) = (s32) (M2C_FIELD(temp_s3, s32 *, 4) + 1);
        /* fallthrough */
    case 3:
        if (func_008214E0() == 1) {
            temp_v0_2 = M2C_FIELD(temp_s4, M2C_UNK (**)(s32), 8);
            if (temp_v0_2 != NULL) {
                temp_v0_2(M2C_FIELD(temp_s4, s32 *, 0));
            }
            arg5(temp_s4, (*(s32 *)D_00A7DF90));
            temp_v1_2 = M2C_FIELD(temp_s4, M2C_UNK (**)(s32, s32), 0x20);
            if (temp_v1_2 != NULL) {
                temp_v1_2(M2C_FIELD(temp_s4, s32 *, 0), (*(s32 *)D_00A7DF88) - 1);
            }
            var_s5 = 1;
        }
        break;
    }
    return var_s5;
}
