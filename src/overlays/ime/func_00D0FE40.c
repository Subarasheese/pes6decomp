/* compiler: mwcc-3.0.1b151 */
#include "types.h"

extern s32 func_008357B0(void);
extern void func_00D116F0(s32, s32);

extern char D_00D376E8[];
extern char D_00D376F0[];
extern char D_00D37720[];

s32 func_00D0FE40(void) {
    u32 var_v0;

    if ((*(s32 *)D_00D376E8) == 0) {
        var_v0 = 0;
    } else {
        var_v0 = (*(u32 *)D_00D37720);
    }
    switch (var_v0) {
    default:
        func_00D116F0((*(s32 *)D_00D376F0), 0);
        break;
    case 2:
        func_00D116F0((*(s32 *)D_00D376F0), 0);
        break;
    case 3:
        func_00D116F0((*(s32 *)D_00D376F0), 1);
        break;
    case 4:
        func_00D116F0((*(s32 *)D_00D376F0), 2);
        break;
    case 5:
        func_00D116F0((*(s32 *)D_00D376F0), 3);
        break;
    case 6:
        func_00D116F0((*(s32 *)D_00D376F0), 4);
        break;
    case 7:
        func_00D116F0((*(s32 *)D_00D376F0), 5);
        break;
    case 8:
        func_00D116F0((*(s32 *)D_00D376F0), 6);
        break;
    case 9:
        func_00D116F0((*(s32 *)D_00D376F0), 7);
        break;
    case 10:
        func_00D116F0((*(s32 *)D_00D376F0), 8);
        break;
    case 11:
        func_00D116F0((*(s32 *)D_00D376F0), 9);
        break;
    case 12:
    case 13:
        func_00D116F0((*(s32 *)D_00D376F0), 0xB);
        break;
    case 14:
        func_00D116F0((*(s32 *)D_00D376F0), 0xA);
        break;
    case 15:
        func_00D116F0((*(s32 *)D_00D376F0), 0xA);
        break;
    case 16:
        func_00D116F0((*(s32 *)D_00D376F0), 0xA);
        break;
    case 17:
        if (func_008357B0() == 1) {
            func_00D116F0((*(s32 *)D_00D376F0), 0xC);
        } else {
            func_00D116F0((*(s32 *)D_00D376F0), 0x10);
        }
        break;
    case 18:
        if (func_008357B0() == 1) {
            func_00D116F0((*(s32 *)D_00D376F0), 0xF);
        } else {
            func_00D116F0((*(s32 *)D_00D376F0), 0x10);
        }
        break;
    case 19:
        if (func_008357B0() == 1) {
            func_00D116F0((*(s32 *)D_00D376F0), 0xD);
        } else {
            func_00D116F0((*(s32 *)D_00D376F0), 0x10);
        }
        break;
    case 20:
        if (func_008357B0() == 1) {
            func_00D116F0((*(s32 *)D_00D376F0), 0xE);
        } else {
            func_00D116F0((*(s32 *)D_00D376F0), 0x10);
        }
        break;
    }
    return 1;
}
