/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00B364A0(void);
extern void func_00B364D0(u32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, u16, M2C_UNK);        /* extern */
M2C_UNK func_00B846A0(void *);                      /* extern */
M2C_UNK func_00B89870(void *);                      /* extern */
M2C_UNK func_00BD3CF0(f32, f32);                    /* extern */
extern char D_00CBCD81[];
extern char D_00CBCD8E[];

void func_00B9D840(void *arg0) {
    s32 temp_v1;
    u16 var_a1;
    u16 var_s0;
    void *temp_v0;
    void *temp_v1_2;

    temp_v0 = M2C_FIELD(arg0, void **, 0);
    func_00BD3CF0(M2C_FIELD(temp_v0, f32 *, 0x6C), M2C_FIELD(temp_v0, f32 *, 0x70));
    if ((*(u8 *)D_00CBCD81) == 1) {
        (*(u8 *)D_00CBCD81) = 2;
        var_s0 = 0x80;
        func_00B364D0(2U);
        func_00B89870(arg0);
        temp_v1 = func_00B364A0() & 0xFF;
        switch (temp_v1) {                          /* irregular */
        case 5:
            var_a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x3E);
            var_s0 = M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x1A);
            break;
        case 4:
            var_a1 = 0x4EC;
            var_s0 = 0x23;
            break;
        case 3:
            var_a1 = 0x4F0;
            var_s0 = 0x23;
            break;
        case 2:
            var_a1 = 0x4EE;
            var_s0 = 0x23;
            break;
        default:
            var_a1 = 0x2ED;
            break;
        }
        M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), u8 *, 0x2D) = (u8) (*(u8 *)D_00CBCD8E);
        temp_v1_2 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_v1_2, u16 *, 0x26) = (u16) M2C_FIELD(temp_v1_2, u16 *, 0x28);
        func_00209A00(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), var_a1, 0);
        func_00207390(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4), 0xA);
        func_00B846A0(arg0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), u16 *, 0x18) = var_s0;
    }
}
