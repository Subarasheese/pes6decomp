/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207780(void *, M2C_UNK, s32, s32);   /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, s32);        /* extern */
s32 func_00BBB8C0(s32);                             /* extern */
s32 func_00BC03A0(u16);                             /* extern */
extern void *D_003E74CC;
extern char D_00591BE4[];

void func_00B79550(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s1;
    s8 temp_s0;

    var_s1 = 0x18;
    if (func_00BC03A0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30)) == 0x3D) {
        var_s1 = 0x1E;
    }
    temp_s0 = func_00BBB8C0((*(u8 *)D_00591BE4) * 2) + 0x64;
    temp_v0 = func_00BBB8C0(M2C_FIELD(D_003E74CC, s32 *, 0x36D4) - 1);
    if (arg1 == 0) {
        func_00209A00(M2C_FIELD(arg0, void **, 4), 0x1BF, temp_v0 & 0xFFFF);
    } else {
        func_00207780(M2C_FIELD(arg0, void **, 4), 0x1BF, temp_v0 & 0xFFFF, var_s1 & 0xFF);
    }
    M2C_FIELD(arg0, s8 *, 0x62) = temp_s0;
}
