/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00B364A0(void);
extern void func_00B364D0(u32);
M2C_UNK func_001CD9E0(f32);                         /* extern */
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_009B33A0(void *, s32, s32);                /* extern */
M2C_UNK func_00B846A0(void **);                     /* extern */
M2C_UNK func_00B89870(void **);                     /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
extern char D_00CBCD81[];
extern char D_00CBCD8E[];

void func_00B9D250(void **arg0) {
    M2C_UNK var_a1;
    f32 var_f12;
    s32 temp_v0;
    s32 temp_v1;
    void *temp_a0;
    void *temp_v0_2;

    temp_a0 = *arg0;
    temp_v0 = func_009B33A0(temp_a0, (s32) M2C_FIELD(temp_a0, f32 *, 0x6C), (s32) M2C_FIELD(temp_a0, f32 *, 0x70));
    if (temp_v0 < 0) {
        var_f12 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    } else {
        var_f12 = (f32) temp_v0;
    }
    func_001CD9E0(var_f12);
    temp_v0_2 = *arg0;
    func_00BD3CF0(arg0, M2C_FIELD(temp_v0_2, f32 *, 0x6C), M2C_FIELD(temp_v0_2, f32 *, 0x70));
    if ((*(u8 *)D_00CBCD81) == 1) {
        (*(u8 *)D_00CBCD81) = 2;
        func_00B364D0(2U);
        func_00B89870(arg0);
        temp_v1 = func_00B364A0() & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 4:
            var_a1 = 0x4EC;
            break;
        case 3:
            var_a1 = 0x4F0;
            break;
        case 2:
            var_a1 = 0x4EE;
            break;
        default:
            var_a1 = 0x2ED;
            break;
        }
        M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u8 *, 0x2D) = (u8) (*(u8 *)D_00CBCD8E);
        func_00209A00(M2C_FIELD(*arg0, void **, 4), var_a1, 0);
        func_00207390(M2C_FIELD(*arg0, void **, 4), 8);
        M2C_FIELD(*arg0, s8 *, 0x66) = 0xFF;
        func_00B846A0(arg0);
        M2C_FIELD(*arg0, s16 *, 0x18) = 0x23;
    }
}
