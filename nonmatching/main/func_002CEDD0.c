/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDAE0(void *, s8);
extern void * func_001EDD00(void *);
extern void func_001EF900(void *, s8);
s32 func_001E6E10(M2C_UNK);                         /* extern */
void *func_001EDC80(void *, M2C_UNK);               /* extern */
M2C_UNK func_001EE630(void *, s16 *);               /* extern */
M2C_UNK func_001EEAC0(void *, s32);                 /* extern */
M2C_UNK func_002D0640(M2C_UNK, M2C_UNK, M2C_UNK, u8, M2C_UNK); /* extern */
M2C_UNK func_002D0A00(M2C_UNK, void *, s32);        /* extern */
extern char D_003AF368[];
extern char D_003AF36A[];
extern char D_003AF36C[];
extern char D_003AF36E[];

void func_002CEDD0(void *arg0, void *arg1, s32 arg2) {
    s16 sp58;
    s16 sp5A;
    s16 sp5C;
    s16 sp5E;
    M2C_UNK var_s3;
    s32 temp_v0;
    s32 var_s2;
    void *var_v0;

    sp58 = (*(s16 *)D_003AF368);
    sp5A = (*(s16 *)D_003AF36A);
    sp5C = (*(s16 *)D_003AF36C);
    sp5E = (*(s16 *)D_003AF36E);
    if (arg2 == 0) {
        var_s3 = 0x4FF2;
    } else {
        var_s3 = 0x4FF3;
    }
    func_002D0640(var_s3, 0x4FED, 2, M2C_FIELD(arg1, u8 *, 0x30), 6);
    var_s2 = 9;
    if (9 < 0xC) {
        do {
            func_002D0A00(var_s3, arg1 + (var_s2 * 2), var_s2);
            var_s2 += 1;
        } while (var_s2 < 0xC);
    }
    var_v0 = func_001EDC80(arg0, 0);
    if (var_v0 == NULL) {
        var_v0 = func_001EDD00(arg0);
    }
    temp_v0 = func_001E6E10(var_s3);
    if (temp_v0 != 0) {
        func_001EEAC0(var_v0, temp_v0);
        func_001EE630(var_v0, &sp58);
        func_001EF900(var_v0, 1);
    } else {
        func_001EF900(var_v0, 0);
    }
    func_001EDAE0(arg0, 1);
}
