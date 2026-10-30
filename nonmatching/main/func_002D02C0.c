/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDAE0(void *, s8);
extern void * func_001EDD00(void *);
extern void func_001EF900(void *, s8);
s32 func_001E6E10(M2C_UNK);                         /* extern */
void *func_001EDC80(void *, M2C_UNK);               /* extern */
M2C_UNK func_001EE630(void *, s16 *);               /* extern */
M2C_UNK func_001EEAC0(void *, s32);                 /* extern */
M2C_UNK func_002D0430(s32, s32, M2C_UNK, s16);      /* extern */
extern char D_003AF328[];
extern char D_003AF32A[];
extern char D_003AF32C[];
extern char D_003AF32E[];

void func_002D02C0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 sp48;
    s16 sp4A;
    s16 sp4C;
    s16 sp4E;
    M2C_UNK var_s2;
    s32 temp_v0;
    void *var_v0;

    sp48 = (*(s16 *)D_003AF328);
    sp4A = (*(s16 *)D_003AF32A);
    sp4C = (*(s16 *)D_003AF32C);
    sp4E = (*(s16 *)D_003AF32E);
    if (arg3 == 0) {
        var_s2 = 0x4FEE;
    } else {
        var_s2 = 0x4FEF;
    }
    func_002D0430(arg1, arg2 % 2, var_s2, (*(s16 *)D_003AF328));
    var_v0 = func_001EDC80(arg0, 0);
    if (var_v0 == NULL) {
        var_v0 = func_001EDD00(arg0);
    }
    temp_v0 = func_001E6E10(var_s2);
    if (temp_v0 != 0) {
        func_001EEAC0(var_v0, temp_v0);
        func_001EE630(var_v0, &sp48);
        func_001EF900(var_v0, 1);
    } else {
        func_001EF900(var_v0, 0);
    }
    func_001EDAE0(arg0, 1);
}
