/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0017F9A0(s32, M2C_UNK *, s32 *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_001A2C10(M2C_UNK, s32);                /* extern */
s32 func_001CE740(s32 *, s32);                      /* extern */
extern char D_0051FF88[];
extern char D_0051FF8C[];
extern char D_00520360[];
extern char D_00520384[];
extern char D_005203A4[];
extern M2C_UNK func_001A2BD0;

void func_001A2B30(s32 arg0) {
    s32 sp2C;
    s32 temp_a2;
    s32 temp_s0;

    (*(s32 *)D_0051FF88) = 0;
    sp2C = arg0;
    temp_a2 = (*(s32 *)D_005203A4);
    (*(s32 *)D_0051FF8C) = 0;
    if (temp_a2 != 0) {
        (*(s32 *)D_00520384) = temp_a2;
        (*(s32 *)D_005203A4) = 0;
        if (arg0 == 1) {
            func_001A2C10(1, temp_a2);
        }
    } else {
        temp_s0 = func_001CE740(((void *)D_0051FF8C), temp_a2);
        do {

        } while (func_0017F9A0(temp_s0, &func_001A2BD0, &sp2C, 4, ((void *)D_00520360)) != 1);
    }
}
