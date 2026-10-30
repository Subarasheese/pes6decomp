/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00629020(s32);
extern void func_00629330(u32);
extern int func_002E8BD0(void);
extern s32 D_003E9DF8;
extern char D_0065B4F0[];
extern char D_0065B4F4[];
extern char D_0065B4F6[];
extern char D_0065C328[];
extern char D_0065C32A[];
extern char D_0065C32B[];
extern char D_0065C32C[];
extern char D_0065C32E[];

void func_0063FDF0(s32 arg0) {
    s32 var_s0;

    var_s0 = func_002E8BD0();
    if (arg0 == 0) {
        var_s0 = 0;
    }
    func_00629020(0);
    (*(f32 *)D_0065C328) = (*(f32 *)D_0065B4F0);
    (*(s16 *)D_0065C32C) = (*(s16 *)D_0065B4F4);
    (*(u8 *)D_0065C32E) = (*(u8 *)D_0065B4F6);
    switch (var_s0) {                               /* irregular */
    case 27:
        func_00629020(2);
        return;
    case 40:
    case 39:
    case 43:
    case 42:
    case 41:
    case 32:
    case 31:
    case 26:
    case 25:
    case 24:
    case 23:
    case 22:
    case 20:
    case 18:
    case 17:
    case 16:
    case 15:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 5:
    case 3:
    case 2:
    case 1:
        func_00629330(1U);
        func_00629020(1);
        if (D_003E9DF8 == 0x2A) {
            (*(s8 *)D_0065C32B) = 1;
            return;
        }
        return;
    case 33:
        func_00629020(3);
        (*(s8 *)D_0065C32A) = 0;
        break;
    }
}
