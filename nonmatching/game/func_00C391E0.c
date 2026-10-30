/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00207BE0(void *);
extern void func_00209820(void);
extern void func_00207360(int);
extern s32 func_00207D10(void *);
M2C_UNK func_002084C0(void *);                      /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00B2ACF0(u16);                         /* extern */
M2C_UNK func_00C3A630(u16);                         /* extern */
M2C_UNK func_00C3A850(u16);                         /* extern */
extern u8 D_003EA7F6;

void func_00C391E0(void **arg0) {
    f32 var_f0;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f1_3;
    f32 var_f1_4;
    u16 temp_a1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *var_a1;

    temp_a1 = M2C_FIELD(*arg0, u16 *, 0x18);
    switch (temp_a1) {                              /* irregular */
    case 0x30:
        func_00C3A850(temp_a1);
        return;
    case 0x31:
        func_00B2ACF0(temp_a1);
        func_00209820();
        temp_a0 = M2C_FIELD(*arg0, void **, 4);
        if ((s32) M2C_FIELD(temp_a0, u16 *, 0x30) < 0x59A) {
            func_00207BE0(temp_a0);
            temp_a0_2 = M2C_FIELD(*arg0, void **, 4);
            if ((M2C_FIELD(temp_a0_2, f32 *, 0x38) > 1.0f) && (func_00207D10(temp_a0_2) != 0)) {
                func_002084C0(M2C_FIELD(*arg0, void **, 4));
                var_a1 = M2C_FIELD(*arg0, void **, 4);
                if ((s32) D_003EA7F6 >= 0) {
                    var_f1 = (f32) D_003EA7F6;
                } else {
                    var_f1 = 2.0f * (f32) (((u8) D_003EA7F6 >> 1) | (D_003EA7F6 & 1));
                }
                var_f0 = M2C_FIELD(var_a1, f32 *, 0x28) * var_f1;
                goto block_31;
            }
        } else if (func_00207D10(temp_a0) != 0) {
            func_00209A00(M2C_FIELD(*arg0, void **, 4), 0x489, 0);
            func_00207360((s32) M2C_FIELD(*arg0, void **, 4));
            var_a1 = M2C_FIELD(*arg0, void **, 4);
            if ((s32) D_003EA7F6 >= 0) {
                var_f1_2 = (f32) D_003EA7F6;
            } else {
                var_f1_2 = 2.0f * (f32) (((u8) D_003EA7F6 >> 1) | (D_003EA7F6 & 1));
            }
            var_f0 = M2C_FIELD(var_a1, f32 *, 0x28) * var_f1_2;
block_31:
            M2C_FIELD(var_a1, f32 *, 0x28) = var_f0;
        }
        return;
    case 0x32:
        func_00C3A630(temp_a1);
        return;
    case 0x33:
        func_00B2ACF0(temp_a1);
        func_00209820();
        temp_a0_3 = M2C_FIELD(*arg0, void **, 4);
        if ((s32) M2C_FIELD(temp_a0_3, u16 *, 0x30) < 0x59A) {
            func_00207BE0(temp_a0_3);
            temp_a0_4 = M2C_FIELD(*arg0, void **, 4);
            if ((M2C_FIELD(temp_a0_4, f32 *, 0x38) > 1.0f) && (func_00207D10(temp_a0_4) != 0)) {
                func_002084C0(M2C_FIELD(*arg0, void **, 4));
                var_a1 = M2C_FIELD(*arg0, void **, 4);
                if ((s32) D_003EA7F6 >= 0) {
                    var_f1_3 = (f32) D_003EA7F6;
                } else {
                    var_f1_3 = 2.0f * (f32) (((u8) D_003EA7F6 >> 1) | (D_003EA7F6 & 1));
                }
                var_f0 = M2C_FIELD(var_a1, f32 *, 0x28) * var_f1_3;
                goto block_31;
            }
        } else if (func_00207D10(temp_a0_3) != 0) {
            func_00209A00(M2C_FIELD(*arg0, void **, 4), 0x489, 0);
            func_00207360((s32) M2C_FIELD(*arg0, void **, 4));
            var_a1 = M2C_FIELD(*arg0, void **, 4);
            if ((s32) D_003EA7F6 >= 0) {
                var_f1_4 = (f32) D_003EA7F6;
            } else {
                var_f1_4 = 2.0f * (f32) (((u8) D_003EA7F6 >> 1) | (D_003EA7F6 & 1));
            }
            var_f0 = M2C_FIELD(var_a1, f32 *, 0x28) * var_f1_4;
            goto block_31;
        }
        break;
    }
}
