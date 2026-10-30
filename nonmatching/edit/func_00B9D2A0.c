/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B91000(s32, s32);
extern s32 func_002E8CB0(s32, s8);
extern s32 func_002E8C60(void);
extern s32 func_00B91150(void);
extern s32 func_00B91100(void);
extern s32 func_00B911B0(void);
extern int func_002E9310(void);
extern s32 func_00B90CB0(void);
extern s32 func_00B90BA0(void);
extern s32 func_00154F98(s32);
extern int func_002E8BD0(void);
extern void func_00B90DD0(void);
extern void func_002E92D0(int);
extern void func_002E8BA0(void);
extern void func_00B90FB0(s32, s32);
extern void func_00B90E70(u8);
M2C_UNK func_00B90D50(s32);                         /* extern */
M2C_UNK func_00B9D570();                            /* extern */
M2C_UNK func_00BC3F80(s32);                         /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
extern s32 D_003EAF60;
extern char D_00CB5358[];
extern char D_00CB535C[];
extern char D_00CE40B0[];
extern char D_00CE40B4[];
extern char D_00CE40B8[];
extern char D_00CE40BC[];
extern char D_00CE40C0[];

s32 func_00B9D2A0(void) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    if (func_00154F98(1) != 1) {
        var_s0 = 0xF30000;
    } else {
        var_s0 = 0xF30068;
    }
    switch ((*(s32 *)D_00CE40B0)) {                           /* irregular */
    case 0x12:
        if (var_s0 != D_003EAF60) {
            func_00B91000(var_s0, 0);
            func_00B90DD0();
        }
        func_00B9D570();
        break;
    default:
        func_00B90D50((*(s32 *)D_00CE40B0));
        (*(s32 *)D_00CE40B0) = 0x10;
        /* fallthrough */
    case 0x10:
        func_00B911B0();
        func_00B91000(var_s0, 0);
        func_00B91000(0xF30001, 1);
        func_00B90FB0((*(s32 *)D_00CB5358), 0);
        func_00B90FB0((*(s32 *)D_00CB535C), 1);
        func_00B90DD0();
        func_00B91150();
        func_00B90E70(0U);
        (*(s32 *)D_00CE40B0) = 0x11;
        break;
    case 0x11:
        if (func_00B90CB0() == 1) {
            func_00B90E70(0U);
            (*(s32 *)D_00CE40B4) = 0;
            func_00BC3FB0(3);
            (*(s32 *)D_00CE40BC) = 0x20;
            (*(s32 *)D_00CE40C0) = 0x50;
            (*(s32 *)D_00CE40B0) = 0x12;
        }
        break;
    case 0x20:
        func_00BC3F80((*(s32 *)D_00CE40B0));
        func_00B91100();
        (*(s32 *)D_00CE40B0) = 0x21;
        break;
    case 0x21:
        if (func_00B90BA0() == 1) {
            func_002E92D0(1);
            func_002E8CB0(0x31, 0);
            (*(s32 *)D_00CE40B0) = 0x22;
        }
        break;
    case 0x22:
        func_002E8C60();
        if (func_002E9310() == 5) {
            (*(s32 *)D_00CE40B8) = 1;
            (*(s32 *)D_00CE40B0) = 0x50;
        } else if (func_002E9310() == 1) {
            (*(s32 *)D_00CE40B8) = 2;
            func_002E8BA0();
            if (func_002E8BD0() == 0) {
                (*(s32 *)D_00CE40B0) = 0x10;
            }
        }
        break;
    case 0x50:
        func_00B91100();
        (*(s32 *)D_00CE40B0) = 0x51;
        break;
    case 0x51:
        if (func_00B90BA0() != 0) {
        case 0x52:
            var_s1 = (*(s32 *)D_00CE40B8);
            (*(s32 *)D_00CE40B0) = 0;
        }
        break;
    }
    D_003EAF60 = var_s0;
    return var_s1;
}
