/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EDA30(void *, s32);
extern void func_001EEDA0(void *, u8);
extern void func_001ED880(void *, f32);
extern void func_001EDAE0(void *, s8);
extern void func_001ED840(void *, s8);
extern void func_001B4F10(void *, f32);
void *func_001B5350(f32 *, M2C_UNK, void *, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_001E6E10(s32);                             /* extern */
M2C_UNK func_001EDD90(void *);                      /* extern */
void *func_001EE0D0(s16);                           /* extern */
extern char D_00398700[];
extern char D_00398704[];
extern char D_00398708[];
extern char D_0039870C[];
extern char D_003F7794[];

s32 func_001BF880(void *arg0, s32 arg1) {
    f32 sp50;
    s32 sp54;
    f32 sp58;
    s32 sp5C;
    void *temp_a0;
    void *temp_v0;
    void *var_s0;

    var_s0 = NULL;
    sp50 = (*(f32 *)D_00398700);
    sp58 = (*(f32 *)D_00398708);
    sp5C = (*(s32 *)D_0039870C);
    sp54 = (*(s32 *)D_00398704);
    sp50 = (f32) -(*(s16 *)D_003F7794) / 2.0f;
    sp58 = (f32) (*(s16 *)D_003F7794);
    temp_v0 = func_001EE0D0((*(s16 *)D_003F7794));
    if (temp_v0 != NULL) {
        func_001EDA30(temp_v0, 1);
        func_001EDAE0(temp_v0, 1);
        func_001ED880(temp_v0, 0.0f);
        func_001ED840(temp_v0, 1);
        var_s0 = func_001B5350(&sp50, 0, temp_v0, func_001E6E10(arg1), 0, 0);
        func_001B4F10(var_s0, 0.0f);
    }
    temp_a0 = M2C_FIELD(arg0, void **, 0);
    if (temp_a0 != NULL) {
        func_001EDD90(temp_a0);
    }
    M2C_FIELD(arg0, void **, 0) = temp_v0;
    M2C_FIELD(arg0, void **, 4) = var_s0;
    func_001EEDA0(var_s0, 0U);
    return 1;
}
