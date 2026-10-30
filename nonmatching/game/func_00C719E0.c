/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
extern void * func_001EDD00(void *);
M2C_UNK func_001F6C20(s32, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C716C0(s32);                         /* extern */
M2C_UNK func_00C8B160(s32, void *);                 /* extern */
extern char D_00CCBCD8[];
extern void *D_00CCCE30;
extern void *D_00CCCE34;

void func_00C719E0(void) {
    s32 temp_s0;
    s32 var_s0;
    s32 var_s2;
    void *temp_s1;
    void *temp_v0;
    void *temp_v0_2;

    temp_s0 = (*(s32 *)D_00CCBCD8);
    temp_v0 = func_001EDD00(D_00CCCE34);
    func_001F6C20(temp_s0, temp_v0, 1, 0);
    func_00C8B160(0x53, temp_v0);
    var_s2 = 0x54;
    temp_s1 = D_00CCCE30;
    do {
        temp_v0_2 = func_001EDD00(temp_s1);
        func_001EF900(temp_v0_2, 0);
        func_00C8B160(var_s2, temp_v0_2);
        var_s2 += 1;
    } while (var_s2 < 0x5A);
    var_s0 = 0;
    do {
        func_00C716C0(var_s0 & 0xFF);
        var_s0 += 1;
    } while (var_s0 < 4);
}
