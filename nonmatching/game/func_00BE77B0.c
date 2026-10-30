/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
u16 func_009B3480(void *, f32, f32);                /* extern */
s32 func_00B2A9C0();                                /* extern */
M2C_UNK func_00B2ACF0(void **);                     /* extern */
M2C_UNK func_00B35E10(void **, void *, void *);     /* extern */
M2C_UNK func_00B846A0(void **);                     /* extern */
M2C_UNK func_00B9E5D0(void **);                     /* extern */
extern char D_00CBCD81[];

void func_00BE77B0(void **arg0) {
    s32 temp_s1;
    u16 temp_v1;
    void *temp_a0;
    void *temp_v0;
    void *temp_v0_2;

    temp_s1 = func_00B2A9C0();
    func_00B2ACF0(arg0);
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) == 0) {
        if (func_00207D80(M2C_FIELD(*arg0, void **, 4), 0xC6) != 0) {
            if ((*(u8 *)D_00CBCD81) == 1) {
                M2C_FIELD(*arg0, s8 *, 0x66) = 0xFF;
                func_00209A00(M2C_FIELD(*arg0, void **, 4), 0x59B, 0);
                func_00B846A0(arg0);
                M2C_FIELD(*arg0, s16 *, 0x18) = 0x60;
            }
        } else if ((temp_s1 != 0) && (func_00207D80(M2C_FIELD(*arg0, void **, 4), temp_s1) != 0)) {
            temp_v0 = *arg0;
            func_00B35E10(arg0, temp_v0 + 0x6C, temp_v0 + 0x70);
            temp_a0 = *arg0;
            M2C_FIELD(*arg0, u16 *, 0x2C) = func_009B3480(temp_a0, M2C_FIELD(temp_a0, f32 *, 0x6C), M2C_FIELD(temp_a0, f32 *, 0x70));
        }
    } else {
        temp_v0_2 = *arg0;
        temp_v1 = M2C_FIELD(temp_v0_2, u16 *, 0x2C);
        M2C_FIELD(temp_v0_2, u16 *, 0x26) = temp_v1;
        M2C_FIELD(*arg0, u16 *, 0x28) = temp_v1;
        func_00208610(M2C_FIELD(*arg0, void **, 4));
        func_00B9E5D0(arg0);
    }
}
