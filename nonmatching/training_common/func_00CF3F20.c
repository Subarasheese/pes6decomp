/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026E1A0(s32, s32, s32, s32, s32, s32, s32);
extern u32 func_001CDA50(s32);
s32 func_0023CE10(M2C_UNK, u8, u8);                 /* extern */
extern char D_00CFFF24[];
extern char D_00CFFF26[];
extern char D_00CFFF28[];
extern char D_00CFFF2C[];
extern char D_00CFFF40[];

void func_00CF3F20(M2C_UNK arg0, M2C_UNK arg1, u8 arg2) {
    s32 temp_s0;
    u16 temp_v1;
    u8 var_a1;
    u8 var_a2;
    void *temp_a1;

    var_a2 = arg2;
    temp_a1 = ((*(u16 *)D_00CFFF24) * 0x10) + (*(s32 *)D_00CFFF40);
    (*(s32 *)D_00CFFF2C) = M2C_FIELD(temp_a1, s32 *, 4);
    temp_v1 = M2C_FIELD(temp_a1, u16 *, 2);
    if (temp_v1 == 0) {
        var_a1 = M2C_FIELD(temp_a1, u8 *, 8);
        (*(s16 *)D_00CFFF26) = (s16) var_a1;
        (*(u16 *)D_00CFFF28) = 0;
    } else {
        var_a2 = M2C_FIELD(temp_a1, u8 *, 8);
        var_a1 = (u8) ((s32) var_a2 / (s32) (temp_v1 & 0xFFFF));
        (*(u16 *)D_00CFFF28) = (u16) var_a1;
        if ((s32) (*(u16 *)D_00CFFF28) < 5) {
            (*(u16 *)D_00CFFF28) = 5;
        }
    }
    if ((M2C_FIELD((((*(u16 *)D_00CFFF24) * 0x10) + (*(s32 *)D_00CFFF40)), s32 *, 0xC) != 0) && (func_0023CE10(0, var_a1, var_a2) == 0) && (M2C_FIELD((((*(u16 *)D_00CFFF24) * 0x10) + (*(s32 *)D_00CFFF40)), s32 *, 0xC) != -1)) {
        func_0026E1A0(0, 0xD, 0, 0, 0, 0, 0);
        temp_s0 = M2C_FIELD((((*(u16 *)D_00CFFF24) * 0x10) + (*(s32 *)D_00CFFF40)), s32 *, 0xC);
        if (func_001CDA50(0) == 5) {
            func_0026E1A0(0, 0, temp_s0, 0, 0x64, 0, 0);
        }
    }
}
