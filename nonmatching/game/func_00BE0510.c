/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern void func_00209820(void);
extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00209A00(void *, u16, s32);            /* extern */
s16 func_009B3480(void *, f32, f32);                /* extern */
s32 func_00B2A9C0();                                /* extern */
M2C_UNK func_00B2ACF0(void **);                     /* extern */
M2C_UNK func_00B35E10(void **, void *, void *);     /* extern */
M2C_UNK func_00B9E3E0(void **);                     /* extern */
s32 func_00B9E580(u16);                             /* extern */
M2C_UNK func_00B9E5D0(void **);                     /* extern */
extern char D_00CBCAD1[];

void func_00BE0510(void **arg0) {
    s32 temp_s0;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_v0;
    void *temp_v1;

    temp_s0 = func_00B2A9C0();
    func_00B2ACF0(arg0);
    func_00209820();
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) == 0) {
        temp_a0 = *arg0;
        if (M2C_FIELD(temp_a0, u8 *, 0x4E) == 0) {
            goto block_2;
        }
        temp_a0_2 = M2C_FIELD(temp_a0, void **, 4);
        if (func_00207D80(temp_a0_2, M2C_FIELD(M2C_FIELD(temp_a0_2, void **, 4), u8 *, 2) * 2) != 0) {
            temp_v1 = *arg0;
            M2C_FIELD(temp_v1, u8 *, 0x4E) = (u8) (M2C_FIELD(temp_v1, u8 *, 0x4E) - 1);
            temp_a0_3 = M2C_FIELD(*arg0, void **, 4);
            func_00209A00(temp_a0_3, M2C_FIELD(temp_a0_3, u16 *, 0x30), (M2C_FIELD(M2C_FIELD(temp_a0_3, void **, 4), u8 *, 1) * 2) & 0xFFFF);
        } else {
block_2:
            if ((temp_s0 != 0) && (func_00207D80(M2C_FIELD(*arg0, void **, 4), temp_s0) != 0)) {
                temp_v0 = *arg0;
                func_00B35E10(arg0, temp_v0 + 0x6C, temp_v0 + 0x70);
                temp_a0_4 = *arg0;
                M2C_FIELD(*arg0, s16 *, 0x2C) = func_009B3480(temp_a0_4, M2C_FIELD(temp_a0_4, f32 *, 0x6C), M2C_FIELD(temp_a0_4, f32 *, 0x70));
            }
        }
    } else {
        func_00208610(M2C_FIELD(*arg0, void **, 4));
        if ((*(u8 *)D_00CBCAD1) != 0x31) {
            if (func_00B9E580(M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30)) != 0) {
                func_00B9E3E0(arg0);
            } else {
                func_00B9E5D0(arg0);
            }
        } else {
            func_00B9E5D0(arg0);
        }
    }
}
