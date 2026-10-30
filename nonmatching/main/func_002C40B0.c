/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002C4140(s32, s32);                    /* extern */
s32 func_00C12FD0(s32, s32, s32, s32);              /* extern */
s32 func_00C137F0();                                /* extern */
s32 func_00C13840();                                /* extern */
extern char D_003DA450[];
extern s8 D_003E9D51;
extern s8 D_003E9D52;
extern s8 D_003E9D53;

void func_002C40B0(s32 arg0, s8 arg1, s32 arg2) {
    s32 temp_s1;
    s32 temp_v0;

    if (arg0 != 0) {
        D_003E9D51 = arg1;
        D_003E9D53 = 0xFF;
        D_003E9D52 = 0;
        temp_s1 = func_00C13840();
        temp_v0 = func_00C12FD0(temp_s1, func_00C137F0(), (*(s32 *)D_003DA450), arg2);
        if (temp_v0 != -1) {
            func_002C4140(arg0, temp_v0);
        }
    }
}
