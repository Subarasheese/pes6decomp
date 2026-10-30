/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
extern void func_0027B6D0(void *, s32);
M2C_UNK func_00208610(void **);                     /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00BD4040(void **, M2C_UNK);            /* extern */
extern void *D_00CBCB40;
extern void *D_00CBCBA0;
extern void *D_00CBCC00;

void func_00B6D820(void **arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    u16 temp_a1;
    void **temp_a2;
    void *temp_v1;

    func_00B2ACF0();
    temp_v1 = *arg0;
    temp_a2 = M2C_FIELD(temp_v1, void ***, 4);
    temp_a1 = M2C_FIELD(temp_a2, u16 *, 0x30);
    switch (temp_a1) {                              /* irregular */
    case 0x59E:
        temp_f1 = M2C_FIELD(temp_a2, f32 *, 0x38);
        if (!(temp_f1 < 324.0f) && (temp_f1 < 390.0f)) {
            M2C_FIELD(temp_v1, u16 *, 0x26) = (u16) (M2C_FIELD(temp_v1, u16 *, 0x26) + ((M2C_FIELD(temp_v1, u16 *, 0x38) * ((M2C_FIELD(temp_a2, u8 *, 0x2D) != 0) ? -1 : 1)) & 0xFFFF));
        }
        if (func_00207D10(M2C_FIELD(*arg0, void ***, 4)) != 0) {
            func_00208610(M2C_FIELD(*arg0, void ***, 4));
            M2C_FIELD(*arg0, s16 *, 0x18) = 2;
            M2C_FIELD(*arg0, s8 *, 0x66) = 0;
            func_00BD4040(arg0, 1);
        }
        M2C_FIELD(D_00CBCBA0, f32 *, 0x110) = (f32) M2C_FIELD(M2C_FIELD(*M2C_FIELD(*arg0, void ***, 4), void **, 0x10), f32 *, 0x110);
        M2C_FIELD(D_00CBCBA0, f32 *, 0x114) = (f32) M2C_FIELD(M2C_FIELD(*M2C_FIELD(*arg0, void ***, 4), void **, 0x10), f32 *, 0x114);
        M2C_FIELD(D_00CBCBA0, f32 *, 0x118) = (f32) M2C_FIELD(M2C_FIELD(*M2C_FIELD(*arg0, void ***, 4), void **, 0x10), f32 *, 0x118);
        func_0027B6D0(D_00CBCBA0, 0);
        return;
    case 0x59F:
        temp_f1_2 = M2C_FIELD(temp_a2, f32 *, 0x38);
        if (!(temp_f1_2 < 478.0f) && (temp_f1_2 < 530.0f)) {
            M2C_FIELD(temp_v1, u16 *, 0x26) = (u16) (M2C_FIELD(temp_v1, u16 *, 0x26) + ((M2C_FIELD(temp_v1, u16 *, 0x38) * ((M2C_FIELD(temp_a2, u8 *, 0x2D) != 0) ? -1 : 1)) & 0xFFFF));
        }
        if (func_00207D10(M2C_FIELD(*arg0, void ***, 4)) != 0) {
            func_00208610(M2C_FIELD(*arg0, void ***, 4));
            M2C_FIELD(*arg0, s16 *, 0x18) = 2;
            M2C_FIELD(*arg0, s8 *, 0x66) = 0;
            func_00BD4040(arg0, 1);
        }
        M2C_FIELD(D_00CBCC00, f32 *, 0x110) = (f32) M2C_FIELD(M2C_FIELD(*M2C_FIELD(*arg0, void ***, 4), void **, 0x10), f32 *, 0x110);
        M2C_FIELD(D_00CBCC00, f32 *, 0x114) = (f32) M2C_FIELD(M2C_FIELD(*M2C_FIELD(*arg0, void ***, 4), void **, 0x10), f32 *, 0x114);
        M2C_FIELD(D_00CBCC00, f32 *, 0x118) = (f32) M2C_FIELD(M2C_FIELD(*M2C_FIELD(*arg0, void ***, 4), void **, 0x10), f32 *, 0x118);
        func_0027B6D0(D_00CBCC00, 0);
        return;
    case 0x5A0:
        temp_f1_3 = M2C_FIELD(temp_a2, f32 *, 0x38);
        if (!(temp_f1_3 < 248.0f) && (temp_f1_3 < 342.0f)) {
            M2C_FIELD(temp_v1, u16 *, 0x26) = (u16) (M2C_FIELD(temp_v1, u16 *, 0x26) + ((M2C_FIELD(temp_v1, u16 *, 0x38) * ((M2C_FIELD(temp_a2, u8 *, 0x2D) != 0) ? -1 : 1)) & 0xFFFF));
        }
        if (func_00207D10(M2C_FIELD(*arg0, void ***, 4)) != 0) {
            func_00208610(M2C_FIELD(*arg0, void ***, 4));
            M2C_FIELD(*arg0, s16 *, 0x18) = 2;
            M2C_FIELD(*arg0, s8 *, 0x66) = 0;
            func_00BD4040(arg0, 1);
        }
        M2C_FIELD(D_00CBCB40, f32 *, 0x110) = (f32) M2C_FIELD(M2C_FIELD(*M2C_FIELD(*arg0, void ***, 4), void **, 0x10), f32 *, 0x110);
        M2C_FIELD(D_00CBCB40, f32 *, 0x114) = (f32) M2C_FIELD(M2C_FIELD(*M2C_FIELD(*arg0, void ***, 4), void **, 0x10), f32 *, 0x114);
        M2C_FIELD(D_00CBCB40, f32 *, 0x118) = (f32) M2C_FIELD(M2C_FIELD(*M2C_FIELD(*arg0, void ***, 4), void **, 0x10), f32 *, 0x118);
        func_0027B6D0(D_00CBCB40, 0);
        return;
    }
}
