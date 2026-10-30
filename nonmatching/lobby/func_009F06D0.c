/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern s32 func_001D6E70(s32, s32, s32);
extern s32 func_001D6D30(s32, s32);
extern s32 func_001F08B0(s32);
M2C_UNK func_0099B420(s32, s32, s32);               /* extern */
s8 *func_0099BE20();                                /* extern */
extern char D_00A03518[];

void func_009F06D0(s32 *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    s32 spAC;
    s32 (*temp_s0_2)(s8 *, s32, s32);
    s32 (*temp_s6)(s8 *, s32, s32);
    s32 *var_s2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 var_s4;
    s32 var_s4_2;
    s32 var_s7;
    s8 *temp_v0;
    s8 *temp_v0_4;
    void *var_s3;

    spAC = arg3;
    if ((arg0 != NULL) && (arg1 != 0) && (arg2 != NULL) && (arg3 > 0)) {
        var_s7 = 0;
        if (arg3 > 0) {
            var_s3 = arg2;
            var_s2 = arg0;
            do {
                temp_s1 = M2C_FIELD(var_s3, s32 *, 0);
                if (temp_s1 < 0) {
                    *var_s2 = 0;
                } else {
                    temp_s0 = *var_s2;
                    if (temp_s0 == 0) {
                        temp_s0_2 = M2C_FIELD(var_s3, s32 (**)(s8 *, s32, s32), 4);
                        var_s4 = 0;
                        if (arg1 != 0) {
                            var_s4 = func_001F08B0(func_001D6D30(arg1, temp_s1));
                            if (temp_s0_2 != NULL) {
                                temp_v0 = func_0099BE20();
                                *temp_v0 = 0;
                                temp_v0_2 = temp_s0_2(temp_v0, var_s4, arg4);
                                if (temp_v0_2 != 0) {
                                    var_s4 = temp_v0_2;
                                }
                            }
                        }
                        if (var_s4 != 0) {

                        } else {
                            var_s4 = (s32) ((void *)D_00A03518);
                        }
                        temp_v0_3 = func_001D6E70(arg1, temp_s1, var_s4);
                        func_0099B420(temp_v0_3, arg1, temp_s1);
                        *var_s2 = temp_v0_3;
                    } else {
                        temp_s6 = M2C_FIELD(var_s3, s32 (**)(s8 *, s32, s32), 4);
                        var_s4_2 = 0;
                        if (arg1 != 0) {
                            var_s4_2 = func_001F08B0(func_001D6D30(arg1, temp_s1));
                            if (temp_s6 != NULL) {
                                temp_v0_4 = func_0099BE20();
                                *temp_v0_4 = 0;
                                temp_v0_5 = temp_s6(temp_v0_4, var_s4_2, arg4);
                                if (temp_v0_5 != 0) {
                                    var_s4_2 = temp_v0_5;
                                }
                            }
                        }
                        if (var_s4_2 != 0) {
                            func_001DF820(M2C_FIELD(temp_s0, void **, 0xC), var_s4_2);
                            func_0099B420(temp_s0, arg1, temp_s1);
                        }
                    }
                }
                var_s7 += 1;
                var_s3 += 8;
                var_s2 += 4;
            } while (var_s7 < spAC);
        }
    }
}
