/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B364D0(u32);
M2C_UNK func_00BD3B80(void **, s32);                /* extern */
M2C_UNK func_00BD3BA0(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BD4040(void **, u8);                 /* extern */
M2C_UNK func_00C36F50(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00C37610(s32, M2C_UNK *);              /* extern */
M2C_UNK func_00C37670(s32, s32);                    /* extern */
M2C_UNK func_00C37730(s32, M2C_UNK);                /* extern */
M2C_UNK func_00C37880(s32, void **, u8);            /* extern */
s32 func_00C379B0();                                /* extern */
extern char D_00C9E420[];
extern char D_00C9E4A0[];
extern char D_00C9E508[];
extern char D_00CBCAD1[];
extern char D_00CBCAD8[];
extern char D_00CBCADC[];

void func_00B8B310(void **arg0) {
    M2C_UNK *var_s1;
    s32 temp_s2;
    s32 var_s0;
    void *temp_v0;
    void *temp_v1;

    temp_s2 = func_00C379B0();
    var_s1 = NULL;
    switch ((*(u8 *)D_00CBCAD1)) {                           /* irregular */
    case 0x6:
        var_s1 = ((void *)D_00C9E420);
        break;
    case 0x9:
        var_s1 = ((void *)D_00C9E4A0);
        break;
    case 0x72:
        var_s1 = ((void *)D_00C9E508);
        break;
    }
    M2C_FIELD(*arg0, f32 *, 0x6C) = (f32) (*(f32 *)D_00CBCAD8);
    M2C_FIELD(*arg0, f32 *, 0x70) = (f32) (*(f32 *)D_00CBCADC);
    func_00BD4040(arg0, M2C_FIELD(M2C_FIELD(var_s1, void **, 0), u8 *, 2));
    func_00BD3BA0(arg0, 4, 1);
    func_00BD3BA0(arg0, 5, 1);
    if (!(((*(f32 *)D_00CBCAD8) * (*(f32 *)D_00CBCADC)) < 0.0f)) {
        var_s0 = 1;
    } else {
        var_s0 = 0;
    }
    if ((*(u8 *)D_00CBCAD1) == 0x72) {
        var_s0 = (var_s0 ^ 1) & 0xFF;
    }
    func_00BD3B80(arg0, var_s0);
    temp_v0 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    func_00C37880(temp_s2, arg0, M2C_FIELD(var_s1, u8 *, 8));
    func_00C37610(temp_s2, var_s1);
    func_00C37670(temp_s2, var_s0);
    temp_v1 = M2C_FIELD(var_s1, void **, 4);
    if ((M2C_FIELD(temp_v1, u16 *, 0) == 0) && (M2C_FIELD(temp_v1, u16 *, 2) == 0)) {
        func_00C36F50(temp_s2, 2, 1);
        func_00C37730(temp_s2, 1);
    } else {
        func_00C37730(temp_s2, 2);
    }
    func_00B364D0(0U);
    M2C_FIELD(*arg0, s16 *, 0x18) = 0xCE;
}
