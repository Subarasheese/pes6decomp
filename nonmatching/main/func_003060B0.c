/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002515B0(M2C_UNK);                     /* extern */
M2C_UNK func_00251B90();                            /* extern */
M2C_UNK func_00306AA0(s32, M2C_UNK *, M2C_UNK);     /* extern */
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
    M2C_UNK *var_s0;
    s32 var_s1;

    func_00251B90();
    func_002515B0(0);
    var_s1 = 0;
    var_s0 = ((void *)D_003B52B0);
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
    (*(s32 *)D_005EB278) = 0;
    (*(s32 *)D_005EB27C) = -1;
    (*(s32 *)D_005EB280) = -1;
    (*(s32 *)D_005EB270) = 1;
    (*(s32 *)D_005EB284) = 1;
}
