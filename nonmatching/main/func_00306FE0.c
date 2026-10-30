/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E9E94;
extern s32 D_003E9E98;
extern s32 D_003E9E9C;
extern s32 D_003E9EA0;
extern s32 D_003E9EB8;
extern char D_005EB270[];
extern char D_005EB3B4[];
extern char D_005EB60C[];
extern char D_005EB864[];
extern char D_005EBABC[];
extern char D_005EBD14[];
extern char D_005EBF6C[];
extern char D_005EC1C4[];
extern char D_005EC41C[];
extern char D_005EC674[];
extern char D_005EC8CC[];
extern char D_005ECB24[];

s32 func_00306FE0(s32 arg0) {
    M2C_UNK *var_a2;
    s32 var_a3;

    switch (arg0) {                                 /* irregular */
    case 0x86087897:
        if ((*(s32 *)D_005EB3B4) != 0) {
            (*(s32 *)D_005EB3B4) = 0;
        }
        break;
    case 0x84087898:
        if ((*(s32 *)D_005EB60C) != 0) {
            (*(s32 *)D_005EB60C) = 0;
        }
        break;
    case 0x8408789B:
        if ((*(s32 *)D_005EB864) != 0) {
            (*(s32 *)D_005EB864) = 0;
        }
        break;
    case 0x8408789C:
        if ((*(s32 *)D_005EBABC) != 0) {
            (*(s32 *)D_005EBABC) = 0;
        }
        break;
    case 0x840878BB:
        if ((*(s32 *)D_005EBD14) != 0) {
            (*(s32 *)D_005EBD14) = 0;
        }
        break;
    case 0x8E0800AC:
        if ((*(s32 *)D_005EBF6C) != 0) {
            (*(s32 *)D_005EBF6C) = 0;
        }
        break;
    case 0x840878B4:
        if ((*(s32 *)D_005EC1C4) != 0) {
            (*(s32 *)D_005EC1C4) = 0;
        }
        break;
    case 0x840878BC:
        if ((*(s32 *)D_005EC41C) != 0) {
            (*(s32 *)D_005EC41C) = 0;
        }
        break;
    case 0x840878B5:
        if ((*(s32 *)D_005EC674) != 0) {
            (*(s32 *)D_005EC674) = 0;
        }
        if ((*(s32 *)D_005EC8CC) != 0) {
            (*(s32 *)D_005EC8CC) = 0;
        }
        break;
    case 0x840878B7:
        if ((*(s32 *)D_005ECB24) != 0) {
block_65:
            (*(s32 *)D_005ECB24) = 0;
        }
        break;
    case 0x860878C9:
        if ((*(s32 *)D_005EB3B4) != 0) {
            (*(s32 *)D_005EB3B4) = 0;
        }
        break;
    case 0x840878CA:
        if ((*(s32 *)D_005EB60C) != 0) {
            (*(s32 *)D_005EB60C) = 0;
        }
        break;
    case 0x840878CD:
        if ((*(s32 *)D_005EB864) != 0) {
            (*(s32 *)D_005EB864) = 0;
        }
        break;
    case 0x840878CE:
        if ((*(s32 *)D_005EBABC) != 0) {
            (*(s32 *)D_005EBABC) = 0;
        }
        break;
    case 0x840878ED:
        if ((*(s32 *)D_005EBD14) != 0) {
            (*(s32 *)D_005EBD14) = 0;
        }
        break;
    case 0x8E0800DE:
        if ((*(s32 *)D_005EBF6C) != 0) {
            (*(s32 *)D_005EBF6C) = 0;
        }
        break;
    case 0x840878E6:
        if ((*(s32 *)D_005EC1C4) != 0) {
            (*(s32 *)D_005EC1C4) = 0;
        }
        break;
    case 0x840878EE:
        if ((*(s32 *)D_005EC41C) != 0) {
            (*(s32 *)D_005EC41C) = 0;
        }
        break;
    case 0x840878E7:
        if ((*(s32 *)D_005EC674) != 0) {
            (*(s32 *)D_005EC674) = 0;
        }
        if ((*(s32 *)D_005EC8CC) != 0) {
            (*(s32 *)D_005EC8CC) = 0;
        }
        break;
    case 0x840878E9:
        if ((*(s32 *)D_005ECB24) != 0) {
            goto block_65;
        }
        break;
    }
    if (arg0 == 0x86087865) {
        D_003E9E94 = 0;
    }
    if (arg0 == 0x86087897) {
        D_003E9E98 = 0;
    }
    if (arg0 == 0x860878C9) {
        D_003E9E9C = 0;
    }
    if (arg0 == 0x860878FB) {
        D_003E9EA0 = 0;
    }
    var_a3 = 0;
    var_a2 = ((void *)D_005EB270);
    do {
        if ((M2C_FIELD(var_a2, s32 *, 0x40) == arg0) && (M2C_FIELD(var_a2, s32 *, 0x144) != 0)) {
            M2C_FIELD((((void *)D_005EB270) + (var_a3 * 0x258)), s32 *, 0x144) = 0;
        }
        var_a3 += 1;
        var_a2 += 0x258;
    } while (var_a3 < 0x20);
    D_003E9EB8 = var_a3;
    return 0;
}
