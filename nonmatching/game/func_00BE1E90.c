/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern void func_00209820(void);
extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00209A00(void *, u16, s32);            /* extern */
s32 func_009B3070(u16, s32);                        /* extern */
u32 func_009B33A0(void *, s32, s32);                /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B9E2B0(void **);                     /* extern */
extern char D_00CBCAD1[];

void func_00BE1E90(void **arg0) {
    s32 temp_s0;
    u32 var_s1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;

    func_00B2ACF0();
    func_00209820();
    switch ((*(u8 *)D_00CBCAD1)) {                           /* irregular */
    case 0x54:
    case 0x53:
        var_s1 = 0x100000;
        break;
    case 0x5A:
    case 0x60:
    case 0x55:
    case 0x5E:
        var_s1 = 0xC40000;
        break;
    default:
        var_s1 = 0x640000;
        break;
    }
    temp_a0 = *arg0;
    temp_s0 = func_009B3480(temp_a0, M2C_FIELD(temp_a0, f32 *, 0x6C), M2C_FIELD(temp_a0, f32 *, 0x70)) & 0xFFFF;
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
        func_00208610(M2C_FIELD(*arg0, void **, 4));
        if ((*(u8 *)D_00CBCAD1) != 0x5C) {
            func_00B9E2B0(arg0);
        } else {
            (*(u8 *)D_00CBCAD1) = 0xC;
        }
    } else {
        temp_a0_2 = M2C_FIELD(*arg0, void **, 4);
        if ((func_00207D80(temp_a0_2, M2C_FIELD(M2C_FIELD(temp_a0_2, void **, 4), u8 *, 2) * 2) != 0) && ((func_009B3070(M2C_FIELD(*arg0, u16 *, 0x26), temp_s0) & 0xFFFF) < 0x1000)) {
            temp_a0_3 = *arg0;
            if (var_s1 < func_009B33A0(temp_a0_3, (s32) M2C_FIELD(temp_a0_3, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0_3, f32 *, 0x70))) {
                temp_a0_4 = M2C_FIELD(*arg0, void **, 4);
                func_00209A00(temp_a0_4, M2C_FIELD(temp_a0_4, u16 *, 0x30), (M2C_FIELD(M2C_FIELD(temp_a0_4, void **, 4), u8 *, 1) * 2) & 0xFFFF);
            }
        }
    }
}
