/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDAE0(void *, s8);
extern void * func_001EDD00(void *);
extern s32 func_002F82B0(s32, s32);
extern void func_001EF900(void *, s8);
s32 func_001E6E10(M2C_UNK);                         /* extern */
void *func_001EDC80(void *, M2C_UNK);               /* extern */
M2C_UNK func_001EE630(void *, s16 *);               /* extern */
M2C_UNK func_001EEAC0(void *, s32);                 /* extern */
M2C_UNK func_002D0640(M2C_UNK, M2C_UNK, M2C_UNK, u8, M2C_UNK); /* extern */
M2C_UNK func_002D0A00(M2C_UNK, s32, s32);           /* extern */
extern char D_003AF378[];
extern char D_003AF37A[];
extern char D_003AF37C[];
extern char D_003AF37E[];

void func_002CE720(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 sp58;
    s16 sp5A;
    s16 sp5C;
    s16 sp5E;
    M2C_UNK var_s3;
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;
    void *var_v0;

    temp_s0 = func_002F82B0(arg1, arg2);
    sp58 = (*(s16 *)D_003AF378);
    sp5A = (*(s16 *)D_003AF37A);
    sp5C = (*(s16 *)D_003AF37C);
    sp5E = (*(s16 *)D_003AF37E);
    if (arg3 == 0) {
        var_s3 = 0x4ED4;
    } else {
        var_s3 = 0x4ED5;
    }
    func_002D0640(var_s3, 0x4FED, 3, M2C_FIELD(temp_s0, u8 *, 0x31), 7);
    var_s1 = 0xC;
    if (0xC < 0xF) {
        do {
            func_002D0A00(var_s3, temp_s0 + (var_s1 * 2), var_s1);
            var_s1 += 1;
        } while (var_s1 < 0xF);
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
