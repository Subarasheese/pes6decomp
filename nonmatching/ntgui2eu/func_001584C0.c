/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00158308(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_001583F8(s32, M2C_UNK);                /* extern */
s32 func_00158B68();                                /* extern */
s32 func_001963C0(M2C_UNK, M2C_UNK *, M2C_UNK *);   /* extern */
M2C_UNK func_001964E0(s32, M2C_UNK, s32 *, s32 *, s32 *); /* extern */
extern char D_005BEDC0[];
extern char D_005BEDC4[];
extern char D_011E3914[];
extern char D_011E3918[];
extern char D_011E391C[];
extern char D_011E3920[];
extern char D_011E3924[];
extern char D_011E3928[];
extern char D_011E392C[];
extern char D_011E3930[];
extern char D_011E3934[];

void func_001584C0(void) {
    M2C_UNK var_a1;
    M2C_UNK var_a1_2;
    s32 *var_s2;
    s32 *var_s3;
    s32 *var_s4;
    s32 *var_s5;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v0;

    if ((*(s32 *)D_011E3930) != 0) {
        if ((*(s32 *)D_011E3934) != 0) {
            if (func_001963C0(1, ((void *)D_011E3928), ((void *)D_011E392C)) != 0) {
                (*(s32 *)D_011E3934) = 0;
            }
        }
        var_s2 = (s32 *)0x011E0000;
        goto block_28;
    }
    var_s2 = ((void *)D_011E3918);
    var_v0 = (*(s32 *)D_011E3918);
    if (!((*(s32 *)D_011E3918) & 1)) {
        var_v0 = (*(s32 *)D_011E3918);
        if (func_00158B68() == 0) {
            if (func_001963C0(1, ((void *)D_011E3928), ((void *)D_011E392C)) != 0) {
                (*(s32 *)D_005BEDC4) = M2C_FIELD(((void *)D_011E3914), s32 *, 0);
                (*(s32 *)D_005BEDC0) = 0;
                if (M2C_FIELD(((void *)D_011E392C), s32 *, 0) != -2) {
                    if (M2C_FIELD(((void *)D_011E392C), s32 *, 0) < -1) {
                        var_s3 = (s32 *)0x011E0000;
                        if (M2C_FIELD(((void *)D_011E392C), s32 *, 0) != -5) {
                            var_s4 = (s32 *)0x011E0000;
                            goto block_23;
                        }
                        var_s4 = ((void *)D_011E391C);
                        var_s5 = ((void *)D_011E3920);
                        var_a0 = (*(s32 *)D_011E391C);
                        var_a1 = 1;
                        goto block_22;
                    }
                    var_s4 = (s32 *)0x011E0000;
                    if (M2C_FIELD(((void *)D_011E392C), s32 *, 0) != -1) {
                        var_s3 = ((void *)D_011E3924);
                        if (M2C_FIELD(((void *)D_011E392C), s32 *, 0) == 0) {
                            var_s5 = (s32 *)0x011E0000;
                            if ((*(s32 *)D_011E3924) == 0) {
                                var_s4 = ((void *)D_011E391C);
                                var_a0_2 = (*(s32 *)D_011E391C);
                                var_a1_2 = 2;
                            } else {
                                var_a0_2 = *(s32 *)0x011E391C;
                                var_a1_2 = 1;
                            }
                            func_00158308(var_a0_2, var_a1_2, *(s32 *)0x011E3920);
                        } else {
block_23:
                            var_s5 = (s32 *)0x011E0000;
                        }
                    } else {
                        var_s5 = ((void *)D_011E3920);
                        var_a0 = *(s32 *)0x011E391C;
                        var_a1 = 1;
                        goto block_22;
                    }
                } else {
                    var_s4 = ((void *)D_011E391C);
                    var_s5 = ((void *)D_011E3920);
                    var_a0 = (*(s32 *)D_011E391C);
                    var_a1 = 2;
block_22:
                    var_s3 = (s32 *)0x011E0000;
                    func_00158308(var_a0, var_a1, (*(s32 *)D_011E3920));
                }
                if (M2C_FIELD(((void *)D_011E392C), s32 *, 0x392C) < -0xA) {
                    func_001583F8(M2C_FIELD(var_s4, s32 *, 0x391C), 3);
                }
                temp_a0 = M2C_FIELD(((void *)D_011E3914), s32 *, 0x3914) == 0;
                M2C_FIELD(var_s4, s32 *, 0x391C) = 0;
                M2C_FIELD(((void *)D_011E3914), s32 *, 0x3914) = temp_a0;
                M2C_FIELD(var_s5, s32 *, 0x3920) = 0;
                M2C_FIELD(var_s3, s32 *, 0x3924) = 0;
                func_001964E0(temp_a0, 0, var_s4 + 0x391C, var_s5 + 0x3920, var_s3 + 0x3924);
            }
block_28:
            var_v0 = M2C_FIELD(var_s2, s32 *, 0x3918);
        }
    }
    temp_v0 = var_v0 + 1;
    M2C_FIELD(var_s2, s32 *, 0x3918) = temp_v0;
    if (temp_v0 == 0x3C) {
        M2C_FIELD(var_s2, s32 *, 0x3918) = 0;
    }
}
