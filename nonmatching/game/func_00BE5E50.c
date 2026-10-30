/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern void func_00B364D0(u32);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, u16, s32);            /* extern */
M2C_UNK func_009B37F0(void *);                      /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
s8 func_00B35BF0(void **);                          /* extern */
M2C_UNK func_00B846A0(void **);                     /* extern */
extern char D_00CBCD81[];

void func_00BE5E50(void **arg0) {
    void *temp_a0;
    void *temp_a0_2;
    void *temp_v0;
    void *temp_v0_2;

    func_00B2ACF0();
    if ((*(u8 *)D_00CBCD81) != 2) {
        temp_a0 = M2C_FIELD(*arg0, void **, 4);
        if (func_00207D80(temp_a0, M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 2) * 2) != 0) {
            temp_a0_2 = M2C_FIELD(*arg0, void **, 4);
            func_00209A00(temp_a0_2, M2C_FIELD(temp_a0_2, u16 *, 0x30), (M2C_FIELD(M2C_FIELD(temp_a0_2, void **, 4), u8 *, 1) * 2) & 0xFFFF);
        }
    } else {
        M2C_FIELD(M2C_FIELD(*arg0, void **, 4), s8 *, 0x2D) = func_00B35BF0(arg0);
        M2C_FIELD(*arg0, s8 *, 0x66) = 0xFF;
        func_00209A00(M2C_FIELD(*arg0, void **, 4), 0x59AU, 0);
        func_00207390(M2C_FIELD(*arg0, void **, 4), 0xA);
        func_009B37F0(*arg0);
        func_00B846A0(arg0);
        temp_v0 = *arg0;
        M2C_FIELD(temp_v0, f32 *, 0xE0) = (f32) (M2C_FIELD(temp_v0, f32 *, 0xE0) - M2C_FIELD(temp_v0, f32 *, 0xF0));
        temp_v0_2 = *arg0;
        M2C_FIELD(temp_v0_2, f32 *, 0xE8) = (f32) (M2C_FIELD(temp_v0_2, f32 *, 0xE8) - M2C_FIELD(temp_v0_2, f32 *, 0xF8));
        M2C_FIELD(*arg0, s16 *, 0x18) = 0x60;
        func_00B364D0(2U);
    }
}
