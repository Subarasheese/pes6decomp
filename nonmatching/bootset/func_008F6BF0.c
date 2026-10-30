/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_008F91E0(s32);
extern int func_002CBF10(void);
extern void func_008F91C0(s32);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_008F9350();                            /* extern */
extern char D_008FA0A0[];
extern char D_008FA9E0[];

s32 func_008F6BF0(void) {
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;

    var_s0 = 0;
    switch ((*(s32 *)D_008FA9E0)) {                           /* irregular */
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
    case 0x100:
        func_0026E840(0x84028400);
        func_008F91E0(0);
        func_008F9350();
        var_s0 = 1;
        break;
    }
    return var_s0;
}
