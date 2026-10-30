/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_001D79A0(void *, u16);
M2C_UNK func_001D7A20(void *, s32 *, u16);          /* extern */
s32 func_008B9B70(s32, s32 *, M2C_UNK);             /* extern */
M2C_UNK func_008B9C60(s32, M2C_UNK);                /* extern */
s32 func_008B9C80(M2C_UNK, s32 *, f32);             /* extern */
s32 func_008B9F90(s32, s32 *, f32);                 /* extern */
extern char D_008EC6E0[];
extern char D_008EC6E8[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x58, 0x5c, 0x60, 0x64], gap at: 0x8. */
void func_008EAA60(void *arg0) {
    s32 sp70;
    s32 sp74;
    s32 sp78;
    s32 sp7C;
    f32 temp_f0;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s4;
    s8 temp_a0_2;
    u16 *var_s3;
    void *temp_a0;
    void *var_s2;

    temp_a0 = M2C_FIELD(arg0, void **, 0x3C);
    var_s0 = 0;
    if ((temp_a0 != NULL) && (M2C_FIELD(arg0, s32 *, 0x24) != 0)) {
        if (M2C_FIELD(arg0, s32 *, 0x2C) != 0) {
            return;
        }
        temp_f0 = func_001D79A0(temp_a0, (*(u16 *)D_008EC6E0));
        sp70 = 0;
        sp74 = 0;
        sp78 = 0;
        sp7C = 0;
        temp_s2 = func_008B9F90(M2C_FIELD(arg0, s32 *, 0x24), &sp70, temp_f0);
        func_001D7A20(M2C_FIELD(arg0, void **, 0x3C), &sp70, (*(u16 *)D_008EC6E0));
        M2C_FIELD(arg0, s32 *, 0x2C) = func_008B9B70(temp_s2, &sp70, 0);
        temp_a0_2 = M2C_FIELD(arg0, s8 *, 0);
        switch (temp_a0_2) {                        /* irregular */
        case 0:
            var_s0 = 2;
            break;
        case 2:
            var_s0 = 2;
            break;
        case 1:
            var_s0 = 1;
            break;
        }
        var_s4 = 0;
        if (var_s0 > 0) {
            var_s2 = arg0;
            var_s3 = ((void *)D_008EC6E8);
            do {
                func_001D7A20(M2C_FIELD(arg0, void **, 0x3C), &sp70, *var_s3);
                temp_v0 = func_008B9C80(0x12, &sp70, temp_f0);
                M2C_FIELD(var_s2, s32 *, 0x34) = temp_v0;
                func_008B9C60(temp_v0, 1);
                var_s4 += 1;
                var_s3 += 4;
                var_s2 += 4;
            } while (var_s4 < var_s0);
        }
    }
}
