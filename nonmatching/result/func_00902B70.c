/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s16 *func_008472D0();                               /* extern */
s32 func_0084A750();                                /* extern */
s32 func_00858FA0(s32);                             /* extern */
s32 func_00858FD0(M2C_UNK *, s16);                  /* extern */
s32 func_0087F400();                                /* extern */
s32 func_0087F500(s32);                             /* extern */
M2C_UNK func_00902D90(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_0091D530(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00D0F640();                            /* extern */
extern char D_0058D7AA[];
extern char D_0058D7F8[];
extern char D_00591BE4[];
extern char D_008B21C0[];
extern char D_0091EF70[];
extern char D_0091EF90[];
extern char D_0091EFB0[];
extern char D_0091EFC0[];
extern char D_00924000[];
extern char D_00924008[];
extern char D_0092408C[];

void func_00902B70(void) {
    M2C_UNK *var_a0;
    M2C_UNK *var_s0;
    M2C_UNK *var_s0_2;
    M2C_UNK *var_s1;
    M2C_UNK *var_s1_2;
    M2C_UNK var_a1;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_v0;

    if (func_00858FA0(func_00858FD0(((void *)D_008B21C0), *func_008472D0())) == 1) {
        var_a1 = 2;
        var_a0 = ((void *)D_0091EFC0);
    } else if ((*(s8 *)D_0058D7AA) != 6) {
        if ((*(s8 *)D_0058D7AA) != 5) {
            var_a1 = 4;
            var_a0 = ((void *)D_0091EF70);
        } else {
            var_a1 = 4;
            var_a0 = ((void *)D_0091EF90);
        }
    } else {
        var_a1 = 2;
        var_a0 = ((void *)D_0091EFB0);
    }
    func_00902D90(var_a0, var_a1);
    if ((u32) (*(u32 *)D_0058D7F8) >= (u32) ((*(u8 *)D_00591BE4) * 8)) {
        var_v0 = 1;
    } else {
        var_v0 = func_0084A750();
    }
    if (var_v0 != 0) {
        var_s2 = 0;
        if ((*(s32 *)D_00924008) > 0) {
            var_s1 = ((void *)D_00924000);
            var_s0 = ((void *)D_00924000);
            do {
                if (func_0087F500(M2C_FIELD(var_s1, s32 *, 0x30)) < 0x01F90003) {
                    M2C_FIELD(var_s0, s8 *, 0x28) = 3;
                    (*(s32 *)D_0092408C) = 1;
                }
                var_s2 += 1;
                var_s1 += 4;
                var_s0 += 1;
            } while (var_s2 < (*(s32 *)D_00924008));
        }
        func_00D0F640();
    } else {
        temp_v0 = func_0087F400();
        if (temp_v0 != 1) {
            var_s2_2 = 0;
            if ((*(s32 *)D_00924008) > 0) {
                var_s1_2 = ((void *)D_00924000);
                var_s0_2 = ((void *)D_00924000);
                do {
                    if (func_0087F500(M2C_FIELD(var_s1_2, s32 *, 0x30)) < temp_v0) {
                        M2C_FIELD(var_s0_2, s8 *, 0x28) = 3;
                        (*(s32 *)D_0092408C) = 1;
                    }
                    var_s2_2 += 1;
                    var_s1_2 += 4;
                    var_s0_2 += 1;
                } while (var_s2_2 < (*(s32 *)D_00924008));
            }
        }
    }
    func_0091D530(0, 1);
    func_0091D530(1, 1);
}
