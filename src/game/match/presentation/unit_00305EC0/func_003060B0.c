/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_002515B0(s32);
extern void func_00251B90();
extern void func_00306AA0(s32, u8 *, s32);
extern char D_003B52B0[];
extern char D_005EB270[];
extern char D_005EB274[];
extern char D_005EB278[];
extern char D_005EB27C[];
extern char D_005EB280[];
extern char D_005EB284[];
extern char D_005EB2A0[];
extern char D_005EB2A4[];
extern char D_005EB2A8[];
extern char D_005EB2AC[];

void func_003060B0(void) {
    s32 var_s1;
    u8 *var_s0;

    func_00251B90();
    func_002515B0(0);
    var_s1 = 0;
    var_s0 = (u8 *)D_003B52B0;
    do {
        func_00306AA0(var_s1, var_s0, 0x64);
        var_s1 += 1;
        var_s0 += 0xF0;
    } while (var_s1 < 0x20);
    (*(s32 *)D_005EB2A8) = 1;
    (*(s32 *)D_005EB2AC) = 1;
    (*(s32 *)D_005EB2A0) = 0x4B;
    (*(s32 *)D_005EB2A4) = 0x32;
    (*(s32 *)D_005EB274) = 0;
    (*(s32 *)D_005EB27C) = -1;
    (*(s32 *)D_005EB278) = 0;
    (*(s32 *)D_005EB280) = -1;
    (*(s32 *)D_005EB270) = 1;
    (*(s32 *)D_005EB284) = 1;
}
