/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008FCDC0(M2C_UNK);                         /* extern */
s32 func_008FCE70(M2C_UNK);                         /* extern */
s32 func_008FCF00(M2C_UNK);                         /* extern */
extern char D_00908380[];
extern char D_00908384[];
extern char D_00908388[];
extern char D_0090838C[];
extern char D_00908390[];
extern char D_00908394[];
extern char D_00908398[];
extern char D_0090839C[];
extern char D_009083A0[];
extern char D_009083A4[];
extern char D_009083A8[];
extern char D_009083AC[];

s32 func_008F8810(s32 arg0) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    if (arg0 & 0x3F) {
        return 0;
    }
    switch (arg0) {                                 /* irregular */
    case 0x10000:
        (*(s32 *)D_00908394) = func_008FCDC0(1);
        if ((((*(s32 *)D_00908390) + (*(s32 *)D_0090838C)) == 0) && (func_008FCDC0(0) != 0)) {
            return 0;
        }
        if (((*(s32 *)D_00908394) != 0) && ((*(s32 *)D_00908394) != (*(s32 *)D_00908390)) && ((*(s32 *)D_00908394) != (*(s32 *)D_0090838C))) {
            return 0;
        }
        return 2;
    case 0x8000:
        (*(s32 *)D_00908388) = func_008FCE70(1);
        if ((((*(s32 *)D_00908384) + (*(s32 *)D_00908380)) == 0) && (func_008FCE70(0) != 0)) {
            var_v0 = 0;
        } else if (((*(s32 *)D_00908388) != 0) && ((*(s32 *)D_00908388) != (*(s32 *)D_00908384)) && ((*(s32 *)D_00908388) != (*(s32 *)D_00908380))) {
            var_v0 = 0;
        } else {
            var_v0 = 2;
        }
        return var_v0;
    case 0x4000:
        (*(s32 *)D_009083AC) = 0x100D2;
        if (((*(s32 *)D_009083A8) + (*(s32 *)D_009083A4)) == 0) {
            var_v0_2 = 0;
        } else if ((0x100D2 != 0) && ((*(s32 *)D_009083A8) != 0x100D2) && ((*(s32 *)D_009083A4) != 0x100D2)) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = 2;
        }
        return var_v0_2;
    case 0x2000:
        (*(s32 *)D_009083A0) = func_008FCF00(1);
        if ((((*(s32 *)D_0090839C) + (*(s32 *)D_00908398)) == 0) && (func_008FCF00(0) != 0)) {
            var_v0_3 = 0;
        } else if (((*(s32 *)D_009083A0) != 0) && ((*(s32 *)D_009083A0) != (*(s32 *)D_0090839C)) && ((*(s32 *)D_009083A0) != (*(s32 *)D_00908398))) {
            var_v0_3 = 0;
        } else {
            var_v0_3 = 2;
        }
        return var_v0_3;
    case 0x400:
        return 0;
    case 0x80:
        return 0;
    case 0x1000:
        return 0;
    case 0x40:
        return 0;
    case 0x200:
    case 0x100:
        return 0;
    default:
        return 0;
    }
}
