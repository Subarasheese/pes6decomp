/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_008F91E0(s32);
extern int func_002CBF10(void);
extern void func_008F91C0(s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_008F7160(s32);                             /* extern */
M2C_UNK func_008F9350();                            /* extern */
extern s32 D_003EA61C;
extern char D_008FA0A0[];
extern char D_008FA9E0[];

s32 func_008F6600(void) {
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 var_s0;
    s32 var_s2;

    var_s0 = 0;
    switch ((*(s32 *)D_008FA9E0)) {                           /* irregular */
    case 0x100:
        func_0026E840(0x84028400);
        func_008F91E0(0);
        func_008F9350();
block_32:
        var_s0 = 1;
        break;
    case 0x10:
    case 0x1:
        func_0026E840(0x8400F802);
        temp_v0 = func_002CBF10();
        if ((temp_v0 != 3) && (temp_v0 != 2)) {

        }
        (*(s32 *)D_008FA0A0) += 3;
        temp_v0_2 = func_002CBF10();
        if ((temp_v0_2 != 3) && (temp_v0_2 != 2)) {

        }
        temp_hi = (s32) (*(s32 *)D_008FA0A0) % 4;
        (*(s32 *)D_008FA0A0) = temp_hi;
        func_008F91C0(temp_hi);
        break;
    case 0x20:
    case 0x2:
        func_0026E840(0x8400F802);
        (*(s32 *)D_008FA0A0) += 1;
        temp_v0_3 = func_002CBF10();
        if ((temp_v0_3 != 3) && (temp_v0_3 != 2)) {

        }
        temp_hi_2 = (s32) (*(s32 *)D_008FA0A0) % 4;
        (*(s32 *)D_008FA0A0) = temp_hi_2;
        func_008F91C0(temp_hi_2);
        break;
    case 0x200:
        func_0026E840(0x84008401);
        temp_s0 = D_003EA61C;
        temp_v0_4 = func_002CBF10();
        if ((temp_v0_4 != 3) && (temp_v0_4 != 2)) {

        }
        var_s2 = 0;
        if (4 > 0) {
loop_25:
            if (temp_s0 != func_008F7160(var_s2)) {
                var_s2 += 1;
                if (var_s2 >= 4) {
                    goto block_30;
                }
                goto loop_25;
            }
        } else {
block_30:
            var_s2 = 0;
        }
        (*(s32 *)D_008FA0A0) = var_s2;
        func_008F91E0(0);
        func_008F9350();
        goto block_32;
    }
    return var_s0;
}
