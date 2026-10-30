/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001582A0(s32);
extern char D_005B3700[];
extern char D_005BEDC0[];
extern char D_005BEDC4[];
extern char D_005BEDC8[];
extern char D_011E3914[];

void func_001583F8(s32 arg0, s32 arg1) {
    s32 temp_v0;

    switch ((*(s32 *)D_011E3914)) {                           /* irregular */
    case 0:
        if ((*(s32 *)D_005B3700) & 1) {
            (*(s32 *)D_005BEDC0) = arg1;
            (*(s32 *)D_005B3700) &= ~1;
            (*(s32 *)D_005BEDC4) = 0;
            M2C_FIELD(((void *)D_005BEDC8), s32 *, 0) = func_001582A0(arg0);
            M2C_FIELD(((void *)D_005BEDC8), s32 *, 4) = arg1;
        }
        return;
    case 1:
        if ((*(s32 *)D_005B3700) & 2) {
            (*(s32 *)D_005BEDC0) = arg1;
            (*(s32 *)D_005B3700) &= ~2;
            (*(s32 *)D_005BEDC4) = (*(s32 *)D_011E3914);
            temp_v0 = func_001582A0(arg0);
            M2C_FIELD(((void *)D_005BEDC8), s32 *, 0x10) = arg1;
            M2C_FIELD(((void *)D_005BEDC8), s32 *, 0xC) = temp_v0;
        }
        break;
    }
}
