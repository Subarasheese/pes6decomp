/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4CE0(void *, s8);
M2C_UNK func_0020E310(M2C_UNK, s8 *);               /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002F2ED0(void *);                      /* extern */
M2C_UNK func_002F3E20(void *, M2C_UNK, s32, s8 *);  /* extern */
M2C_UNK func_008179F0(f32 *, M2C_UNK);              /* extern */
s32 func_0081E550(M2C_UNK);                         /* extern */
s32 func_0081E630(M2C_UNK);                         /* extern */
s32 func_0081EB60(M2C_UNK);                         /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
extern char D_00886898[];
extern char D_008868B0[];
extern char D_008868B4[];
extern char D_008868B8[];
extern char D_008868BC[];
extern char D_008A3C78[];
extern char D_008A3C88[];
extern char D_008A3C90[];
extern void *D_008A3C98;

s32 func_00817CF0(void) {
    f32 sp20;
    f32 sp24;
    f32 sp28;
    f32 sp2C;
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp4C;
    s8 sp5C;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_v0;
    s8 *var_v1;

    var_v0 = 4;
    var_v1 = &sp5C;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    if ((*(s32 *)D_008A3C88) == 1) {
        (*(s32 *)D_008A3C78) = 4;
    }
    if (func_0081EB60(0x10) == 0) {
        if (func_0081E550(0x10) == 0) {
            if ((func_0081EB60(0x40) != 0) || (func_0081E550(0x40) != 0)) {
                temp_a0 = (*(s32 *)D_008A3C90) + 1;
                (*(s32 *)D_008A3C90) = temp_a0;
                if (temp_a0 >= (*(s32 *)D_00886898)) {
                    (*(s32 *)D_008A3C90) = (*(s32 *)D_00886898) - 1;
                } else {
                    func_0026E840(0x8400F802);
                }
                sp30 = (*(f32 *)D_008868B0);
                sp34 = (*(f32 *)D_008868B4);
                sp38 = (*(f32 *)D_008868B8);
                sp3C = (*(f32 *)D_008868BC);
                func_008179F0(&sp30, 2);
            }
        } else {
            goto block_8;
        }
    } else {
block_8:
        temp_v1 = (*(s32 *)D_008A3C90) - 1;
        (*(s32 *)D_008A3C90) = temp_v1;
        if (temp_v1 < 0) {
            (*(s32 *)D_008A3C90) = 0;
        } else {
            func_0026E840(0x8400F802);
        }
        sp40 = (*(f32 *)D_008868B0);
        sp44 = (*(f32 *)D_008868B4);
        sp48 = (*(f32 *)D_008868B8);
        sp4C = (*(f32 *)D_008868BC);
        func_008179F0(&sp40, 2);
    }
    if (func_0081EC20(0x4000) == 0) {
        if (func_0081E630(0x4000) == 0) {
            if ((func_0081EC20(0x1000) != 0) || (func_0081E630(0x1000) != 0)) {
                temp_a0_2 = (*(s32 *)D_00886898) - 1;
                if ((*(s32 *)D_008A3C90) == temp_a0_2) {
                    (*(s32 *)D_008A3C78) = 4;
                    (*(s32 *)D_008A3C90) = 1;
                    func_0026E840(0x84008401);
                } else {
                    (*(s32 *)D_008A3C90) = temp_a0_2;
                    func_0026E840(0x84008401);
                    sp20 = (*(f32 *)D_008868B0);
                    sp24 = (*(f32 *)D_008868B4);
                    sp28 = (*(f32 *)D_008868B8);
                    sp2C = (*(f32 *)D_008868BC);
                    func_008179F0(&sp20, 2);
                }
            }
        } else {
            goto block_22;
        }
    } else {
block_22:
        (*(s32 *)D_008A3C78) = 4;
        func_0026E840(0x84028400);
    }
    func_002F4CE0(D_008A3C98, (s8) (*(s32 *)D_008A3C90));
    var_s0 = 0;
loop_37:
    if (var_s0 < (*(s32 *)D_00886898)) {
        if (var_s0 != (*(s32 *)D_008A3C90)) {
            func_0020E310(2, &sp5C);
        } else {
            func_0020E310(3, &sp5C);
        }
        func_002F3E20(D_008A3C98, 1, var_s0, &sp5C);
        var_s0 += 1;
        goto loop_37;
    }
    func_002F2ED0(D_008A3C98);
    return 0;
}
