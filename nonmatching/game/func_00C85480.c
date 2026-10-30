/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
M2C_UNK func_00C89450(s32, u8);                     /* extern */
M2C_UNK func_00C89490(s32, void *);                 /* extern */
M2C_UNK func_00C89510(s32, void *);                 /* extern */
M2C_UNK func_00C89550(s32, void *);                 /* extern */
M2C_UNK func_00C89590(s32, void *);                 /* extern */
M2C_UNK func_00C89690(s32, f32 *);                  /* extern */
M2C_UNK func_00C89780(s32, s32);                    /* extern */
M2C_UNK func_00C897C0(s32, s32);                    /* extern */
extern char D_00CA8810[];
extern char D_00CCC200[];

void func_00C85480(void) {
    f32 sp50;
    f32 sp54;
    s32 sp58;
    s32 sp5C;
    M2C_UNK *var_s1;
    s32 temp_a1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    void *temp_s0;

    var_s3 = 0;
    var_s1 = ((void *)D_00CCC200);
    do {
        temp_s2 = var_s3 + 0x66;
        temp_s0 = var_s1 + 0xA0;
        func_00C89690(temp_s2, var_s1 + 0x10);
        func_00C89590(temp_s2, temp_s0 + 0x38);
        func_00C89490(temp_s2, ((void *)D_00CA8810) + (M2C_FIELD(var_s1, s32 *, 0xF0) * 4));
        temp_a1 = M2C_FIELD(temp_s0, s32 *, 0x48);
        if (temp_a1 != M2C_FIELD(temp_s0, s32 *, 0x4C)) {
            func_00C89780(temp_s2, temp_a1);
            M2C_FIELD(temp_s0, s32 *, 0x4C) = (s32) M2C_FIELD(temp_s0, s32 *, 0x48);
        }
        func_00C89550(temp_s2, temp_s0 + 8);
        var_v0 = M2C_FIELD(var_s1, s32 *, 0x128) != 0;
        if (var_v0 != 0) {
            var_v0 = M2C_FIELD(var_s1, s32 *, 0x10C) != 0;
        }
        func_00C897C0(var_s3 + 0x66, var_v0 & 0xFF);
        temp_s2_2 = var_s3 + 0x5E;
        sp58 = 0;
        sp50 = M2C_FIELD(var_s1, f32 *, 0x60);
        sp54 = M2C_FIELD(var_s1, f32 *, 0x64);
        sp5C = 0;
        func_00C89690(temp_s2_2, &sp50);
        if (func_002DCA30() == 0) {
            func_00C89490(temp_s2_2, ((void *)D_00CA8810) + (M2C_FIELD(var_s1, s32 *, 0x3C) * 4));
        }
        func_00C89450(temp_s2_2, M2C_FIELD(var_s1, u8 *, 0x20));
        func_00C89510(temp_s2_2, var_s1 + 0x24 + 8);
        var_v0_2 = M2C_FIELD(var_s1, s32 *, 0x128) != 0;
        if (var_v0_2 != 0) {
            var_v0_2 = M2C_FIELD(var_s1, s32 *, 0x70) != 0;
        }
        func_00C897C0(var_s3 + 0x5E, var_v0_2 & 0xFF);
        var_s3 += 1;
        var_s1 += 0x140;
    } while (var_s3 < 8);
}
