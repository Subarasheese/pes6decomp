/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001582A0(s32 *, s32 *, s32);               /* extern */
extern char D_005B3700[];
extern char D_005B3704[];
extern char D_005BEDC0[];
extern char D_005BEDC4[];
extern char D_005BEDC8[];
extern char D_011E3914[];

void func_00158308(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    switch ((*(s32 *)D_011E3914)) {                           /* irregular */
    case 0:
        if (!((*(s32 *)D_005B3700) & 1)) {
            (*(s32 *)D_005B3700) |= 1;
            (*(s32 *)D_005BEDC0) = arg1;
            (*(s32 *)D_005BEDC4) = 0;
            M2C_FIELD(((void *)D_005BEDC8), s32 *, 0) = func_001582A0(((void *)D_005BEDC4), ((void *)D_005B3700), (*(s32 *)D_011E3914));
            M2C_FIELD(((void *)D_005BEDC8), s32 *, 8) = arg2;
            M2C_FIELD(((void *)D_005BEDC8), s32 *, 4) = arg1;
        }
        return;
    case 1:
        if (!((*(s32 *)D_005B3700) & 2) && !((*(s32 *)D_005B3704) & 2)) {
            (*(s32 *)D_005B3700) |= 2;
            (*(s32 *)D_005BEDC4) = (*(s32 *)D_011E3914);
            (*(s32 *)D_005BEDC0) = arg1;
            temp_v0 = func_001582A0(((void *)D_005BEDC0), ((void *)D_005B3700), (*(s32 *)D_011E3914));
            M2C_FIELD(((void *)D_005BEDC8), s32 *, 0x14) = arg2;
            M2C_FIELD(((void *)D_005BEDC8), s32 *, 0xC) = temp_v0;
            M2C_FIELD(((void *)D_005BEDC8), s32 *, 0x10) = arg1;
        }
        break;
    }
}
