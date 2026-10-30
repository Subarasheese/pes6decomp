/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00154070(s32);                             /* extern */
s32 func_0025EC50(M2C_UNK);                         /* extern */
s32 func_0025EC60(M2C_UNK);                         /* extern */
s32 func_0025EC80(M2C_UNK);                         /* extern */
s32 func_0025ECE0(M2C_UNK);                         /* extern */
extern char D_0058D280[];
extern char D_0058D290[];
extern char D_0058D294[];
extern char D_0058D298[];
extern char D_0058D29C[];
extern char D_0058D2A0[];

void func_0025F3C0(void) {
    M2C_UNK *var_s0;
    s32 var_s1;

    var_s0 = ((void *)D_0058D280);
    (*(s32 *)D_0058D298) = func_0025EC80(1);
    (*(s32 *)D_0058D29C) = func_0025EC50(1);
    (*(s32 *)D_0058D290) = func_0025ECE0(1);
    (*(s32 *)D_0058D294) = func_0025EC60(1);
    var_s1 = 0;
    (*(s32 *)D_0058D2A0) = func_0025EC60(2);
    do {
        M2C_FIELD(var_s0, s32 *, 0) = func_00154070((*(s32 *)D_0058D298));
        var_s1 += 1;
        M2C_FIELD(var_s0, s32 *, 4) = func_00154070((*(s32 *)D_0058D29C));
        var_s0 += 8;
    } while (var_s1 < 2);
}
