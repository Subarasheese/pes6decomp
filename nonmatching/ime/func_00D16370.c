/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_001C80F0(M2C_UNK *, s32 *);                /* extern */
M2C_UNK func_00D165B0(s32);                         /* extern */
M2C_UNK func_00D16730(s32 *);                       /* extern */
extern char D_00D1F4B0[];
extern char D_00D1F4D0[];
extern char D_00D1F4F0[];
extern char D_00D1F510[];
extern char D_00D1F530[];
extern char D_00D1F550[];
extern char D_00D395A5[];
extern char D_00D39640[];

s32 func_00D16370(s32 arg0, s32 arg1) {
    s32 sp10;
    s32 sp30;
    s32 sp50;
    s32 sp70;
    s32 sp90;
    s32 spB0;
    s32 *var_a0;
    s32 *var_a0_2;
    s32 *var_a0_3;
    s32 *var_a0_4;
    s32 *var_a0_5;
    s32 *var_a0_6;
    s32 *var_a1;
    s32 *var_a1_2;
    s32 *var_a1_3;
    s32 *var_a1_4;
    s32 *var_a1_5;
    s32 *var_a1_6;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;

    if (!((*(u8 *)D_00D395A5) & 1)) {
        switch (arg0) {                             /* irregular */
        case 1:
            func_00D165B0(arg1);
            break;
        case 0:
            func_00D165B0(arg1);
            break;
        case 2:
            var_a0 = &spB0;
            var_a1 = ((void *)D_00D1F4B0);
            var_v1 = 5;
            do {
                var_v1 -= 1;
                *var_a0 = *var_a1;
                var_a1 += 4;
                var_a0 += 4;
            } while (var_v1 > 0);
            var_a0_2 = &sp90;
            var_a1_2 = ((void *)D_00D1F4D0);
            var_v1_2 = 5;
            do {
                var_v1_2 -= 1;
                *var_a0_2 = *var_a1_2;
                var_a1_2 += 4;
                var_a0_2 += 4;
            } while (var_v1_2 > 0);
            if (func_001C80F0(((void *)D_00D39640), var_a1_2) != 0) {
                func_00D16730(&spB0);
            } else {
                func_00D16730(&sp90);
            }
            break;
        case 3:
            var_a0_3 = &sp70;
            var_a1_3 = ((void *)D_00D1F4F0);
            var_v1_3 = 5;
            do {
                var_v1_3 -= 1;
                *var_a0_3 = *var_a1_3;
                var_a1_3 += 4;
                var_a0_3 += 4;
            } while (var_v1_3 > 0);
            var_a0_4 = &sp50;
            var_a1_4 = ((void *)D_00D1F510);
            var_v1_4 = 5;
            do {
                var_v1_4 -= 1;
                *var_a0_4 = *var_a1_4;
                var_a1_4 += 4;
                var_a0_4 += 4;
            } while (var_v1_4 > 0);
            if (func_001C80F0(((void *)D_00D39640), var_a1_4) != 0) {
                func_00D16730(&sp70);
            } else {
                func_00D16730(&sp50);
            }
            break;
        case 4:
            var_a0_5 = &sp30;
            var_a1_5 = ((void *)D_00D1F530);
            var_v1_5 = 5;
            do {
                var_v1_5 -= 1;
                *var_a0_5 = *var_a1_5;
                var_a1_5 += 4;
                var_a0_5 += 4;
            } while (var_v1_5 > 0);
            var_a0_6 = &sp10;
            var_a1_6 = ((void *)D_00D1F550);
            var_v1_6 = 5;
            do {
                var_v1_6 -= 1;
                *var_a0_6 = *var_a1_6;
                var_a1_6 += 4;
                var_a0_6 += 4;
            } while (var_v1_6 > 0);
            if (func_001C80F0(((void *)D_00D39640), var_a1_6) != 0) {
                func_00D16730(&sp30);
            } else {
                func_00D16730(&sp10);
            }
            break;
        default:
            func_00D165B0(arg1);
            break;
        }
    }
    return 0;
}
