/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDC80(void *, s32);
extern void func_001EF900(void *, s8);
extern void * func_001E6E10(s32);
M2C_UNK func_001EE630(void *, s16 *);               /* extern */
M2C_UNK func_001EEAC0(void *, void *);              /* extern */
s32 func_00BA4160(s32, M2C_UNK);                    /* extern */
s32 func_00BA43D0(s32);                             /* extern */
M2C_UNK func_00BA5D90(s16, s16);                    /* extern */
extern char D_00CB6EA8[];
extern char D_00CB6EAA[];
extern char D_00CB6EAC[];
extern char D_00CB6EAE[];
extern void *D_00CE4E7C;

void func_00BC35B0(void *arg0) {
    s16 sp58;
    s16 sp5A;
    s16 sp5C;
    s16 sp5E;
    s32 temp_s1;
    s32 var_s0;
    s32 var_s3;
    void *temp_s2;

    sp58 = (*(s16 *)D_00CB6EA8);
    sp5A = (*(s16 *)D_00CB6EAA);
    sp5C = (*(s16 *)D_00CB6EAC);
    sp5E = (*(s16 *)D_00CB6EAE);
    func_00BA5D90((*(s16 *)D_00CB6EAA), (*(s16 *)D_00CB6EA8));
    var_s0 = 0;
    var_s3 = M2C_FIELD(arg0, s8 *, 0x1B) * 0x28;
    do {
        temp_s2 = func_001EDC80(D_00CE4E7C, var_s0);
        if (func_00BA43D0(var_s3) == 0) {
            func_001EF900(temp_s2, 0);
        } else {
            temp_s1 = func_00BA4160(var_s3, 1);
            func_001EF900(temp_s2, 1);
            func_001EEAC0(temp_s2, func_001E6E10(temp_s1));
            func_001EE630(temp_s2, &sp58);
        }
        var_s0 += 1;
        var_s3 += 1;
    } while (var_s0 < 0x28);
}
