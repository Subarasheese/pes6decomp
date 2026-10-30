/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C13080(s32, s32, s32);                   /* extern */
void *func_00C13280(s32);                           /* extern */
s32 func_00C132C0(s32);                             /* extern */
s32 func_00C13840();                                /* extern */
s32 func_00C17E10(s8, s32);                         /* extern */
extern char D_003DA4D0[];
extern s8 D_003E9D51;
extern s8 D_003E9D52;
extern s8 D_003E9D53;

s32 func_002C4840(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s8 temp_s0;

    temp_v1 = arg1 & 0xFF;
    var_s1 = 4;
    temp_s0 = (temp_v1 >> 5) & 1;
    if ((func_00C17E10(temp_s0, temp_v1 & 0x1F) & 0xFF) != 0xFF) {
        temp_a0 = func_00C13840();
        D_003E9D53 = 0xFF;
        D_003E9D51 = temp_s0;
        D_003E9D52 = 0;
        temp_v0 = func_00C13080(temp_a0, arg0, (*(s32 *)D_003DA4D0));
        if (temp_v0 != -1) {
            temp_v1_2 = func_00C132C0(temp_v0) & 0xFF;
            switch (temp_v1_2) {                    /* irregular */
            case 31:
                var_s1 = ((u32) M2C_FIELD(func_00C13280(temp_v0), u32 *, 4) >> ((arg2 & 0xFF) * 2)) & 3;
                break;
            case 30:
                var_s1 = ((s32) M2C_FIELD((func_00C13280(temp_v0) + (arg2 & 0xFF)), u8 *, 4) >> 5) & 3;
                break;
            }
        }
    }
    return var_s1;
}
