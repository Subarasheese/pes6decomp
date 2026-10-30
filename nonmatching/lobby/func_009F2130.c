/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00824BF0(M2C_UNK);                     /* extern */
s32 func_0097F740(u8, void *);                      /* extern */
s8 func_0097F9F0();                                 /* extern */
s32 func_00980430(u8, void *);                      /* extern */
s8 func_00980640();                                 /* extern */
s32 func_00980740();                                /* extern */
M2C_UNK func_0099D030(M2C_UNK);                     /* extern */
M2C_UNK func_009DEA70(M2C_UNK);                     /* extern */
M2C_UNK func_009DEB80(s32, void *);                 /* extern */
u8 func_009E0290();                                 /* extern */
M2C_UNK func_009E0370(u8, s32);                     /* extern */
M2C_UNK func_009E0430(u8, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_009F10D0(u8);                          /* extern */
M2C_UNK func_00D0C770(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern char D_00A7E020[];
extern M2C_UNK func_009F1510;
extern M2C_UNK func_009F15B0;

s32 func_009F2130(void) {
    s32 temp_a0;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;
    s8 temp_v0_2;
    s8 temp_v0_3;
    s8 var_a1;
    u8 temp_a0_2;
    u8 var_a0_2;
    void *temp_a1;
    void *var_a0;

    func_0099D030(1);
    temp_v0 = func_00980740();
    switch (temp_v0) {                              /* irregular */
    case 0:
        return 0;
    case 4:
        func_0099D030(0);
        if (M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), u8 *, 0) != 0) {
            temp_v0_2 = func_00980640();
            if ((temp_v0_2 >= 0) && (temp_v0_2 < 0x1A)) {
                M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), s8 *, 4) = temp_v0_2;
                func_00824BF0(0);
                goto block_12;
            }
            goto block_47;
        }
        temp_v0_3 = func_0097F9F0();
        if ((temp_v0_3 >= 0) && (temp_v0_3 < 0x1A)) {
            M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), s8 *, 4) = temp_v0_3;
block_12:
            var_a1 = 0;
            var_s0 = -1;
            var_a0 = M2C_FIELD(((void *)D_00A7E020), void **, 0);
loop_13:
            M2C_FIELD((var_a0 + var_a1), s8 *, 8) = var_a1;
            M2C_FIELD((*(s32 *)0xA7E020 + var_a1), s8 *, 0x21) = -1;
            var_a1 += 1;
            temp_a0 = var_a1 < 0x19;
            if (temp_a0 != 0) {
                var_a0 = M2C_FIELD(((void *)D_00A7E020), void **, -0x1FE0);
                goto loop_13;
            }
            temp_a1 = M2C_FIELD(((void *)D_00A7E020), void **, 0);
            if (M2C_FIELD(temp_a1, u8 *, 1) != 0) {
                var_s1 = 0;
loop_38:
                temp_a0_2 = M2C_FIELD(temp_a1, u8 *, 4);
                if (var_s1 < (s32) temp_a0_2) {
                    if (var_s1 < 0) {
                        var_a0_2 = 0;
                    } else if (var_s1 < 0x19) {
                        var_a0_2 = M2C_FIELD((temp_a1 + var_s1), u8 *, 8);
                    } else {
                        var_a0_2 = 0;
                    }
                    if (M2C_FIELD(temp_a1, u8 *, 0) != 0) {
                        var_v0 = func_00980430(var_a0_2, temp_a1);
                    } else {
                        var_v0 = func_0097F740(var_a0_2, temp_a1);
                    }
                    if (M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), s32 *, 0x3C) == var_v0) {
                        var_s0 = var_s1;
                    }
                    var_s1 += 1;
                    goto loop_38;
                }
                func_009E0370(temp_a0_2, var_s0);
            } else {
                func_009DEB80(temp_a0, temp_a1);
                if (M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), u8 *, 0) == 0) {
                    func_009DEA70(0);
                    func_009E0430((u8) M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), s8 *, 4), 0x19, &func_009F1510, 0);
                } else {
                    func_009DEA70(1);
                    func_009E0430((u8) M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), s8 *, 4), 0x19, &func_009F15B0, 0);
                }
            }
            M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), u8 *, 3) = func_009E0290();
            if ((u8) M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), s8 *, 4) != 0) {
                M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), s8 *, 7) = 0;
                func_009F10D0(M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), u8 *, 3));
                M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), u8 *, 1) = 1U;
                func_00D0C770(0xC, 0x6C0041, 1);
            } else {
                func_009F10D0(-1U);
                func_0026E840(0x8C008005);
                M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), u8 *, 1) = 4U;
            }
            return 0;
        }
block_47:
        func_0026E840(0x8C008005);
        M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), s8 *, 5) = 2;
        M2C_FIELD(M2C_FIELD(((void *)D_00A7E020), void **, 0), u8 *, 1) = 9U;
        return 0;
    default:
        func_0099D030(0);
        goto block_47;
    }
}
