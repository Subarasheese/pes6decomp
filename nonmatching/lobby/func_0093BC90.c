/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00985C60(u32);
extern s32 func_009F9E00(s32);
extern s32 func_00947FB0(s32, s8);
extern s32 func_00947DB0(s32, s32);
extern s32 func_009480B0(s32, s32);
extern s32 func_009FA1E0(void);
extern s32 func_009481B0(s32);
extern s32 func_00947C80(s32, s32);
extern s32 func_009F49E0(void);
extern s32 func_009FA0D0(s32);
extern s32 func_009F9F60(s32);
extern s32 func_00948200(s32);
extern s32 func_00948250(s32);
extern s32 func_00985C70(void);
extern s32 func_009FA180(void);
extern void * func_009FA010(s32);
extern s32 func_009F9EB0(s32);
extern s32 func_00947EB0(s32, s8);
extern s32 func_00947B50(s32, s32);
extern void * func_009F4A40(void);
extern s32 func_0093D820(void);
extern void * func_009F9D40(s32);
M2C_UNK func_00985A10();                            /* extern */
s32 func_009F42A0(s32);                             /* extern */
M2C_UNK func_009F4A20(s32);                         /* extern */
s32 func_009F5100(s32, s32);                        /* extern */
extern char D_00A43828[];
extern char D_00A43830[];

s32 func_0093BC90(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s1;
    s32 var_v0;

    var_s1 = 0;
    temp_s0 = (arg0 / 100) * 0x64;
    switch ((*(s32 *)D_00A43828)) {                           /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        func_0093D820();
        if (func_00985C70() == 0) {
            func_00985C60(func_009F4A40());
        }
        (*(s32 *)D_00A43830) = 0;
        (*(s32 *)D_00A43828) += 1;
        /* fallthrough */
    case 1:                                         /* switch 1 */
        temp_v0 = func_00985C70();
        var_v0 = 0;
        if (temp_v0 != 0) {
            func_00985A10();
            func_009F49E0();
            var_v0 = func_009F5100(temp_v0, temp_s0);
        }
        if (var_v0 != 0) {
            func_009481B0(temp_s0);
            (*(s32 *)D_00A43828) += 1;
        }
        break;
    case 2:                                         /* switch 1 */
        temp_v0_2 = func_009F42A0(func_00985C70());
        switch (temp_v0_2) {                        /* switch 2; irregular */
        case 2:                                     /* switch 2 */
            break;
        case 3:                                     /* switch 2 */
            (*(s32 *)D_00A43830) = 0;
            (*(s32 *)D_00A43828) += 1;
            break;
        default:                                    /* switch 2 */
            (*(s32 *)D_00A43830) = 1;
            (*(s32 *)D_00A43828) += 1;
            break;
        }
        break;
    case 3:                                         /* switch 1 */
        if ((*(s32 *)D_00A43830) != 0) {
            func_00948250(0);
            var_s1 = -1;
        } else {
            temp_v0_3 = func_009FA180();
            func_00948250(temp_v0_3);
            func_00948200(func_009FA1E0());
loop_22:
            if (var_s1 < temp_v0_3) {
                func_009480B0(var_s1, func_009FA0D0(var_s1));
                func_00947FB0(var_s1, func_009F9F60(var_s1) & 0xFF);
                func_00947EB0(var_s1, func_009F9EB0(var_s1) & 0xFF);
                func_00947DB0(var_s1, func_009F9E00(var_s1));
                func_00947C80(var_s1, func_009FA010(var_s1));
                func_00947B50(var_s1, func_009F9D40(var_s1));
                var_s1 += 1;
                goto loop_22;
            }
            var_s1 = 1;
        }
        temp_v0_4 = func_00985C70();
        if (temp_v0_4 != 0) {
            func_009F49E0();
            func_009F4A20(temp_v0_4);
            func_00985C60(0U);
        }
        (*(s32 *)D_00A43830) = 0;
        (*(s32 *)D_00A43828) = 0;
        break;
    default:                                        /* switch 1 */
        *(s32 *)0xA43828 = 0;
        break;
    }
    return var_s1;
}
